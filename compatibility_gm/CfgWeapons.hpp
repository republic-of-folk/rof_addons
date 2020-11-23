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
    class gm_rpg7_base: gm_launcher_base {};
    class gm_fim43_base: gm_launcher_base {};
    
    class gm_strela_launcher_base: gm_launcher_base {};
    class gm_9k32m_base: gm_strela_launcher_base {};
    class gm_strela_launcher: gm_strela_launcher_base {};

    class gm_dshkm_base: gm_machineGun_base {};
    class gm_m2_base: gm_machineGun_base {};
    class gm_mg3_base: gm_machineGun_base {};
    class gm_pk_base: gm_machineGun_base {};
    class gm_pkt_base: gm_pk_base {};
    class gm_pkt_veh_base: gm_pkt_base {};
    class gm_pkt_coax: gm_pkt_veh_base {};
    class gm_pkt_quad_mi2: gm_pkt_coax {};
    class gm_sgm_base: gm_machineGun_base {};

    class gm_mp2_base: gm_rifle_base {};
    class gm_mp5_base: gm_rifle_base {};
    class gm_mp5sd_base: gm_mp5_base {};
    class gm_pm63_base: gm_rifle_base {};
    
    class gm_lp1_base: gm_pistol_base {};
    class gm_p1_base: gm_pistol_base {};
    class gm_p2a1_base: gm_pistol_base {};
    class gm_p2a1_launcher_base: gm_launcher_base {};
    class gm_pm_base: gm_pistol_base {};

    class gm_ak47_base : gm_rifle_base {
        magazineWell[] = {"AK_762x39"};
    };
    class gm_rpk_base : gm_ak47_base {
        magazineWell[] = {"AK_762x39"};
    };
    class gm_ak74_base : gm_rifle_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_rpk74_base : gm_ak74_base {
        magazineWell[] = {"AK_545x39"};
    };
    class gm_g3_base: gm_rifle_base {};
    class gm_m16_base: gm_rifle_base {};
    class gm_svd_base: gm_rifle_base {};
};