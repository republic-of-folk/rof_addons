#define _ARMA_

#include "_macros.hpp"

class CfgPatches
{
    class rof_patch_taliban_fighters {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Weapons_F",
            "Taliban_fighters",
            "rds_a2port_cman",
            "rhs_c_weapons",
            "rhs_c_troops",
            "rhsgref_c_weapons",
            "rhsgref_c_troops",
            "40th_weapons_cfg"
        };
    };
    class Taliban_fighters_rof_patch {
        units[] = {};
    };
};

class CfgFactionClasses
{

    class AFGCIV;
    class Tban;

    class rof_faction_civ_taki : AFGCIV
    {
        displayName = "Takistani";
        side = 3;
    };
    class rof_faction_o_taki_rebels : Tban
    {
        displayName = "Takistani Rebels";
        side = 0;
    };
    class rof_faction_g_taki_rebels : Tban
    {
        displayName = "Takistani Rebels";
        side = 2;
    };
};

class CfgVehicles
{
    // Remove all units from Taliban_fighters from the editor
    #include "old_units.hpp"

    #include "units_civ.hpp"

    #include "units_o.hpp"

    #include "units_g.hpp"

    // Remove old units (with wrong classnames) from the editor
    #include "units_deprecated.hpp"
};

class CfgWeapons
{
    #include "headgear.hpp"
};