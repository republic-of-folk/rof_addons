#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "Republic of Folk Addons - Compatibility GM (Crew served weapons)";
        author = "Roberro, Republic of Folk";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "rof_main",
            "gm_weapons_items",
            "gm_characters_gc_characters",
            "gm_characters_ge_characters",
            "gm_characters_gc_civilians",
            "gm_characters_pl_characters",
            "gm_characters_dk_characters"
        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers
{
    class rof_compatibility_gm
    {
        init = "call compile preprocessFileLineNumbers '\x\rof\addons\compatibility_gm\XEH_postInit.sqf'";
    };
};

#include "CfgMagazineGroups.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"