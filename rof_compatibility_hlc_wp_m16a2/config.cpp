class CfgPatches
{
    class rof_compatibility_hlc_wp_m16a2
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "hlcweapons_M16A2",
            "rhsusf_c_weapons",
            "mbg_m16a2",
            "rof_patch_mbg"
        };
        name = "Republic of Folk compatibility fixes";
        author = "Republic of Folk";
        url = "";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;
    class hlc_wp_m16a2: Rifle_Base_F
    {
        deployedPivot = "deploypivot";
        hasBipod = false;
    };
    class hlc_wp_XM177E2: Rifle_Base_F
    {
        deployedPivot = "deploypivot";
        hasBipod = false;
    };
    class hlc_wp_mod727: Rifle_Base_F
    {
        deployedPivot = "deploypivot";
        hasBipod = false;
    };
    class hlc_wp_mod733: Rifle_Base_F
    {
        deployedPivot = "deploypivot";
        hasBipod = false;
    };
    class hlc_wp_m16A1: hlc_wp_m16a2
    {
        magazines[] = {"mbg_mag_20Rnd_556x45_M855A1_Stanag","rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green","rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red","rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow"};
        magazineWell[] = {"CBA_556x45_STANAG_SHORT"};
    };
    class hlc_wp_xm4: Rifle_Base_F
    {
        deployedPivot = "deploypivot";
        hasBipod = false;
    };
};