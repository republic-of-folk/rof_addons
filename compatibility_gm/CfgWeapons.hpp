class gm_SemiAuto;
class gm_FullAuto;

class CfgWeapons {
    class gm_cannon_base;
    class gm_autoCannon_base;
    class gm_RocketLauncher_base;
    class gm_launcher_base;
    class gm_missileLauncher_base;
    class gm_pistol_base;
    class gm_rifle_base;
    class gm_machineGun_base;

    class gm_100mm_d10t_base: gm_cannon_base {};
    class gm_105mm_l7_base: gm_cannon_base {};
    class gm_145mm_kpvt_base: gm_autoCannon_base {};
    class gm_20mm_rh202_base: gm_autoCannon_base {};
    class gm_23mm_2a7_base: gm_autoCannon_base {};
    class gm_23mm_2a7_quad: gm_23mm_2a7_base {};
    class gm_23mm_ns23_base: gm_autoCannon_base {};
    class gm_25mm_kba_base: gm_autoCannon_base {};
    class gm_25mm_kba: gm_25mm_kba_base {};
    class gm_35mm_l90_base: gm_autoCannon_base {};
    class gm_35mm_l90_dual: gm_35mm_l90_base {};
    class gm_73mm_2a28_base: gm_cannon_base {};
    class gm_76mm_d56t_base: gm_cannon_base {};

    class gm_fagot_launcher_base: gm_missileLauncher_base {};
    class gm_maljutka_launcher_base: gm_missileLauncher_base {};
    
    class gm_mars2_launcher_base: gm_RocketLauncher_base {};

    class gm_carlgustaf_m2_base: gm_launcher_base {};
    class gm_pzf44_2_base: gm_launcher_base {};
    class gm_rpg7_base: gm_launcher_base {
        magazineWells[] = {"gm_magazineWell_40mm_rpg7", "RPG7"};
    };
    class gm_fim43_base: gm_launcher_base {};
    class gm_strela_launcher_base: gm_launcher_base {};
    class gm_9k32m_base: gm_strela_launcher_base {};
    class gm_strela_launcher: gm_strela_launcher_base {};

    class gm_dshkm_base: gm_machineGun_base {};
    class gm_m2_base: gm_machineGun_base {};

    class gm_mg3_base: gm_machineGun_base {
        // magazineWell[] = {"CBA_762x51_MG3"};
    };
    class gm_pk_base: gm_machineGun_base {
        // magazineWell[] = {"CBA_762x54R_LINKS"};
    };
    class gm_pkt_base: gm_pk_base {};
    class gm_pkt_veh_base: gm_pkt_base {};
    class gm_pkt_coax: gm_pkt_veh_base {};
    class gm_pkt_quad_mi2: gm_pkt_coax {};
    class gm_sgm_base: gm_machineGun_base {};

    class gm_mp2_base: gm_rifle_base {
        // magazineWell[] = {"CBA_9x19_UZI"};
    };
    class gm_mp5_base: gm_rifle_base {
        // magazineWell[] = {"CBA_9x19_MP5"};
    };
    class gm_mp5sd_base: gm_mp5_base {
        // magazineWell[] = {"CBA_9x19_MP5"};
    };
    class gm_pm63_base: gm_rifle_base {
        // magazineWell[] = {"CBA_9x18_PM63"};
    };
    
    class gm_lp1_base: gm_pistol_base {};
    class gm_p1_base: gm_pistol_base {
        // magazineWell[] = {"CBA_9x19_P38"};
    };
    class gm_p2a1_base: gm_pistol_base {};
    class gm_p2a1_launcher_base: gm_launcher_base {};
    class gm_pm_base: gm_pistol_base {
        // magazineWell[] = {"CBA_9x18_PM"};
    };

    class gm_ak47_base : gm_rifle_base {
        magazineWell[] = {"gm_magazineWell_762x39mm_ak47", "AK_762x39", "CBA_762x39_AK"};

        modes[] = {
            "SemiAuto",
            "FullAuto",
            "Single_AI",
            "single_medium_optics1",
            "single_far_optics2",
            "fullauto_medium"
        };

        class SemiAuto : gm_SemiAuto
        {
            aiRateOfFire = 1e-006;
        };
        class FullAuto : gm_FullAuto
        {
            aiRateOfFire = 1e-006;
        };
        class Single_AI: SemiAuto
        {
            showToPlayer            = 0;
            aiBurstTerminable       = 1;
            dispersion = 0.00159995;
            burstRangeMax           = 3;
            minRange                = 200;
            minRangeProbab          = 0.5;
            midRange                = 300;
            midRangeProbab          = 0.7;
            maxRange                = 400;
            maxRangeProbab          = 0.3;
            aiRateOfFire            = 1;
            aiRateOfFireDispersion  = 2;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer            = 0;
            aiBurstTerminable       = 0;
            dispersion = 0.00159995;
            burst                   = 2;
            burstRangeMax           = 6;
            minRange                = 2;
            minRangeProbab          = 0.5;
            midRange                = 75;
            midRangeProbab          = 0.7;
            maxRange                = 150;
            maxRangeProbab          = 0.05;
            aiRateOfFire            = 1;
            aiRateOfFireDistance    = 200;
            aiRateOfFireDispersion  = 2;
        };
        class single_medium_optics1: Single_AI
        {
            burstRangeMax           = 3;
            requiredOpticType       = 1;
            showToPlayer            = 0;
            minRange                = 2;
            minRangeProbab          = 0.2;
            midRange                = 450;
            midRangeProbab          = 0.7;
            maxRange                = 600;
            maxRangeProbab          = 0.2;
            aiRateOfFire            = 4;
            aiRateOfFireDistance    = 600;
            aiRateOfFireDispersion  = 2;
        };
        class single_far_optics2: single_medium_optics1
        {
            requiredOpticType       = 2;
            minRange                = 100;
            minRangeProbab          = 0.1;
            midRange                = 450;
            midRangeProbab          = 0.6;
            maxRange                = 800;
            maxRangeProbab          = 0.05;
            aiRateOfFire            = 5;
            aiRateOfFireDistance    = 800;
            aiRateOfFireDispersion  = 3;
        };
    };
    class gm_rpk_base : gm_ak47_base {
        magazineWell[] += {"CBA_762x39_RPK"};

        class FullAuto : gm_FullAuto {};
        class ai_FullAuto_close : FullAuto {
            aiBurstTerminable = 0;
            dispersion = 0.00159995;
        };
    };
    class gm_ak74_base : gm_rifle_base {
        magazineWell[] = {"gm_magazineWell_545x39mm_ak74", "AK_545x39", "CBA_545x39_AK"};

        modes[] = {
            "SemiAuto",
            "FullAuto",
            "Single_AI",
            "single_medium_optics1",
            "single_far_optics2",
            "fullauto_medium"
        };

        class SemiAuto : gm_SemiAuto {
            aiRateOfFire = 1e-006;
        };
        class FullAuto : gm_FullAuto {
            aiRateOfFire = 1e-006;
        };

        class Single_AI: SemiAuto
        {
            showToPlayer            = 0;
            aiBurstTerminable       = 1;
            dispersion              = 0.00093;
            burstRangeMax           = 3;
            minRange                = 200;
            minRangeProbab          = 0.5;
            midRange                = 300;
            midRangeProbab          = 0.7;
            maxRange                = 400;
            maxRangeProbab          = 0.3;
            aiRateOfFire            = 1;
            aiRateOfFireDispersion  = 2;
        };
        class single_medium_optics1: Single_AI
        {
            requiredOpticType       = 1;
            minRange                = 2;
            minRangeProbab          = 0.2;
            midRange                = 550;
            midRangeProbab          = 0.7;
            maxRange                = 700;
            maxRangeProbab          = 0.1;
            aiRateOfFire            = 3;
            aiRateOfFireDistance    = 600;
            aiRateOfFireDispersion  = 3;
        };
        class single_far_optics2: single_medium_optics1
        {
            requiredOpticType = 2;
        };
        class fullauto_medium: FullAuto
        {
            showToPlayer            = 0;
            aiBurstTerminable       = 0;
            dispersion              = 0.00093;
            burst                   = 2;
            burstRangeMax           = 5;
            minRange                = 2;
            minRangeProbab          = 0.5;
            midRange                = 75;
            midRangeProbab          = 0.7;
            maxRange                = 150;
            maxRangeProbab          = 0.05;
            aiRateOfFire            = 1.0;
            aiRateOfFireDispersion  = 2;
        };
    };
    class gm_rpk74_base : gm_ak74_base {
        magazineWell[] += {"CBA_545x39_RPK"};

        class FullAuto : gm_FullAuto {};
        class ai_FullAuto_close : FullAuto {
            aiBurstTerminable       = 0;
            dispersion              = 0.00093;
        };
    };
    class gm_g3_base: gm_rifle_base {
        // magazineWell[] = {"CBA_762x51_G3", "CBA_762x51_G3_L", "CBA_762x51_G3_XL"};
    };
    class gm_m16_base: gm_rifle_base {
        // magazineWell[] = {"CBA_556x45_STANAG", "CBA_556x45_STANAG_L", "CBA_556x45_STANAG_XL", "CBA_556x45_STANAG_2D", "CBA_556x45_STANAG_2D_XL"};
    };
    class gm_svd_base: gm_rifle_base {
        // magazineWell[] = {"CBA_762x54R_SVD"};
    };
};