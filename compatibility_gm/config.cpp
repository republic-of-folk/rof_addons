#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = "Republic of Folk Addons - Compatibility GM";
        author = "Roberro, Republic of Folk";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_medical",
            "gm_weapons_items",
            "gm_weapons_items_gc_items",
            "gm_weapons_items_ge_items",
            "gm_weapons_rifles_ak47",
            "gm_weapons_rifles_ak74",
            "gm_weapons_machineguns_pk"
        };
        VERSION_CONFIG;
    };
};

class CfgFunctions
{
    class ROF
    {
        class GM_Fix {
            file = "\x\rof\addons\compatibility_gm\functions";
            class itemCheck {};
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class rof_compatibility_gm
    {
        init = "call compile preprocessFileLineNumbers '\x\rof\addons\compatibility_gm\XEH_postInit.sqf'";
    };
};

class CfgGlasses {
    class gm_gasmask_base;

    class gm_gc_army_facewear_schm41m : gm_gasmask_base {
        CBRN_protection = 1;
        ACE_Protection = 1;
        ACE_Resistance = 2;
        ACE_Overlay = "CBRN_data\ui\hud\maskOpforOverlay.paa";
    };
    class gm_ge_facewear_m65 : gm_gasmask_base {
        CBRN_protection = 1;
        ACE_Protection = 1;
        ACE_Resistance = 2;
        ACE_Overlay = "CBRN_data\ui\hud\maskOpforOverlay.paa";
    };
};

class CfgMagazineWells {
    class AK_545x39 {
        gm_magazines[] = {"gm_30Rnd_545x39mm_b_7N6_ak74_prp","gm_30Rnd_545x39mm_b_t_7T3_ak74_prp","gm_45Rnd_545x39mm_b_7N6_ak74_prp","gm_45Rnd_545x39mm_b_t_7T3_ak74_prp","gm_30Rnd_545x39mm_b_7N6_ak74_org","gm_30Rnd_545x39mm_b_t_7T3_ak74_org","gm_45Rnd_545x39mm_b_7N6_ak74_org","gm_45Rnd_545x39mm_b_t_7T3_ak74_org"};
    };
    class AK_762x39 {
        gm_magazines[] = {"gm_30Rnd_762x39mm_b_M43_ak47_blk","gm_30Rnd_762x39mm_b_t_M43_ak47_blk","gm_75Rnd_762x39mm_b_M43_ak47_blk","gm_75Rnd_762x39mm_b_t_M43_ak47_blk"};
    };
};

class CfgWeapons {
    class gm_rifle_base;
    class gm_ak47_base : gm_rifle_base {
        magazineWell[] = {"AK_762x39"};
    };
    class gm_ak74_base : gm_rifle_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_ak74n_base : gm_ak74_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_aks74n_base : gm_ak74n_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_aks74nk_base : gm_aks74n_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_rpk_base : gm_ak47_base {
        magazineWell[] = {"AK_762x39"};
    };
    class gm_rpk74_base : gm_ak74_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_rpk74n_base : gm_rpk74_base {
        magazineWell[] = {"AK_545x39"};
    };
};