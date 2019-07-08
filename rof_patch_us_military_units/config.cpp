#define _ARMA_

#include "_macros.hpp"
#include "_defines.hpp"

class CfgPatches
{
    class rof_patch_us_military_units
    {
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        requiredVersion = 1;
        requiredAddons[] = {"A3_Characters_F", "A3_Weapons_F", "us_military_units", "rhsusf_c_weapons", "rhsusf_c_troops"};
    };
};

class CfgWeapons
{
    #include "items.hpp"
    #include "uniforms.hpp"
    #include "vests.hpp"
};

class CfgVehicles
{
    #include "backpacks.hpp"
    #include "units.hpp"
};
