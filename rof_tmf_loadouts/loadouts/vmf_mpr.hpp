class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "VMF_M69_FIELD",
		"VMF_M69_FIELD_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
    goggles[] = {
		"","","","","","","","","","",
		"G_Spectacles","G_Spectacles_Tinted","G_Squares","G_Squares_Tinted"
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
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_Flashlight_KSF1"),
		LIST_1("ACE_EarPlugs"),
		LIST_2("ACE_CableTie")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
	headgear[] = {"ssh68_khaki","ssh68_khaki_VMF"};
    vest[] = {"RPS_Smersh12_b"};
    primaryWeapon[] = {"rhs_weap_aks74_2"};
    scope[] = {};
	silencer[] = {"rhs_acc_dtk1983"};
    magazines[] =
    {
        LIST_11("rhs_30Rnd_545x39_7N6M_plum_AK"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("SmokeShell")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
	primaryWeapon[] = {"rhs_weap_ak74_2"};
	vest[] = {};
    magazines[] =
    {
        LIST_2("rhs_30Rnd_545x39_7N6M_plum_AK")
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
class g : r
{
    displayName = "Rifleman [GP-25]";
	vest[] = {"RPS_Smersh11_b","RPS_Smersh10_b","RPS_Smersh8_b"};
    primaryWeapon[] = {"rhs_weap_aks74_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Rifleman [AKS-74U]";
	primaryWeapon[] = {"rhs_weap_aks74u"};
	silencer[] = {"rhs_acc_pgs64_74u"};
};
class m : r
{
    displayName = "Medic";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
    traits[] += {"medic"};
    vest[] = {"RPS_Smersh13_b","RPS_Smersh14_b"};
    Items[] += {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
};
class smg : car
{
    displayName = "Rifleman [AKS-74U + PBS-4]";
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pbs4"};
};
class ftl : r
{
    displayName = "Fireteam Leader / Efreitor [AKS-74 + RPG-26]";
	secondaryWeapon[] = {"rhs_weap_RPG26"};
	headgear[] = {"ssh68_khaki_VMF_RS"};
	uniform[] = {"VMF_M69_FIELD_EFR","VMF_M69_FIELD_EFR_F"};
    linkedItems[] += {"Binocular"};
};
class sl : g
{
	displayName = "Squad Leader / Sergeant [GP-25]";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
	uniform[] = {"VMF_M69_FIELD_SZT_F"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
		LIST_2("rhs_GRD40_White")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"Binocular"
    };
	Items[] += {
		"ZSN_Whistle","ACE_MapTools"
	};
};
class co : sl
{
    displayName = "Platoon Leader / Lieutenant";
	uniform[] = {"VMF_M69_FIELD_LT"};
	primaryWeapon[] = {"rhs_weap_aks74_2"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	magazines[] =
    {
		LIST_11("rhs_30Rnd_545x39_7N6M_plum_AK"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("SmokeShell"),
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    headgear[] = {"345th_beret_VMF_officer"};
};
class rto : r
{
	displayName = "Radio Operator"
	backPack[] = {"RD_54_69_R148"};
};
class fac : sl
{
    displayName = "Forward Air Controller / Junior Sergeant";
	uniform[] = {"VMF_M69_FIELD_JRSZT","VMF_M69_FIELD_JRSZT_F"};
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
	linkedItems[] = {
		"ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"rhs_pdu4"
	};
	magazines[] = {
		LIST_6("rhs_30Rnd_545x39_7N6M_plum_AK"),
		LIST_4("rhs_30Rnd_545x39_AK_plum_green"),
        LIST_1("rhs_mag_rgd5"),
        LIST_2("SmokeShell"),
		LIST_2("SmokeShellGreen"),
		LIST_3("rhs_VOG25"),
        LIST_3("rhs_GRD40_White"),
		LIST_3("rhs_GRD40_Green"),
		LIST_3("rhs_GRD40_Red")
	};
};
class ar : r
{
    displayName = "Automatic Rifleman [RPK-74]";
    primaryWeapon[] = {"gm_lmgrpk74n_prp"};
    bipod[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_8("gm_45Rnd_545x39mm_B_7N6_ak74_prp"),
		LIST_2("gm_45Rnd_545x39mm_B_T_7T3_ak74_prp"),
        "rhs_mag_rgd5",
        "SmokeShell",
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	vest[] = {"RPS_Smersh13_b","RPS_Smersh14_b"};
    Items[] +=
    {
        LIST_6("gm_45Rnd_545x39mm_B_7N6_ak74_prp"),
		LIST_2("gm_45Rnd_545x39mm_B_T_7T3_ak74_prp")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Grenadier [RPG-7 + PM]";
	primaryWeapon[] = {};
	vest[] = {};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
	secondaryAttachments[] = {"rhs_acc_pgo7v"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] =
    {
        LIST_3("rhs_rpg7_PG7VL_mag"),
        LIST_6("rhs_mag_9x18_8_57N181S")
    };
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItemToBackpack 'rhs_rpg7_PG7VL_mag';";
};
class dm : r
{
    displayName = "Designated Marksman [AK-74N + PSO-1M2]";
    primaryWeapon[] = {"rhs_weap_ak74n_2"};
    scope[] = {"rhs_acc_pso1m2"};
};
class mmgg : ar
{
    displayName = "MMG Gunner [PKM]";
	vest[] = {"RPS_Smersh3_b"};
    primaryWeapon[] = {"rhs_weap_pkm"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
		"rhs_100Rnd_762x54mmR_green",
        "rhs_mag_rgd5",
        LIST_2("SmokeShell")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	backPack[] = {"SOV_Sidor_black"};
    backpackItems[] =
    {
        "rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR"
    };
    linkedItems[] += {"Binocular"};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"Binocular"
    };
	backPack[] = {"SOV_Sidor_black"};
    backpackItems[] =
    {
        "rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR"
    };
};
class hmgg : r
{
    displayName = "HMG Gunner [DShkM]";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class gmgg : r
{
    displayName = "GMG Gunner [AGS-30]";
    backPack[] = {"RHS_AGS30_Gun_Bag"};

};
class gmgac : r
{
    displayName = "GMG Ammo Carrier";
    backPack[] = {"RHS_AGS30_Gun_Bag"};
};
class gmgag : r
{
    displayName = "GMG Assistant Gunner";
    backPack[] = {"RHS_AGS30_Tripod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class matg : rat
{
    displayName = "MAT Gunner [RPG-7 + PM]";
	vest[] = {"rhs_6sh46"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    magazines[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag"),
        LIST_6("rhs_mag_9x18_8_57N181S")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : r
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
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class hatg : r
{
    displayName = "HAT Gunner [SPG-9]";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_SPG9_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
};
class mtrg : r
{
    displayName = "Mortar Gunner [Podnos]";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : r
{
    displayName = "Mortar Assistant Gunner";
    headgear[] = {
        "345th_beret_VMF1",
        "345th_beret_VMF2"
    };
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
	Items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
    linkedItems[] += {"rhs_pdu4"};
};
class samg : r
{
    displayName = "AA Missile Specialist [9K38]";
    secondaryWeapon[] = {"rhs_weap_igla"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_mag_9k38_rocket';";
};
class samag : r
{
    displayName = "AA Assistent Missile Specialist";
	backPack[] = {"SOV_Sidor_black"};
	backpackItems[] = {"rhs_mag_9k38_rocket"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
};
class sn : dm
{
    displayName = "Sniper [SVD + PSO-1M2]";
	vest[] = {"RPS_Smersh17_b"};
	primaryWeapon[] = {"40th_weap_svd_wood"};
//    traits[] += {"camouflageCoef"};
	magazines[] =
    {
        LIST_11("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("SmokeShell")
    };
};
class sp : dm
{
    displayName = "Spotter [AK-74N + PSO-1M2]";
//    traits[] += {"camouflageCoef"};
	scope[] = {"rhs_acc_pso1m2"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
	backPack[] = {"RD_54_69_R148"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
	headgear[] = {"rhs_tsh4"};
	backPack[] = {"SOV_Sidor_black"};
    backpackItems[] = {"ToolKit"};
};
class vg : r
{
    displayName = "Vehicle Gunner";
	headgear[] = {"rhs_tsh4"};
};
class pp : car
{
    displayName = "Helicopter Pilot";
	backPack[] = {"RD_54_69_R148"};
	uniform[] = {"rhs_uniform_df15"};
    headgear[] = {"rhs_zsh7a_mike_alt"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
	uniform[] = {"rhs_uniform_df15"};
	backPack[] = {"SOV_Sidor_black"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
	uniform[] = {"rhs_uniform_df15"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {"default"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_6sh46"};
	backPack[] = {"rhs_d6_Parachute_backpack"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_6("rhs_mag_9x18_8_57N181S")
    };
    items[] = {
        LIST_6("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
	sidearmWeapon[] = {"ACE_VMH3"};
    traits[] += {"explosiveSpecialist"};
	Items[] +={"ACE_Clacker","ACE_DefusalKit"};
    backpack[] = {"B_FieldPack_blk"};
    backpackItems[] = {
        LIST_2("rhs_ec400_mag"),
		LIST_4("rhs_ec200_mag"),
		LIST_8("rhs_ec75_mag")
    };
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
	sidearmWeapon[] = {"ACE_VMH3"};
    traits[] += {"explosiveSpecialist"};
	Items[] += {
		"MineDetector","ACE_wirecutter","ACE_Clacker","ACE_DefusalKit"
	};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        LIST_5("rhs_mine_pmn2_mag"),
        "rhs_mine_tm62m_mag",
		"rhs_mine_ozm72_a_mag",
		"rhs_mine_ozm72_b_mag",
		"rhs_mine_ozm72_c_mag"
    };
};
class UAV_light : r
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"O_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"O_UAV_01_backpack_F"};
};