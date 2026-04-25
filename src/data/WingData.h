#pragma once
#include <string>
#include <vector>

struct MajorMechanic
{
    std::string name;
    std::string when;
    std::string watch_for;
    std::string what_to_do;
    std::string failure;
    std::string common_mistakes;
};

struct MinorMechanic
{
    std::string name;
    std::string summary;
};

struct Boss
{
    std::string               name;
    std::vector<MajorMechanic> major;
    std::vector<MinorMechanic> minor;
};

struct Wing
{
    std::string         tab_name;   // short label shown in the tab bar
    std::string         full_name;  // full title shown inside the tab
    std::vector<Boss>   bosses;
};

extern std::vector<Wing> g_Wings;
void InitWingData();
