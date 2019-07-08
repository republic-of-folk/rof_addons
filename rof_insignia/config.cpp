#define _ARMA_

class CfgPatches
{
    class rof_insignia
    {
        name = "ROF - Insignias";
        units[] = {};
        requiredVersion = 1.88;
        requiredAddons[] = {"gm_core"};
        author = "ROF";
        authors[] = {"ROF"};
        version = "0.0.1";
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
    };
};

class gm_VehicleInsignias_base; // declare base class
class gm_VehicleInsignias_Nations : gm_VehicleInsignias_base // declare class you wish to patch with a new entry, carry over correct inheritance from base class
{
    class rof_insignia_rof_nation // class name of your new entry. MUST be unique name
    {
        name     = "Republic of Folk";                                              // Name displayed in the editor for this item in the drop-down.
        texture  = "\rof_addons\rof_insignia\data\insignias\rof_nation.paa"; // Path to the texture used on the vehicle
        picture  = "\rof_addons\rof_insignia\data\insignias\rof_nation.paa"; // Path to the preview picture used in the drop down. Can be the same as used in "texture".
        value    = "rof_insignia_rof_nation";                            // identical to the classname of this item.
    };
};