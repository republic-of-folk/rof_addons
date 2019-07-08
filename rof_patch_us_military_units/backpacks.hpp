    class Bag_Base;
    class usm_pack_alice;
    class usm_pack_alice_prc119: Bag_Base
    {
        scope = 2;
        maximumLoad = 180;
        mass = 60;
        class TransportMagazines
        {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems
        {
            class _xx_ACRE_PRC117F
            {
                name = "ACRE_PRC117F";
                count = 1;
            };
        };
    };
    class usm_pack_alice_prc77: Bag_Base
    {
        maximumLoad = 180;
        mass = 60;
        class TransportMagazines
        {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems
        {
            class _xx_ACRE_PRC77
            {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };
    class usm_pack_st138_prc77: Bag_Base
    {
        maximumLoad = 120;
        mass = 20;
        class TransportMagazines
        {
            delete _xx_SmokeShellGreen;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems
        {
            class _xx_ACRE_PRC77
            {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };
    class usm_pack_alice_medic: usm_pack_alice
    {
        class TransportMagazines
        {
            delete _xx_SmokeShellPurple;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems
        {
            delete _xx_usm_fielddressing;
            delete _xx_usm_medikit;
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 4;
            };
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
        };
    };
    class usm_pack_m5_medic: Bag_Base
    {
        class TransportMagazines
        {
            delete _xx_SmokeShellPurple;
            delete _xx_SmokeShellYellow;
        };
        class TransportItems
        {
            delete _xx_usm_fielddressing;
            delete _xx_usm_medikit;
            class _xx_FirstAidKit
            {
                name = "FirstAidKit";
                count = 4;
            };
            class _xx_Medikit
            {
                name = "Medikit";
                count = 1;
            };
        };
    };
    class usm_pack_762x51_bandoliers: Bag_Base
    {
        class TransportMagazines
        {
            delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
            class _xx_rhsusf_100Rnd_762x51
            {
                magazine = "rhsusf_100Rnd_762x51";
                count = 3;
            };
        };
    };
    class usm_pack_200rnd_556_bandoliers: Bag_Base
    {
        class TransportMagazines
        {
            delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
            class _xx_rhs_200rnd_556x45_M_SAW
            {
                magazine = "rhs_200rnd_556x45_M_SAW";
                count = 3;
            };
        };
    };
    class usm_pack_762x51_ammobelts: Bag_Base
    {
        maximumLoad = 40;
        class TransportMagazines
        {
            delete _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M;
            class _xx_rhs_200rnd_556x45_M_SAW
            {
                magazine = "rhs_200rnd_556x45_M_SAW";
                count = 1;
            };
        };
    };
    class usm_pack_abag_m60: Bag_Base
    {
    };