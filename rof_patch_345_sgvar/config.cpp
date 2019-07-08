#define _ARMA_

class CfgPatches
{
    class rof_345_sgvar_patch
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.5;
        requiredAddons[] = {"345th_bp_cfg"};
    };
};

class cfgVehicles
{
    class RD_54_69;
    class RD_54_69_R148: RD_54_69
    {
        maximumLoad = 160;
    };
    class RD_54_69_345th_R148: RD_54_69_R148
    {
        maximumLoad = 160;
    };
    class RD_54_69_345th_R148_Green: RD_54_69_R148
    {
        maximumLoad = 160;
    };
    class RD_54_69_345th_R148_Blue: RD_54_69_R148
    {
        maximumLoad = 160;
    };
};