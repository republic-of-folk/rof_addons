class CfgPatches
{
    class rof_compatibility_rhs
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhs_c_weapons",
        	"rhsusf_c_weapons",
            "rhsgref_c_weapons",
            "rhssaf_c_weapons",
            "mbg_m16a2",
            "rof_patch_mbg"
        };
        name = "Republic of Folk compatibility fixes";
        author = "Republic of Folk";
        url = "";
    };
};

class CfgMagazineWells
{
    class STANAG_556x45
    {
        mbg_magazines[] = {
            "mbg_mag_20Rnd_556x45_M855A1_Stanag",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow"
        };
    };
};

class CfgWeapons
{
    class Rifle_Base_F;
    class rhs_weap_savz58_base : Rifle_Base_F
    {
        magazines[] = {
            "rhs_30Rnd_762x39mm",
            "rhs_30Rnd_762x39mm_tracer",
            "rhs_30Rnd_762x39mm_89",

            "rhs_30Rnd_762x39mm_Savz58",
            "rhs_30Rnd_762x39mm_Savz58_tracer"
        };
    };
};
