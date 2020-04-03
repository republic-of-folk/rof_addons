#define _ARMA_

class CfgPatches
{
    class rof_patch_soviet_armed_forces
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = {"A3_Characters_F", "rhs_main", "40th_bp_cfg", "OKSV_units_addon", "40th_headgears_conf", "40th_insignia_cfg", "40th_objects_cfg", "40th_uniforms_conf", "40th_vests_conf", "40th_weapons_cfg"};
    };
};

class cfgVehicles {
    #include "uniforms_veh.hpp"
    #include "units.hpp"
    #include "vehicles.hpp"
};

class cfgWeapons
{
    #include "headgear.hpp"
    #include "uniforms.hpp"
    #include "vests.hpp"
};

class CfgFactionClasses
{
    class oksv_army_wood
    {
        displayName = "Soviet Army";
        priority = 10;
        side = 0;
        icon = "40th_config\data\SA.paa";
    };
};
class CfgEditorCategories
{
    class oksv_army_wood_category
    {
        displayName = "Soviet Army";
    };
};
class CfgEditorSubcategories
{
    class oksv_army_wood_msv
    {
        displayName = "Infantry (MSV)";
    };
    class oksv_army_wood_vdv
    {
        displayName = "Infantry (VDV)";
    };
};

class CfgGroups {
    #include "groups.hpp"
};