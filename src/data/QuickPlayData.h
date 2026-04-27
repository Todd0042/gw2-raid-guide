#pragma once
#include <string>
#include <vector>

struct QPMechanic
{
    std::string name;
    std::string category;
    std::string description;
    std::string handling;
    std::string effect_on_fail;
};

struct QPEncounter
{
    std::string name;
    std::string wing;
    std::string summary;
    std::string goal;
    std::vector<QPMechanic>     mechanics;
    std::vector<std::string>    common_mistakes;
    std::vector<std::string>    callouts;
    std::vector<std::string>    timeline;
    std::vector<std::string>    pre_pull;
    std::vector<std::string>    phase_walk;
    std::vector<std::string>    recovery;
};

extern std::vector<QPEncounter> g_QuickPlay;
void InitQuickPlayData();

extern std::vector<QPEncounter> g_IcebroodStrikes;
void InitIcebroodStrikeData();
