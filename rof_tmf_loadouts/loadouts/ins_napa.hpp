// Author: Teizan
class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "M93_Jeans_B",
        "M93_ins_dpm_B",
        "M93_bdu_jeans_B"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "rhs_beanie",
		"H_Booniehat_tan",
		"rhs_beanie_green",
		"H_Cap_blk",
		"H_Booniehat_oli"
    };
    goggles[] = {
		"G_Balaclava_blk",
		"G_Balaclava_oli",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_tan"
	};
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
    items[] =
    {
        LIST_4("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";
};
class r : baseMan
{
    displayName = "Rifleman (AKM type)";
    vest[] = {
		"V_TacVest_blk",
		"V_TacVest_oli",
		"V_TacVest_camo"
	};
    backpack[] = {
		"B_AssaultPack_khk",
		"B_AssaultPack_sgg",
		"rhs_sidor",
		"B_FieldPack_oli"
		};
    primaryWeapon[] = {
		"rhs_weap_akm",
		"rhs_weap_akms",
		"rhs_weap_savz58p",
		"rhs_weap_savz58v",
		"rhs_weap_pm63"
	};
    magazines[] =
    {
        LIST_9("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_mag_f1")
	};
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
    };
};
class car : r
{
    displayName = "Rifleman (AK-74 type)";
	primaryWeapon[] = {
		"rhs_weap_ak74",
		"rhs_weap_ak74_2",
		"rhs_weap_aks74",
		"rhs_weap_aks74_2",
		"rhs_weap_aks74u"
	};
	magazines[] = {
		LIST_2("rhs_30Rnd_545x39_7N10_2mag_plum_AK"),
		LIST_6("rhs_30Rnd_545x39_7N10_plum_AK"),
		LIST_1("rhs_30Rnd_545x39_AK_green"),
		LIST_2("rhs_mag_f1")
	};
};
class r_light : r
{
	vest[] = {
		"V_BandollierB_oli",
		"V_BandollierB_khk",
		"V_BandollierB_rgr",
		"V_BandollierB_blk"
	};
    displayName = "Rifleman (Kar98k)";
	primaryWeapon[] = {"rhs_weap_kar98k"};
    magazines[] =
    {
        LIST_15("rhsgref_5Rnd_792x57_kar98k"),
        LIST_1("rhs_mag_f1")
	};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {
		"rhs_weap_akm_gp25",
		"rhs_weap_akms_gp25"
	};
    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_30Rnd_762x39mm_tracer"),
        LIST_6("rhs_VOG25")
    };
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
	backpack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
    items[] = {};
};
class smg : r
{
    displayName = "Submachinegunner";
 //    vest[] = {
	// 	"V_Chestrig_rgr",
	// 	"V_Chestrig_oli"
	// };
    primaryWeapon[] = {"rhs_weap_savz61"};
    magazines[] =
    {
        LIST_10("rhsgref_20rnd_765x17_vz61"),
        LIST_2("rhs_mag_f1")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
	headgear[] = {
		"rds_Woodlander_cap1",
		"rds_Woodlander_cap2",
		"rds_Woodlander_cap3",
		"rds_Woodlander_cap4"
		};
	sidearmWeapon[] = {"rhs_weap_rsp30_green"};
    magazines[] +=
    {
        LIST_2("rhs_mag_rdg2_white")
    };
	items[] += {"ACE_MapTools"};
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"rhsgref_helmet_M1_liner"};
    sidearmWeapon[] = {"rhs_weap_rsp30_red"};
	items[] += {"ZSN_Whistle"};
};
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"rds_police_cap"};
};
class fac : ftl
{
    displayName = "Forward Air Controller";
};
class ar : r
{
    displayName = "Machinegunner (PKM)";
	backpack[] = {
		"B_FieldPack_khk",
		"B_FieldPack_oli"
	};
    primaryWeapon[] = {"rhs_weap_pkm"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhs_100Rnd_762x54mmR_green"
    };
};
class aar : r
{
    displayName = "Assistant Machinegunner (PKM)";
	backpack[] = {
		"B_Carryall_oucamo",
		"B_Carryall_oli"
	};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        "rhs_100Rnd_762x54mmR_green"
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7V_mag") // todo: 4
    };
};
class dm : smg
{
    displayName = "Hunter";
    vest[] = {"V_Pocketed_olive_F"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    primaryWeapon[] = {"rhs_weap_Izh18"};
    scope[] = {"hlc_optic_VOMZ3d"};
    magazines[] = {
        LIST_20("rhsgref_1Rnd_Slug"),
        LIST_20("rhsgref_1Rnd_Slug")
    };
    linkedItems[] += {"Binocular"};
};
class mmgg : ar
{
    displayName = "MMG Gunner (MG-42)";
    primaryWeapon[] = {"rhs_weap_mg42"};
    magazines[] =
    {
        LIST_6("rhsgref_50Rnd_792x57_SmE_drum"),
		LIST_3("rhsgref_50Rnd_792x57_SmK_alltracers_drum"),
		LIST_1("rhsgref_296Rnd_792x57_SmE_belt")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
	backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
		LIST_2("rhsgref_296Rnd_792x57_SmE_belt"),
		LIST_1("rhsgref_296Rnd_792x57_SmK_alltracers_belt")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	primaryWeapon[] = {"rhs_weap_MP44"};
	magazines[] = {
		LIST_6("rhsgref_30Rnd_792x33_SmE_StG"),
		LIST_2("rhs_mag_rdg2_white")
	};
    linkedItems[] +=
    {
        "Binocular"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
		LIST_2("rhsgref_296Rnd_792x57_SmE_belt"),
		LIST_1("rhsgref_296Rnd_792x57_SmK_alltracers_belt")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShKM_Gun_Bag"};
	Items[] += {"ACE_EntrenchingTool"};
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShKM_Gun_Bag"};
	Items[] += {"ACE_EntrenchingTool"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShKM_TripodHigh_Bag"};
	Items[] += {"ACE_EntrenchingTool"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class matg : rat
{
    displayName = "MAT Gunner";
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhsgref_wdl_alicepack"};
    backpackItems[] =
    {
        LIST_5("rhs_rpg7_PG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] +=
    {
        "Binocular"
    };
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_3("rhs_rpg7_PG7V_mag")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_SPG9_Gun_Bag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_SPG9_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_SPG9_Tripod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] +=
    {
        "Binocular"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : smg
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {};
    goggles[] = {"G_Balaclava_oli"};
    primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m21"};
	magazines[] = {
        LIST_9("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class sp : sn
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {};
    goggles[] = {"G_Balaclava_oli"};
	primaryWeapon[] = {"rhs_weap_akmn"};
    scope[] = {"rhs_acc_pso1m2"};
	silencer[] = {"rhs_acc_dtkakm"};
	magazines[] = {
		LIST_7("rhs_30Rnd_762x39mm_bakelite"),
		LIST_3("rhs_30Rnd_762x39mm_bakelite_tracer"),
		LIST_2("rhs_mag_rdg2_white")
	};
    linkedItems[] +=
    {
        "Rangefinder"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"default"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"default"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    vest[] = {"rhs_vest_commander"};
    headgear[] = {"rhs_zsh7a_mike_green"};
    goggles[] = {};
    backpack[] = {"ACE_NonSteerableParachute"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] =
    {
        LIST_2("rhs_mag_762x25_8")
    };
    items[] =
    {
        LIST_4("ACE_fieldDressing"),
        LIST_1("ACE_morphine")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {
        "V_TacVest_blk",
        "V_TacVest_oli",
        "V_TacVest_camo"
    };
    items[] +=
    {
		"ACE_DefusalKit",
		"ACE_Cellphone",
		"MineDetector",
        "ACE_EntrenchingTool"
    };
    backPack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] = {
		"IEDUrbanBig_Remote_Mag",
		"IEDLandBig_Remote_Mag",
        LIST_2("IEDUrbanSmall_Remote_Mag"),
        LIST_2("IEDLandSmall_Remote_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {
        "V_TacVest_blk",
        "V_TacVest_oli",
        "V_TacVest_camo"
    };
    items[] +=
    {
		"ACE_DefusalKit",
		"MineDetector",
        "ACE_EntrenchingTool"
    };
    backPack[] = {"rhssaf_alice_md2camo"};
    backpackItems[] = {
		LIST_12("rhs_mine_pmn2_mag"),
		LIST_2("rhs_mine_tm62m_mag")
    };
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
};