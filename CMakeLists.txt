cmake_minimum_required(VERSION 3.20)
project(RaidGuide VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ── ImGui headers ─────────────────────────────────────────────────────────────
# Point this to wherever your Nexus SDK's ImGui headers live.
# Typical Nexus addon layouts use external/imgui/ or extern/imgui/.
# §16: Do NOT link ImGui as a static library — headers only.
set(IMGUI_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/imgui"
    CACHE PATH "Path to ImGui headers from the Nexus SDK")

add_library(RaidGuide SHARED
    src/dllmain.cpp
    src/ui/RaidGuide.cpp
    src/data/WingData.cpp
    # ImGui sources compiled directly into the DLL (§16).
    # Cross-compilation has no Nexus import library, so we include these here.
    # At runtime we still call SetCurrentContext + SetAllocatorFunctions (§1)
    # so the shared Nexus context is used correctly.
    ${IMGUI_INCLUDE_DIR}/imgui.cpp
    ${IMGUI_INCLUDE_DIR}/imgui_draw.cpp
    ${IMGUI_INCLUDE_DIR}/imgui_tables.cpp
    ${IMGUI_INCLUDE_DIR}/imgui_widgets.cpp
)

target_include_directories(RaidGuide PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}   # Nexus.h lives at project root
    ${IMGUI_INCLUDE_DIR}          # imgui.h (§16 — headers only, no static link)
    src
)

set_target_properties(RaidGuide PROPERTIES
    PREFIX  ""
    SUFFIX  ".dll"
    OUTPUT_NAME "RaidGuide"
)

if (WIN32 OR MINGW)
    target_compile_definitions(RaidGuide PRIVATE
        _WIN32_WINNT=0x0A00
        WIN32_LEAN_AND_MEAN
        NOMINMAX
    )
    target_link_libraries(RaidGuide PRIVATE
        -static-libgcc
        -static-libstdc++
        -Wl,-Bstatic,--whole-archive,-lwinpthread,--no-whole-archive
    )
endif()

# Cross-compile hint: mingw-w64 toolchain
# cmake -B build -DCMAKE_TOOLCHAIN_FILE=toolchain-mingw.cmake
# Example toolchain-mingw.cmake:
#   set(CMAKE_SYSTEM_NAME Windows)
#   set(CMAKE_C_COMPILER   x86_64-w64-mingw32-gcc)
#   set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
#   set(CMAKE_RC_COMPILER  x86_64-w64-mingw32-windres)
