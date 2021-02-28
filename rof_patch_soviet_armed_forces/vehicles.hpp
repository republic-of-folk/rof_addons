class RHS_ZU23_base;
class rhs_btr70_msv;
class rhs_btr60_msv;
class rhs_btr80_msv;
class rhs_bmp1k_msv;
class rhs_bmp1p_msv;
class rhs_bmp1_msv;
class rhs_bmp2k_msv;
class rhs_bmp2e_msv;
class rhs_bmp2_msv;
class rhs_t80;
class rhs_brm1k_tv;
class rhsgref_BRDM2_msv;
class rhsgref_BRDM2UM_msv;
class rhsgref_BRDM2_ATGM_msv;
class rhsgref_BRDM2_HQ_msv;
class RHS_BM21_msv_01;
class rhs_gaz66_msv;
class rhs_gaz66_r142_msv;
class rhs_gaz66_ammo_msv;
class rhs_gaz66o_msv;
class rhs_gaz66_ap2_msv;
class rhs_gaz66_repair_msv;
class RHS_URAL_msv_01;
class RHS_URAL_Open_msv_01;
class RHS_URAL_Fuel_msv_01;
class RHS_UAZ_MSV_01;
class rhs_uaz_open_msv_01;
class rhs_SPG9M_MSV;
class rhs_Metis_9k115_2_msv;
class RHS_AGS30_tripod_MSV;
class RHS_zu23_MSV;
class RHS_NSV_TriPod_VDV;
class rhs_2s3_tv;
class rhs_d30_msv;
class rhs_2b14_82mm_msv;
class rhs_zsu234_aa;

class oksv_t80: rhs_t80
{
    generalmacro = "rhs_t80";
    author = "Basher";
    displayName = "$STR_RHS_T80";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_tank_crew";
    typicalCargo[] = {"oksv_wood_tank_crew"};
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems{};
};
class oksv_wood_zu23: RHS_ZU23_base
{
    generalmacro = "RHS_zu23_MSV";
    editorPreview = "rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_cdf_ZU23.paa";
    author = "Basher";
    displayName = "$STR_oksv_zu23";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
    typicalCargo[] = {"oksv_wood_rifleman"};
};
class oksv_wood_btr70: rhs_btr70_msv
{
    generalmacro = "rhs_btr70_msv";
    author = "Basher";
    displayName = "$STR_RHS_BTR70_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTRRightGvardSymPlaces, 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_btr60: rhs_btr60_msv
{
    generalmacro = "rhs_btr60_msv";
    author = "Basher";
    displayName = "$STR_RHS_BTR60_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTRRightGvardSymPlaces, 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_btr80: rhs_btr80_msv
{
    generalmacro = "rhs_btr80_msv";
    author = "Basher";
    displayName = "$STR_RHS_BTR80_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Default']","['Label', cBTRRightGvardSymPlaces, 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp1k: rhs_bmp1k_msv
{
    generalmacro = "rhs_bmp1k_msv";
    author = "Basher";
    displayName = "$STR_BMP1K_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp1p: rhs_bmp1p_msv
{
    generalmacro = "rhs_bmp1p_msv";
    author = "Basher";
    displayName = "$STR_BMP1P_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp1: rhs_bmp1_msv
{
    generalmacro = "rhs_bmp1_msv";
    author = "Basher";
    displayName = "$STR_BMP1_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp2: rhs_bmp2_msv
{
    generalmacro = "rhs_bmp2_msv";
    author = "Basher";
    displayName = "$STR_BMP2_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp2e: rhs_bmp2e_msv
{
    generalmacro = "rhs_bmp2e_msv";
    author = "Basher";
    displayName = "$STR_BMP2e_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bmp2k: rhs_bmp2k_msv
{
    generalmacro = "rhs_bmp2k_msv";
    author = "Basher";
    displayName = "$STR_BMP2K_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_brm1k: rhs_brm1k_tv
{
    generalmacro = "rhs_brm1k_tv";
    author = "Basher";
    displayName = "$STR_BRM1K_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Default']"};
    class TransportMagazines
    {
        class _xx_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_10Rnd_762x54_SVD
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = "10*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "2*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_1Rnd_HE_GP25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_RPG26
        {
            magazine = "rhs_rpg26_mag";
            count = "2*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_rpg7_OG7V_mag";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_AK74
        {
            weapon = "rhs_weap_ak74";
            count = 2;
        };
        class _xx_RPG26
        {
            weapon = "rhs_weap_rpg26";
            count = 2;
        };
        class _xx_rhs_weap_rpg7
        {
            weapon = "rhs_weap_rpg7";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 7;
        };
        class _xx_rhs_rpg
        {
            backpack = "rhs_rpg";
            count = 1;
        };
    };
};
class oksv_wood_bm21: RHS_BM21_msv_01
{
    generalmacro = "RHS_BM21_msv_01";
    author = "Basher";
    displayName = "$STR_RHS_BM21_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_bm21_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    class TransportMagazines{};
    class TransportWeapons{};
    class TransportItems{};
};
class oksv_wood_ural: RHS_URAL_msv_01
{
    generalmacro = "RHS_URAL_msv_01";
    author = "Basher";
    displayName = "$STR_RHS_URAL4320_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_uralo: RHS_URAL_Open_msv_01
{
    generalmacro = "STR_RHS_URAL4320OPEN_NAME";
    author = "Basher";
    displayName = "$STR_RHS_URAL4320OPEN_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_uralf: RHS_URAL_Fuel_msv_01
{
    generalmacro = "RHS_URAL_Fuel_msv_01";
    author = "Basher";
    displayName = "$STR_RHS_URAL4320FUEL_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa","rhsafrf\addons\rhs_a2port_car\ural\data\ural_fuel_khk_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_uaz: RHS_UAZ_MSV_01
{
    generalmacro = "RHS_UAZ_MSV_01";
    author = "Basher";
    displayName = "$STR_RHS_UAZ469_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\UAZ\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\UAZ\data\uaz_mount_001_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_uazo: rhs_uaz_open_msv_01
{
    generalmacro = "rhs_uaz_open_msv_01";
    author = "Basher";
    displayName = "$STR_RHS_UAZ469OPEN_NAME";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\UAZ\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\UAZ\data\uaz_mount_001_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_gaz66: rhs_gaz66_msv
{
    generalmacro = "rhs_gaz66_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_gazr142: rhs_gaz66_r142_msv
{
    generalmacro = "rhs_gaz66_r142_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66R";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_kung_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_gazammo: rhs_gaz66_ammo_msv
{
    generalmacro = "rhs_gaz66_ammo_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66AMMO";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
    class TransportMagazines
    {
        class _xx_rhs_30Rnd_545x39_AK_green
        {
            magazine = "rhs_30Rnd_545x39_AK_green";
            count = 20;
        };
        class _xx_rhs_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = 20;
        };
        class _xx_rhs_30Rnd_545x39_7N22_AK
        {
            magazine = "rhs_30Rnd_545x39_7N22_AK";
            count = 20;
        };
        class _xx_rhs_100Rnd_762x54mmR
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = 20;
        };
        class _xx_rhs_100Rnd_762x54mmR_green
        {
            magazine = "rhs_100Rnd_762x54mmR_green";
            count = 20;
        };
        class _xx_rhs_VOG25
        {
            magazine = "rhs_VOG25";
            count = 100;
        };
        class _xx_RHS_rhs_10Rnd_762x54mmR_7N1
        {
            magazine = "rhs_10Rnd_762x54mmR_7N1";
            count = 100;
        };
    };
};
class oksv_wood_gazo: rhs_gaz66o_msv
{
    generalmacro = "rhs_gaz66o_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66OPEN";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\tent_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_ap2: rhs_gaz66_ap2_msv
{
    generalmacro = "rhs_gaz66_ap2_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66AP2";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_medic";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_ap2kung_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_gaz_repair: rhs_gaz66_repair_msv
{
    generalmacro = "rhs_gaz66_ap2_msv";
    author = "Basher";
    displayName = "$STR_RHS_GAZ66REP";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_driver";
    rhs_decalParameters[] = {"['', , '']"};
    hiddenSelections[] = {"camo1","camo2","n1","n2","n3","n4","i1","i2","i3","i4","numplate","numplate2"};
    hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_gaz66\data\gaz66_co.paa","rhsafrf\addons\rhs_gaz66\data\rhs_gaz66_repkung_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","40th_config\data\sa.paa","40th_config\data\sa.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
};
class oksv_wood_spg: rhs_SPG9M_MSV
{
    generalmacro = "rhs_SPG9M_MSV";
    author = "Basher";
    displayName = "$STR_rhs_DN_spg9";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_ags: RHS_AGS30_tripod_MSV
{
    generalmacro = "RHS_AGS30_tripod_MSV";
    author = "Basher";
    displayName = "$STR_rhs_DN_ags30";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_metis: rhs_Metis_9k115_2_msv
{
    generalmacro = "rhs_Metis_9k115_2_msv";
    author = "Basher";
    displayName = "$STR_rhs_MN_at13";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_nsv: RHS_NSV_TriPod_VDV
{
    generalmacro = "RHS_NSV_TriPod_VDV";
    author = "Basher";
    displayName = "$STR_oksv_nsv";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_brdm2: rhsgref_BRDM2_msv
{
    generalmacro = "rhsgref_BRDM2_msv";
    author = "Basher";
    displayName = "$STR_oksv_brdm2";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', [2,3,4], 'Default']","['Label', [5], 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_rhs_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "5*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_rhs_VOG25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_mag_9k38_rocket";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_rhs_weap_igla
        {
            weapon = "rhs_weap_igla";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 2;
        };
    };
};
class oksv_wood_brdm2um: rhsgref_BRDM2UM_msv
{
    generalmacro = "rhsgref_BRDM2UM_msv";
    author = "Basher";
    displayName = "$STR_oksv_brdm2um";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', [2,3,4], 'Default']","['Label', [5], 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_rhs_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "5*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_rhs_VOG25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_mag_9k38_rocket";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_rhs_weap_igla
        {
            weapon = "rhs_weap_igla";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 2;
        };
    };
};
class oksv_wood_brdm2ATGM: rhsgref_BRDM2_ATGM_msv
{
    generalmacro = "rhsgref_BRDM2_ATGM_msv";
    author = "Basher";
    displayName = "$STR_oksv_wood_brdm2ATGM";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', [2,3,4], 'Default']","['Label', [5], 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_rhs_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "5*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_rhs_VOG25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_mag_9k38_rocket";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_rhs_weap_igla
        {
            weapon = "rhs_weap_igla";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 2;
        };
    };
};
class oksv_wood_brdm2HQ: rhsgref_BRDM2_HQ_msv
{
    generalmacro = "rhsgref_BRDM2_HQ_msv";
    author = "Basher";
    displayName = "$STR_oksv_wood_brdm2HQ";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_crew";
    rhs_decalParameters[] = {"['Number', [2,3,4], 'Default']","['Label', [5], 'Honor',[1,0]]"};
    class TransportMagazines
    {
        class _xx_rhs_30Rnd_545x39_AK
        {
            magazine = "rhs_30Rnd_545x39_AK";
            count = "30*1";
        };
        class _xx_100Rnd_762x54_PK
        {
            magazine = "rhs_100Rnd_762x54mmR";
            count = "3*1";
        };
        class _xx_SmokeShellRed
        {
            magazine = "rhs_mag_rdg2_white";
            count = "5*1";
        };
        class _xx_HandGrenade_East
        {
            magazine = "rhs_mag_rgd5";
            count = "9*1";
        };
        class _xx_rhs_VOG25
        {
            magazine = "rhs_VOG25";
            count = "20*1";
        };
        class _xx_OG7
        {
            magazine = "rhs_mag_9k38_rocket";
            count = "2*1";
        };
    };
    class TransportWeapons
    {
        class _xx_rhs_weap_igla
        {
            weapon = "rhs_weap_igla";
            count = 1;
        };
    };
    class TransportItems
    {
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
    class TransportBackpacks
    {
        class _xx_rhs_sidor
        {
            backpack = "rhs_sidor";
            count = 2;
        };
    };
};
class oksv_wood_2s3: rhs_2s3_tv
{
    generalmacro = "rhs_2s3_tv";
    author = "Basher";
    displayName = "$STR_2S3M1_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_tank_crew";
};
class oksv_wood_d30: rhs_d30_msv
{
    generalmacro = "rhs_d30_msv";
    author = "Basher";
    displayName = "$STR_rhs_DN_d30";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_2b14: rhs_2b14_82mm_msv
{
    generalmacro = "rhs_2b14_82mm_msv";
    author = "Basher";
    displayName = "$STR_rhs_DN_2b14";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_rifleman";
};
class oksv_wood_zsu234: rhs_zsu234_aa
{
    generalmacro = "rhs_zsu234_aa";
    author = "Basher";
    displayName = "$STR_RHS_ZSU_Name";
    faction = "oksv_army_wood";
    side = 0;
    scope = 2;
    editorCategory = "oksv_army_wood_category";
    scopeCurator = 2;
    crew = "oksv_wood_tank_crew";
};