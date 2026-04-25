#include "RaidGuide.h"
#include "../data/WingData.h"
#include "../Shared.h"
#include "imgui.h"

namespace RaidGuide
{

// ── State ──────────────────────────────────────────────────────────────────────
static bool s_Visible    = false;
static bool s_ImguiReady = false;

// ── Color palette ──────────────────────────────────────────────────────────────
//   GW2-inspired dark fantasy scheme

// Window chrome
static const ImVec4 kWinBg           = { 0.09f, 0.08f, 0.13f, 0.97f };
static const ImVec4 kTitleBg         = { 0.15f, 0.11f, 0.04f, 1.00f };
static const ImVec4 kTitleBgActive   = { 0.25f, 0.19f, 0.06f, 1.00f };
static const ImVec4 kScrollBg        = { 0.06f, 0.05f, 0.09f, 1.00f };
static const ImVec4 kScrollGrab      = { 0.45f, 0.35f, 0.12f, 1.00f };
static const ImVec4 kScrollGrabHover = { 0.60f, 0.47f, 0.16f, 1.00f };

// Tab bar
static const ImVec4 kTabBg             = { 0.15f, 0.12f, 0.04f, 1.0f };
static const ImVec4 kTabHover          = { 0.28f, 0.22f, 0.07f, 1.0f };
static const ImVec4 kTabActive         = { 0.40f, 0.31f, 0.10f, 1.0f };
static const ImVec4 kTabUnfocusedAct   = { 0.30f, 0.23f, 0.08f, 1.0f };
static const ImVec4 kTabBarLine        = { 0.55f, 0.42f, 0.13f, 1.0f };

// Wing header (shown inside each tab as a title)
static const ImVec4 kWingTitle         = { 0.80f, 0.65f, 0.22f, 1.0f };

// Boss collapsing header
static const ImVec4 kBossBg           = { 0.26f, 0.20f, 0.06f, 1.0f };
static const ImVec4 kBossBgHover      = { 0.36f, 0.28f, 0.09f, 1.0f };
static const ImVec4 kBossBgActive     = { 0.46f, 0.36f, 0.12f, 1.0f };
static const ImVec4 kBossText         = { 0.98f, 0.82f, 0.28f, 1.0f };

// Section labels ("Major Mechanics" / "Minor Mechanics")
static const ImVec4 kLblMajor         = { 0.88f, 0.63f, 0.20f, 1.0f };
static const ImVec4 kLblMinor         = { 0.52f, 0.63f, 0.72f, 1.0f };
static const ImVec4 kSepMajor         = { 0.52f, 0.38f, 0.11f, 1.0f };
static const ImVec4 kSepMinor         = { 0.28f, 0.36f, 0.42f, 1.0f };

// Major mechanic tree nodes
static const ImVec4 kMajBg            = { 0.13f, 0.15f, 0.26f, 1.0f };
static const ImVec4 kMajBgHover       = { 0.18f, 0.20f, 0.34f, 1.0f };
static const ImVec4 kMajBgActive      = { 0.22f, 0.25f, 0.42f, 1.0f };

// Minor mechanic tree nodes
static const ImVec4 kMinBg            = { 0.11f, 0.17f, 0.14f, 1.0f };
static const ImVec4 kMinBgHover       = { 0.15f, 0.22f, 0.18f, 1.0f };
static const ImVec4 kMinBgActive      = { 0.19f, 0.27f, 0.22f, 1.0f };

// Field labels (each field type has its own color)
static const ImVec4 kFldWhen          = { 0.38f, 0.60f, 0.92f, 1.0f }; // sky blue
static const ImVec4 kFldWatchFor      = { 0.92f, 0.76f, 0.26f, 1.0f }; // golden amber
static const ImVec4 kFldWhatToDo      = { 0.34f, 0.76f, 0.42f, 1.0f }; // leaf green
static const ImVec4 kFldFailure       = { 0.92f, 0.28f, 0.28f, 1.0f }; // danger red
static const ImVec4 kFldMistakes      = { 0.92f, 0.52f, 0.18f, 1.0f }; // orange
static const ImVec4 kFldSummary       = { 0.65f, 0.68f, 0.72f, 1.0f }; // cool gray

// General text
static const ImVec4 kNodeText         = { 0.92f, 0.92f, 0.92f, 1.0f };
static const ImVec4 kValueText        = { 0.84f, 0.84f, 0.84f, 1.0f };


// ── Forward declarations ───────────────────────────────────────────────────────
static void DrawContent();
static void DrawWing(const Wing& wing);
static void DrawBoss(const Boss& boss);
static void DrawMajorMechanic(const MajorMechanic& mech);
static void DrawMinorMechanic(const MinorMechanic& mech);
static void DrawField(const char* label, const std::string& value, ImVec4 labelColor);
static void SectionHeader(const char* label, ImVec4 textColor, ImVec4 lineColor);


// ── Public API ─────────────────────────────────────────────────────────────────
void Toggle()    { s_Visible = !s_Visible; }
bool IsVisible() { return s_Visible; }

void RenderOptions()
{
    ImGui::Checkbox("Show Raid Training Guide", &s_Visible);
}

void Render()
{
    // §1 (LESSONS_LEARNED): set up ImGui context on first render frame,
    // not in AddonLoad — context is not valid until then.
    if (!s_ImguiReady)
    {
        ImGui::SetCurrentContext(static_cast<ImGuiContext*>(APIDefs->ImguiContext));
        // §1: ImGuiMemAllocFunc/FreeFunc may not exist in older ImGui — use raw casts.
        ImGui::SetAllocatorFunctions(
            (void* (*)(size_t, void*))APIDefs->ImguiMalloc,
            (void  (*)(void*, void*))APIDefs->ImguiFree);
        s_ImguiReady = true;
    }

    if (!s_Visible) return;

    ImGui::SetNextWindowSize({ 800.0f, 640.0f }, ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSizeConstraints({ 500.0f, 350.0f }, { 1600.0f, 1200.0f });

    ImGui::PushStyleColor(ImGuiCol_WindowBg,          kWinBg);
    ImGui::PushStyleColor(ImGuiCol_TitleBg,           kTitleBg);
    ImGui::PushStyleColor(ImGuiCol_TitleBgActive,     kTitleBgActive);
    ImGui::PushStyleColor(ImGuiCol_ScrollbarBg,       kScrollBg);
    ImGui::PushStyleColor(ImGuiCol_ScrollbarGrab,     kScrollGrab);
    ImGui::PushStyleColor(ImGuiCol_ScrollbarGrabHovered, kScrollGrabHover);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding,  { 12.0f, 10.0f });
    ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing,    {  8.0f,  5.0f });
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 4.0f);

    bool open = true;
    if (ImGui::Begin("Raid Training Guide##RaidGuide", &open,
                     ImGuiWindowFlags_NoCollapse))
    {
        DrawContent();
    }
    ImGui::End();

    ImGui::PopStyleVar(3);
    ImGui::PopStyleColor(6);

    if (!open) s_Visible = false;
}


// ── Private helpers ────────────────────────────────────────────────────────────
static void DrawContent()
{
    ImGui::PushStyleColor(ImGuiCol_Tab,                kTabBg);
    ImGui::PushStyleColor(ImGuiCol_TabHovered,         kTabHover);
    ImGui::PushStyleColor(ImGuiCol_TabActive,          kTabActive);
    ImGui::PushStyleColor(ImGuiCol_TabUnfocusedActive, kTabUnfocusedAct);

    if (ImGui::BeginTabBar("##Wings", ImGuiTabBarFlags_FittingPolicyScroll
                                    | ImGuiTabBarFlags_TabListPopupButton))
    {
        for (const Wing& wing : g_Wings)
        {
            if (ImGui::BeginTabItem(wing.tab_name.c_str()))
            {
                // Scrollable child fills the remaining space
                ImGui::BeginChild("##WingScroll", { 0.0f, 0.0f }, false, 0);
                DrawWing(wing);
                ImGui::EndChild();
                ImGui::EndTabItem();
            }
        }
        ImGui::EndTabBar();
    }
    ImGui::PopStyleColor(4);
}

static void DrawWing(const Wing& wing)
{
    ImGui::Spacing();

    // Wing title inside the tab
    ImGui::PushStyleColor(ImGuiCol_Text, kWingTitle);
    ImGui::Text("  %s", wing.full_name.c_str());
    ImGui::PopStyleColor();
    ImGui::PushStyleColor(ImGuiCol_Separator, kTabBarLine);
    ImGui::Separator();
    ImGui::PopStyleColor();
    ImGui::Spacing();
    ImGui::Spacing();

    for (const Boss& boss : wing.bosses)
        DrawBoss(boss);
}

static void DrawBoss(const Boss& boss)
{
    ImGui::PushStyleColor(ImGuiCol_Header,        kBossBg);
    ImGui::PushStyleColor(ImGuiCol_HeaderHovered, kBossBgHover);
    ImGui::PushStyleColor(ImGuiCol_HeaderActive,  kBossBgActive);
    ImGui::PushStyleColor(ImGuiCol_Text,          kBossText);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 10.0f, 7.0f });

    bool bossOpen = ImGui::CollapsingHeader(boss.name.c_str(),
                                            ImGuiTreeNodeFlags_SpanAvailWidth);
    ImGui::PopStyleVar();
    ImGui::PopStyleColor(4);

    if (!bossOpen)
    {
        ImGui::Spacing();
        return;
    }

    ImGui::Indent(12.0f);
    ImGui::Spacing();

    // ── Major Mechanics ──────────────────────────────────────────────────────
    if (!boss.major.empty())
    {
        SectionHeader("  Major Mechanics", kLblMajor, kSepMajor);
        ImGui::Spacing();

        for (const MajorMechanic& m : boss.major)
            if (!m.name.empty()) DrawMajorMechanic(m);
    }

    // ── Minor Mechanics ──────────────────────────────────────────────────────
    if (!boss.minor.empty())
    {
        ImGui::Spacing();
        SectionHeader("  Minor Mechanics", kLblMinor, kSepMinor);
        ImGui::Spacing();

        for (const MinorMechanic& m : boss.minor)
            if (!m.name.empty()) DrawMinorMechanic(m);
    }

    ImGui::Unindent(12.0f);
    ImGui::Spacing();
    ImGui::Spacing();
}

static void DrawMajorMechanic(const MajorMechanic& mech)
{
    ImGui::PushStyleColor(ImGuiCol_Header,        kMajBg);
    ImGui::PushStyleColor(ImGuiCol_HeaderHovered, kMajBgHover);
    ImGui::PushStyleColor(ImGuiCol_HeaderActive,  kMajBgActive);
    ImGui::PushStyleColor(ImGuiCol_Text,          kNodeText);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 6.0f, 5.0f });

    bool open = ImGui::TreeNodeEx(mech.name.c_str(),
        ImGuiTreeNodeFlags_SpanAvailWidth | ImGuiTreeNodeFlags_FramePadding);

    ImGui::PopStyleVar();
    ImGui::PopStyleColor(4);

    if (open)
    {
        ImGui::Spacing();
        DrawField("WHEN",            mech.when,             kFldWhen);
        DrawField("WATCH FOR",       mech.watch_for,        kFldWatchFor);
        DrawField("WHAT TO DO",      mech.what_to_do,       kFldWhatToDo);
        DrawField("FAILURE",         mech.failure,          kFldFailure);
        DrawField("COMMON MISTAKES", mech.common_mistakes,  kFldMistakes);
        ImGui::TreePop();
    }
    ImGui::Spacing();
}

static void DrawMinorMechanic(const MinorMechanic& mech)
{
    ImGui::PushStyleColor(ImGuiCol_Header,        kMinBg);
    ImGui::PushStyleColor(ImGuiCol_HeaderHovered, kMinBgHover);
    ImGui::PushStyleColor(ImGuiCol_HeaderActive,  kMinBgActive);
    ImGui::PushStyleColor(ImGuiCol_Text,          kNodeText);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 6.0f, 5.0f });

    bool open = ImGui::TreeNodeEx(mech.name.c_str(),
        ImGuiTreeNodeFlags_SpanAvailWidth | ImGuiTreeNodeFlags_FramePadding);

    ImGui::PopStyleVar();
    ImGui::PopStyleColor(4);

    if (open)
    {
        ImGui::Spacing();
        DrawField("SUMMARY", mech.summary, kFldSummary);
        ImGui::TreePop();
    }
    ImGui::Spacing();
}

static void DrawField(const char* label, const std::string& value, ImVec4 labelColor)
{
    const char* display = value.empty() ? "..." : value.c_str();

    ImGui::Indent(6.0f);

    // Colored label
    ImGui::PushStyleColor(ImGuiCol_Text, labelColor);
    ImGui::TextUnformatted(label);
    ImGui::PopStyleColor();

    // Value — indented, wrapped, near-white
    ImGui::Indent(14.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, kValueText);
    ImGui::PushTextWrapPos(ImGui::GetCursorPosX() + ImGui::GetContentRegionAvail().x);
    ImGui::TextUnformatted(display);
    ImGui::PopTextWrapPos();
    ImGui::PopStyleColor();
    ImGui::Unindent(14.0f);

    ImGui::Unindent(6.0f);
    ImGui::Spacing();
}

static void SectionHeader(const char* label, ImVec4 textColor, ImVec4 lineColor)
{
    ImGui::PushStyleColor(ImGuiCol_Text, textColor);
    ImGui::TextUnformatted(label);
    ImGui::PopStyleColor();

    ImGui::PushStyleColor(ImGuiCol_Separator, lineColor);
    ImGui::Separator();
    ImGui::PopStyleColor();
}

} // namespace RaidGuide
