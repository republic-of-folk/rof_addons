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
    linkedItems[] = {'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
    respawnLinkedItems[] = {'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
    items[] = {};
    respawnItems[] = {};
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
    allowedFacewear[] = {
            "rhsusf_shemagh_od", 0.25,
            "rhsusf_shemagh2_od", 0.25,
            "rhsusf_shemagh_white", 0.25,
            "rhsusf_shemagh2_white", 0.25,
            "", 1
    };
    rds_randomCloths[] = {
            "U_Afghan01NH", 1,
            "U_Afghan02NH", 1,
            "U_Afghan03NH", 1,
            "U_Afghan06NH", 1,
    };
};

class rof_taki_o_soldier_unarmed: rof_taki_o_soldier_base
{
    displayName = "Unarmed Combatant";
    scope = 2;
    linkedItems[] += {"rhsgref_chestrig"};
    respawnLinkedItems[] += {"rhsgref_chestrig"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};

    threat[]={0.1,0.1,0.1};
};

class rof_taki_o_soldier: rof_taki_o_soldier_base
{
    displayName = "Rifleman (AKM)";
    scope = 2;
    weapons[] += {"rhs_weap_akms"};
    respawnWeapons[] += {"rhs_weap_akms"};
    magazines[] = {LIST_5("rhs_30Rnd_762x39mm")};
    respawnMagazines[] = {LIST_5("rhs_30Rnd_762x39mm")};
    linkedItems[] += {"rhsgref_chestrig"};
    respawnLinkedItems[] += {"rhsgref_chestrig"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
};

class rof_taki_o_soldier_mosin: rof_taki_o_soldier_base
{
    displayName = "Rifleman (Mosin)";
    scope = 2;
    weapons[] += {"rhs_weap_m38"};
    respawnWeapons[] += {"rhs_weap_m38"};
    magazines[] = {LIST_10("rhsgref_5Rnd_762x54_m38")};
    respawnMagazines[] = {LIST_10("rhsgref_5Rnd_762x54_m38")};
    linkedItems[] += {"rhs_6sh92"};
    respawnLinkedItems[] += {"rhs_6sh92"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
};

class rof_taki_o_soldier_tl: rof_taki_o_soldier
{
    displayName = "Team Leader";
    scope = 2;
    weapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_akms_gp25","Throw","Put"};
    magazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_6("rhs_VOG25")};
    respawnMagazines[] = {LIST_5("rhs_30Rnd_762x39mm"), LIST_6("rhs_VOG25")};
    backpack = "B_FieldPack_khk";

    icon="iconManLeader";
    role="Grenadier";
};

class rof_taki_o_soldier_lat: rof_taki_o_soldier_mosin
{
    displayName = "Rifleman (AT)";
    weapons[] = {"rhs_weap_m38","rhs_weap_rpg7", "Throw","Put"};
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

class rof_taki_o_soldier_pistol: rof_taki_o_soldier_base
{
    displayName = "Rifleman (Pistol)";
    scope = 2;
    weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
    magazines[] = {LIST_5("rhs_mag_9x18_8_57N181S")};
    respawnMagazines[] = {LIST_5("rhs_mag_9x18_8_57N181S")};
    linkedItems[] += {"rhs_vest_pistol_holster"};
    respawnLinkedItems[] += {"rhs_vest_pistol_holster"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};

    threat[]={0.6,0.1,0.1};
};

class rof_taki_o_soldier_pistol_rpg: rof_taki_o_soldier_pistol
{
    displayName = "Rifleman (Pistol, RPG)";
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

class rof_taki_o_soldier_pk: rof_taki_o_soldier_base
{
    displayName = "Machinegunner";
    scope = 2;
    weapons[] = {"rhs_weap_pkm","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_pkm"};
    magazines[] = {"rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR"};
    linkedItems[] += {"rhs_6sh92"};
    respawnLinkedItems[] += {"rhs_6sh92"};
    items[] = {"FirstAidKit"};
    respawnItems[] = {"FirstAidKit"};
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

class rof_taki_o_medic: rof_taki_o_soldier_pistol
{
    displayName = "Medic";
    magazines[] = {LIST_4("rhs_mag_9x18_8_57N181S"), LIST_2("rhs_mag_rdg2_white")};
    respawnMagazines[] = {LIST_4("rhs_mag_9x18_8_57N181S"), LIST_2("rhs_mag_rdg2_white")};
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
    uniformClass = "U_Afghan06NH";
    backpack = "I_Fieldpack_oli_Repair";

    canDeactivateMines=1;
    engineer=1;
    detectSkill=31;
    icon="iconManEngineer";
    role="Sapper";
    picture="pictureRepair";
};