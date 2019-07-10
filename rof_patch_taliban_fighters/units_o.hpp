class rof_taki_o_soldier_base: Afghan_Civilian1
{
    scope = 0;

    identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
    faction = "rof_faction_o_taki_rebels";
    side = 0;

    weapons[] = {"Throw","Put"};
    respawnWeapons[] = {"Throw","Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsgref_chestrig"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhsgref_chestrig"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
    uniformClass = "U_Afghan01NH";

    threat[]={0.8,0.1,0.1};

    class EventHandlers
    {
        init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; _this call rds_fnc_randomUniform; };";
    };

    headgearList[] = {
            "Afghan_01Hat", 1,
            "Afghan_02Hat", 1,
            "Afghan_04Hat", 1,
            "Afghan_05Hat", 1,
            "", 1
    };
    rds_randomCloths[] = {
            "U_Afghan01NH", 1,
            "U_Afghan02NH", 1,
            "U_Afghan03NH", 1,
            "U_Afghan06NH", 1
    };
};

class rof_taki_o_soldier_unarmed: rof_taki_o_soldier_base
{
    displayName = "Unarmed Combatant";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_unarmed.jpg";
    scope = 2;
    threat[]={0.1,0.1,0.1};
};

class rof_taki_o_soldier: rof_taki_o_soldier_unarmed
{
    displayName = "Rifleman (AKM)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier.jpg";
    weapons[] = {"rhs_weap_akms","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
    magazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_2("rhs_mag_f1")};
    respawnMagazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_2("rhs_mag_f1")};
};

class rof_taki_o_soldier_fal: rof_taki_o_soldier
{
    displayName = "Rifleman (FAL)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_fal.jpg";
    weapons[] = {"hlc_rifle_SLR","Throw","Put"};
    respawnWeapons[] = {"hlc_rifle_SLR","Throw","Put"};
    magazines[] = {LIST_5("hlc_20Rnd_762x51_B_fal"),"rhs_mag_f1"};
    respawnMagazines[] = {LIST_5("hlc_20Rnd_762x51_B_fal"),"rhs_mag_f1"};
};

class rof_taki_o_soldier_stg44: rof_taki_o_soldier
{
    displayName = "Rifleman (StG 44)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_stg44.jpg";
    weapons[] = {"rhs_weap_MP44","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_MP44","Throw","Put"};
    magazines[] = {LIST_8("rhsgref_25Rnd_792x33_SmE_StG")};
    respawnMagazines[] = {LIST_8("rhsgref_25Rnd_792x33_SmE_StG")};
};

class rof_taki_o_soldier_m3a1: rof_taki_o_soldier
{
    displayName = "Rifleman (M3A1)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_m3a1.jpg";
    weapons[] = {"rhs_weap_m3a1","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_m3a1","Throw","Put"};
    magazines[] = {LIST_6("rhsgref_30rnd_1143x23_M1911B_2mag_SMG"),"rhs_mag_f1"};
    respawnMagazines[] = {LIST_6("rhsgref_30rnd_1143x23_M1911B_2mag_SMG"),"rhs_mag_f1"};
};

class rof_taki_o_soldier_aks74u: rof_taki_o_soldier
{
    displayName = "Rifleman (AKS-74U)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_aks74u.jpg";
    weapons[] = {"rhs_weap_aks74u","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
    magazines[] = {LIST_8("rhs_30Rnd_545x39_7N6_AK"),LIST_2("rhs_mag_f1")};
    respawnMagazines[] = {LIST_8("rhs_30Rnd_545x39_7N6_AK"),LIST_2("rhs_mag_f1")};
};

class rof_taki_o_soldier_mosin: rof_taki_o_soldier_unarmed
{
    displayName = "Rifleman (Mosin)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_mosin.jpg";
    weapons[] = {"rhs_weap_m38","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};
    magazines[] = {LIST_10("rhsgref_5Rnd_762x54_m38"), "rhs_mag_f1"};
    respawnMagazines[] = {LIST_10("rhsgref_5Rnd_762x54_m38"), "rhs_mag_f1"};
};

class rof_taki_o_soldier_kar98k: rof_taki_o_soldier_mosin
{
    displayName = "Rifleman (Kar98k)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_kar98k.jpg";
    weapons[] = {"rhs_weap_kar98k","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_kar98k","Throw","Put"};
    magazines[] = {LIST_10("rhsgref_5Rnd_792x57_kar98k"),"rhs_mag_f1"};
    respawnMagazines[] = {LIST_10("rhsgref_5Rnd_792x57_kar98k"),"rhs_mag_f1"};
};

class rof_taki_o_soldier_tl: rof_taki_o_soldier
{
    displayName = "Team Leader";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_tl.jpg";
    weapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
    magazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_6("rhs_VOG25"), "SmokeShell"};
    respawnMagazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_6("rhs_VOG25"), "SmokeShell"};
    backpack = "B_FieldPack_khk";

    icon="iconManLeader";
    role="Grenadier";
};

class rof_taki_o_soldier_lat: rof_taki_o_soldier_mosin
{
    displayName = "Rifleman (RPG-7)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_lat.jpg";
    weapons[] = {"rhs_weap_m38","rhs_weap_rpg7","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_m38","rhs_weap_rpg7","Throw","Put"};
    backpack = "rhs_rpg_vl";

    textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
    textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
    nameSound="veh_infantry_AT_s";
    icon="iconManAT";
    role="MissileSpecialist";
    threat[]={0.8,0.5,0.2};
    secondaryAmmoCoef=0.5;

    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_AT_s"
            };
            speechPlural[]=
            {
                "veh_infantry_AT_p"
            };
        };
    };
};

class rof_taki_o_soldier_pistol: rof_taki_o_soldier_unarmed
{
    displayName = "Rebel (Pistol)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_pistol.jpg";
    weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
    magazines[] = {LIST_5("rhs_mag_9x18_8_57N181S")};
    respawnMagazines[] = {LIST_5("rhs_mag_9x18_8_57N181S")};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_vest_pistol_holster"};
    respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","rhs_vest_pistol_holster"};

    threat[]={0.6,0.1,0.1};
};

class rof_taki_o_soldier_pistol_rpg: rof_taki_o_soldier_pistol
{
    displayName = "RPG Man (Pistol)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_pistol_rpg.jpg";
    weapons[] = {"rhs_weap_makarov_pm","rhs_weap_rpg7", "Throw","Put"};
    respawnWeapons[] = {"rhs_weap_makarov_pm","rhs_weap_rpg7", "Throw","Put"};
    backpack = "rhs_rpg_vl";

    textSingular="$STR_A3_nameSound_veh_infantry_AT_s";
    textPlural="$STR_A3_nameSound_veh_infantry_AT_p";
    nameSound="veh_infantry_AT_s";
    icon="iconManAT";
    role="MissileSpecialist";
    threat[]={0.8,0.5,0.2};
    secondaryAmmoCoef=0.5;

    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_AT_s"
            };
            speechPlural[]=
            {
                "veh_infantry_AT_p"
            };
        };
    };
};

class rof_taki_o_soldier_pk: rof_taki_o_soldier_unarmed
{
    displayName = "Machinegunner";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_pk.jpg";
    weapons[] = {"rhs_weap_pkm","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_pkm"};
    magazines[] = {"rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR"};
    backpack = "rhs_sidorMG";

    textSingular="$STR_A3_nameSound_veh_infantry_MG_s";
    textPlural="$STR_A3_nameSound_veh_infantry_MG_p";
    nameSound="veh_infantry_MG_s";
    icon="iconManMG";
    threat[]={1,0.1,0.3};

    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_MG_s"
            };
            speechPlural[]=
            {
                "veh_infantry_MG_p"
            };
        };
    };
};

class rof_taki_o_soldier_mg42: rof_taki_o_soldier_pk
{
    displayName = "Rifleman (MG 42)";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_soldier_mg42.jpg";
    weapons[] = {"rhs_weap_mg42","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_mg42","Throw","Put"};
    magazines[] = {LIST_5("rhsgref_50Rnd_792x57_SmK_drum")};
    respawnMagazines[] = {LIST_5("rhsgref_50Rnd_792x57_SmK_drum")};
    backpack = "";
};

class rof_taki_o_medic: rof_taki_o_soldier_pistol
{
    displayName = "Medic";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_medic.jpg";
    magazines[] = {LIST_4("rhs_mag_9x18_8_57N181S"), LIST_2("SmokeShell")};
    respawnMagazines[] = {LIST_4("rhs_mag_9x18_8_57N181S"), LIST_2("SmokeShell")};
    items[] = {LIST_2("FirstAidKit")};
    respawnItems[] = {LIST_2("FirstAidKit")};
    backpack = "rhs_medic_bag_filled";

    attendant=1;
    icon="iconManMedic";
    role="CombatLifeSaver";
    picture="pictureHeal";
    threat[]={0.6,0.1,0.1};

    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_medic_s"
            };
            speechPlural[]=
            {
                "veh_infantry_medic_p"
            };
        };
    };
};

class rof_taki_o_engineer: rof_taki_o_soldier_mosin
{
    displayName = "Engineer";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_engineer.jpg";
    backpack = "I_Fieldpack_oli_Repair";

    canDeactivateMines=1;
    engineer=1;
    detectSkill=31;
    icon="iconManEngineer";
    role="Sapper";
    picture="pictureRepair";
};

class rof_taki_o_sniper: rof_taki_o_soldier_unarmed
{
    displayName = "Sniper";
    editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_o_sniper.jpg";
    weapons[] = {"40th_weap_svd_wood_pso1","Throw","Put"};
    respawnWeapons[] = {"40th_weap_svd_wood_pso1","Throw","Put"};
    magazines[] = {LIST_5("ACE_10Rnd_762x54_Tracer_mag"),LIST_2("SmokeShell")};
    respawnMagazines[] = {LIST_5("ACE_10Rnd_762x54_Tracer_mag"),LIST_2("SmokeShell")};

    textSingular="$STR_A3_nameSound_veh_infantry_sniper_s";
    textPlural="$STR_A3_nameSound_veh_infantry_sniper_p";
    nameSound="veh_infantry_sniper_s";
    role="Marksman";

    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_sniper_s"
            };
            speechPlural[]=
            {
                "veh_infantry_sniper_p"
            };
        };
    };
};