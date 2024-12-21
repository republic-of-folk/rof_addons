#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
        name = "Republic of Folk Addons - WS Drones fix";
        author = "Boberro, Republic of Folk";
        units[]={};
		weapons[]={};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[]=
		{
            "data_f_lxWS_Loadorder"
		};
        VERSION_CONFIG;
	};
};
class CfgVehicles
{
	class UAV_02_Base_lxWS;

    class ION_UAV_02_lxWS: UAV_02_Base_lxWS {
        scope = 1;
        scopeCurator = 2;
    };
    class B_UAV_02_lxWS: UAV_02_Base_lxWS {
        scope = 1;
        scopeCurator = 2;
    };
    class I_UAV_02_lxWS: UAV_02_Base_lxWS {
        scope = 1;
        scopeCurator = 2;
    };
    class O_UAV_02_lxWS: UAV_02_Base_lxWS {
        scope = 1;
        scopeCurator = 2;
    };
};