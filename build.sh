#!/usr/bin/env bash
# build.sh — cross-compile RaidGuide.dll for GW2 Nexus (Linux → Windows x64)
# Usage:
#   ./build.sh            incremental build
#   ./build.sh --clean    wipe build dir and rebuild from scratch
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
BUILD_DIR="$SCRIPT_DIR/build"
TOOLCHAIN="$SCRIPT_DIR/toolchain-mingw.cmake"
ICON_SRC="$SCRIPT_DIR/icon.png"
ICON_HDR="$SCRIPT_DIR/src/icon_png.h"
DLL="$BUILD_DIR/RaidGuide.dll"

# ── Flags ──────────────────────────────────────────────────────────────────────
CLEAN=0
for arg in "$@"; do
    case "$arg" in
        --clean) CLEAN=1 ;;
        *) echo "Unknown argument: $arg"; exit 1 ;;
    esac
done

# ── Prerequisites ──────────────────────────────────────────────────────────────
for cmd in cmake python3 x86_64-w64-mingw32-g++; do
    if ! command -v "$cmd" &>/dev/null; then
        echo "ERROR: '$cmd' not found."
        exit 1
    fi
done

# ── Clean ─────────────────────────────────────────────────────────────────────
if [ "$CLEAN" -eq 1 ] && [ -d "$BUILD_DIR" ]; then
    echo "Cleaning $BUILD_DIR ..."
    rm -rf "$BUILD_DIR"
fi

# ── Icon header ───────────────────────────────────────────────────────────────
# Regenerate if icon.png is newer than the header (or header doesn't exist).
if [ ! -f "$ICON_HDR" ] || [ "$ICON_SRC" -nt "$ICON_HDR" ]; then
    echo "Regenerating icon header ..."
    python3 "$SCRIPT_DIR/gen_icon.py"
fi

# ── Configure ─────────────────────────────────────────────────────────────────
# Always pass configure args; CMake skips the work when nothing has changed.
echo "Configuring ..."
cmake -B "$BUILD_DIR" \
      -DCMAKE_TOOLCHAIN_FILE="$TOOLCHAIN" \
      -DCMAKE_BUILD_TYPE=Release \
      "$SCRIPT_DIR"

# ── Build ─────────────────────────────────────────────────────────────────────
echo "Building ..."
cmake --build "$BUILD_DIR" --config Release -- -j"$(nproc)"

# ── Report ────────────────────────────────────────────────────────────────────
if [ -f "$DLL" ]; then
    SIZE=$(du -sh "$DLL" | cut -f1)
    echo ""
    echo "  Build OK  →  build/RaidGuide.dll  ($SIZE)"
    echo "  Copy to:     C:\\Program Files\\Guild Wars 2\\addons\\RaidGuide.dll"
    echo ""
else
    echo "ERROR: RaidGuide.dll not found after build."
    exit 1
fi
