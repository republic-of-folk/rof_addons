#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = "Republic of Folk Addons - Main";
        author = "Roberro, Republic of Folk";
        url = "https://republicoffolk.org/";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        action = "https://republicoffolk.org/";
        dir = "";
        hideName = 0;
        hidePicture = 0;
        logo = "rof.paa";
        name = "Republic of Folk Addons";
        overview = "Republic of Folk Addons";
        picture = "\rof_addons\rof_main\rof.paa";
        tooltip = "Republic of Folk Addons";
    };
};