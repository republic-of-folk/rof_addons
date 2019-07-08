class CfgPatches {
    class rof_factions {
        name = "Republic of Folk - Factions";
        author = "Republic of Folk";
        units[] = {
            "rof_rhsusf_m113_un",
            "rof_rhsusf_m113_un_unarmed",
            "rof_rhsusf_m113_un_medical",
            "rof_rhsusf_m113_un_M240"
        };
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "A3_Characters_F_OPFOR",
            "A3_Characters_F_Exp",
            "rhs_c_troops",
            "rhssaf_c_troops",
            "rhsgref_c_troops",
            "rhsusf_c_troops",
            "rds_a2port_cman",
            "rhsusf_c_m113",
            "rof_compatibility_gm",
            "gm_weapons_rifles_ak47",
            "gm_weapons_rifles_ak74"
        };
    };

    class boberro_factions_takins;
    class rof_retextures_un;
};

class CfgVehicles {
    #include "CfgVehicles\rhs_m113_un.hpp"
    #include "CfgVehicles\rhs_rpk.hpp"
};