// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_flecktarn_full"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {"FirstAidKit"};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsgref_helmet_pasgt_flecktarn"};
    vest[] = {"rhsgref_6b23_ttsko_mountain_rifleman"};
    backpack[] = {"rhssaf_kitbag_md2camo"};
    primaryWeapon[] = {"rhs_weap_savz58v_rail_black"};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_762x39mm_Savz58"),
        LIST_2("rhs_30Rnd_762x39mm_Savz58_tracer"),
        LIST_2("rhssaf_mag_br_m84"),
        LIST_2("rhssaf_mag_brd_m83_white")
    };
    items[] =
    {
        LIST_2("FirstAidKit")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akms_gp25"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_762x39mm_89"),
        LIST_1("rhssaf_mag_br_m84"),
        LIST_1("rhssaf_mag_brd_m83_white"),
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r_light
{
    displayName = "Carabinier";
};
class m : car 
{
    displayName = "Medic";
    vest[] = {"rhsgref_6b23_ttsko_mountain_medic"};
    backpackItems[] = {
        "Medikit",
        LIST_7("FirstAidKit"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] = {};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m92", "rhs_weap_m92_fold"};
    magazines[] =
    {
        LIST_6("rhssaf_30Rnd_762x39mm_M67"),
        "rhssaf_mag_br_m84",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhsgref_6b23_ttsko_mountain_officer"};
    headgear[] = {"rhsgref_un_beret"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] += {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    items[] = {
        LIST_2("FirstAidKit")
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"rhsgref_6b23_ttsko_mountain"};
    primaryWeapon[] = {"rhs_weap_pkm"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        "rhssaf_mag_br_m84",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg75"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svdp"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    magazines[] =
    {
        LIST_12("rhs_10Rnd_762x54mmR_7N1"),
        "rhssaf_mag_br_m84",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : r_light
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    sidearmWeapon[] = {};
    scope[] = {"rhs_acc_pkas"};
    backPack[] = {"B_FieldPack_oli"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhssaf_mag_br_m84",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhsgref_ttsko_alicepack"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : r_light
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backPack[] = {"rhsgref_ttsko_alicepack"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : hmgg
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg_empty"};
    magazines[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag"),
        LIST_6("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_3("rhs_rpg7_PG7VL_mag")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VL_mag",
        "rhs_rpg7_TBG7V_mag",
        "rhs_rpg7_OG7V_mag"
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_SPG9_Gun_Bag"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};
class hatac : hatg
{
    displayName = "HAT Ammo Carrier";
};
class hatag : hatg
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_SPG9_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};
class mtrac : mtrg
{
    displayName = "Mortar Ammo Carrier";
};
class mtrag : mtrg
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backPack[] = {"rhsgref_ttsko_alicepack"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
    backpackItems[] +=
    {
        "rhs_mag_9k38_rocket"
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    backPack[] = {"rhsgref_ttsko_alicepack"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    vest[] = {"rhsgref_6b23_ttsko_mountain_sniper"};
    headgear[] = {};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        "rhssaf_mag_br_m84",
        LIST_2("rhs_mag_9x19_17")
    };
    backpack[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
    items[] += {"rhsgref_un_beret"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhs_acc_1p78"};
    silencer[] = {"rhs_acc_dtk"};
    primaryWeapon[] = {"rhs_weap_m76"};
    backPack[] = {"rhs_assault_umbts"};
    magazines[] =
    {
        LIST_11("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhssaf_mag_br_m84"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_mag_9x19_17")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsgref_6b23_ttsko_mountain_nco"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsgref_6b23_ttsko_mountain"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_df15"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_df15"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_2("rhs_mag_9x19_17")
    };
    items[] =
    {
        LIST_1("FirstAidKit")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"rhs_6b23_digi_vydra_3m"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_1("SatchelCharge_Remote_Mag"),
        LIST_2("DemoCharge_Remote_Mag")
    };
    // TO REPLACE: items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"rhs_6b23_digi_vydra_3m"};
    backpack[] = {"rhssaf_alice_smb"};
    items[] +=
    {
        // TO REPLACE: "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_3("rhs_mine_pmn2_mag"),
        LIST_3("rhs_mine_tm62m_mag")
    };
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
    linkedItems[] += {"I_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_762x39mm_Savz58"),
        LIST_1("rhssaf_mag_brd_m83_white")
    };
};