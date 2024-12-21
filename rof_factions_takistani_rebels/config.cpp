#define _ARMA_

#include "_macros.hpp"

class CfgPatches {
    class rof_factions {
        name = "Republic of Folk - Factions - Takistani Rebels";
        author = "Republic of Folk";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };

    // Replaces these deprecated addons:
    class rof_patch_taliban_fighters {};
};

// class CfgFactionClasses
// {

//     class AFGCIV;
//     class Tban;

//     class rof_faction_civ_taki : AFGCIV
//     {
//         displayName = "Takistani";
//         side = 3;
//     };
//     class rof_faction_o_taki_rebels : Tban
//     {
//         displayName = "Takistani Rebels";
//         side = 0;
//     };
//     class rof_faction_g_taki_rebels : Tban
//     {
//         displayName = "Takistani Rebels";
//         side = 2;
//     };
// };

class CfgVehicles {
    #include "CfgVehiclesRofOTakiSoldier.hpp"
    #include "CfgVehiclesRofBTakiSoldier.hpp"
    #include "CfgVehiclesRofGTakiSoldier.hpp"

    #include "CfgVehiclesDeprecated.hpp"
};

class CfgWeapons
{
};