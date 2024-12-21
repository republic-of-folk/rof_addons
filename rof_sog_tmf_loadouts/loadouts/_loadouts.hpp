#include "_macros.hpp"

class CfgLoadouts
{
    class SOG_B_US_ARMY_AIRMOBILE {
        displayName = "US Army Airmobile (NAM)";
        category = "(NAM) Blufor";
        tooltip = "Vietnam era US Army";
        #include "sog_b_us_army_airmobile.hpp"
    };
    class SOG_B_US_MACVSOG {
        displayName = "US MACVSOG";
        category = "(NAM) Blufor";
        tooltip = "Military Assistance Command, Vietnam – Studies and Observations Group";
        #include "sog_b_us_macvsog.hpp"
    };

    class SOG_G_ARVN {
        displayName = "ARVN";
        category = "(NAM) Independent";
        tooltip = "Army of the Republic of Vietnam";
        #include "sog_g_arvn.hpp"
    };

    class SOG_O_VC_MAIN {
        displayName = "VC Main force";
        category = "(NAM) Opfor";
        tooltip = "National Liberation Front of South Vietnam, Main force";
        #include "sog_o_vc_main.hpp"
    };

    class SOG_O_VC_LOCAL {
        displayName = "VC Local force";
        category = "(NAM) Opfor";
        tooltip = "National Liberation Front of South Vietnam, Local force";
        #include "sog_o_vc_local.hpp"
    };
};
