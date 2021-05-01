class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_BG_Guerrilla_6_1","U_BG_Guerilla1_1","U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_BG_Guerilla1_2_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_khk","H_Bandanna_sgg","H_Bandanna_sand","H_Bandanna_camo",
		"H_Booniehat_khk","H_Booniehat_oli","H_Booniehat_tan","H_Booniehat_dgtl",
		"H_Cap_grn_BI","H_Cap_blk","H_Cap_blk_CMMG","H_Cap_grn","H_Cap_oli","H_Cap_tan",
		"H_HelmetIA",
		"H_Shemag_olive","H_Shemag_olive","H_Shemag_olive","H_Shemag_olive",
		"H_ShemagOpen_tan","H_ShemagOpen_tan","H_ShemagOpen_khk",
		"H_HeadBandage_clean_F","H_HeadBandage_stained_F","H_HeadBandage_bloody_F"
    };
    goggles[] = {"default"};
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
    items[] = {
		LIST_3("ACE_fieldDressing"),
		LIST_1("ACE_morphine"),
		"murshun_cigs_cigpack",
        "murshun_cigs_lighter"
	};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class car : baseMan
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_TRG20_F","arifle_TRG20_F","arifle_TRG20_F","arifle_Mk20C_plain_F"};
    attachment[] = {"acc_flashlight"};
    vest[] = {"V_TacVest_blk","V_TacVest_oli"};
    backpack[] = {"B_AssaultPack_blk", "B_AssaultPack_rgr", "B_AssaultPack_cbr", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_AssaultPack_sgg"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        LIST_1("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_2("Chemlight_blue")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
        LIST_1("ACE_tourniquet"),
        LIST_1("ACE_CableTie")
    };
};
class r : car
{
    displayName = "Rifleman";
    primaryWeapon[] = {"arifle_TRG21_F","arifle_TRG21_F","arifle_TRG21_F","arifle_Mk20_plain_F"};
    scope[] = {"optic_aco_grn"};
    magazines[] += {
        LIST_4("30Rnd_556x45_Stanag"),
        LIST_1("HandGrenade")
    };
};
class g : car
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_TRG21_GL_F","arifle_TRG21_GL_F","arifle_TRG21_GL_F","arifle_Mk20_GL_plain_F"};
    magazines[] +=
    {
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_1("1Rnd_SmokeBlue_Grenade_shell"),
		LIST_1("1Rnd_SmokeGreen_Grenade_shell"),
		LIST_1("1Rnd_SmokeRed_Grenade_shell")
    };
};
class m : car 
{
    displayName = "Medic";
	backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
		LIST_10("ACE_fieldDressing"),
		LIST_10("ACE_SalineIV"),
		LIST_10("ACE_epinephrine"),
		LIST_10("ACE_morphine"),
		LIST_2("ACE_adenosine"),
		"ACE_personalAidKit"
    };
};
class smg : car
{
    displayName = "Submachinegunner (Suppressed)";
    primaryWeapon[] = {"hgun_PDW2000_F"};
	silencer[] = {"muzzle_snds_l"};
    magazines[] =
    {
        LIST_6("30Rnd_9x21_Mag"),
        "HandGrenade",
		"MiniGrenade",
		"SmokeShell",
		"SmokeShellGreen",
		LIST_2("Chemlight_blue")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	primaryWeapon[] = {"arifle_Mk20_GL_F"};
	sidearmWeapon[] = {"hgun_ACPC2_F"};
	linkedItems[] += {
        "Binocular"
    };
	magazines[] +=
    {
        LIST_2("9Rnd_45ACP_Mag"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellRed")
    };
};
class sl : r
{
    displayName = "Squad Leader";
	uniform[] = {"U_BG_leader"};
    headgear[] = {"H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Bandanna_khk_hs","H_Cap_oli_hs","H_MilCap_dgtl","H_Shemag_olive_hs"};
	scope[] = {"optic_mrco"};
    sidearmWeapon[] = {"hgun_ACPC2_F"};
    magazines[] +=
    {
        LIST_2("9Rnd_45ACP_Mag")
    };
	items[] += {"ACE_MapTools","ACE_SpraypaintBlue","ACRE_VHF30108SPIKE"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class co : ftl
{
    displayName = "Group Commander";
	primaryWeapon[] = {"arifle_TRG21_GL_F"};
	headgear[] = {};
	uniform[] = {"U_I_G_resistanceLeader_F"};
	vest[] = {"V_I_G_resistanceLeader_F"};
	scope[] = {"optic_mrco"};
	items[] += {
        "ACE_MapTools",
        "ACE_SpraypaintBlue",
        "ACRE_VHF30108SPIKE",
    };
    linkedItems[] = {
        "ItemGPS"
    };
};
class fac : r
{
    displayName = "Radioman";
    headgear[] = {"H_Watchcap_blk","H_Watchcap_cbr","H_Watchcap_camo","H_Watchcap_khk","H_Booniehat_khk_hs","H_Bandanna_khk_hs","H_Cap_oli_hs","H_MilCap_dgtl","H_Shemag_olive_hs"};
	backPack[] = {"B_Kitbag_cbr","B_Kitbag_rgr","B_Kitbag_sgg","B_Kitbag_tan"};
	scope[] = {"optic_mrco"};
	items[] += {"ACE_MapTools","ACRE_VHF30108"};
    linkedItems[] =
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class ar : car
{
    displayName = "Automatic Rifleman";
	primaryWeapon[] = {"LMG_Mk200_F"};
    bipod[] = {"bipod_03_f_blk"};
    magazines[] =
    {
        LIST_3("200Rnd_65x39_cased_Box"),
        LIST_2("Chemlight_blue"),
        LIST_2("MiniGrenade"),
		"SmokeShell",
		"SmokeShellGreen"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    backpackItems[] = {
		LIST_2("200Rnd_65x39_cased_Box"),
		LIST_10("ACE_Sandbag_empty")
	};
    linkedItems[] += {
        "Binocular"
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_RPG7_F"};
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'RPG7_F';";
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"ace_optic_mrco_2d"};
};
class mmgg : car
{
    displayName = "MMG Gunner";
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    primaryWeapon[] = {"LMG_Zafir_F"};
    scope[] = {"optic_arco_blk_f"};
    magazines[] =
    {
        LIST_4("ACE_150Rnd_762x54_Box_yellow"),
        LIST_2("Chemlight_blue"),
        LIST_2("MiniGrenade"),
		"SmokeShell",
		"SmokeShellGreen"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo","B_Carryall_oli","B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_4("ACE_150Rnd_762x54_Box_yellow"),
		"ACE_Tripod"
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] =
    {
        LIST_3("ACE_150Rnd_762x54_Box_yellow"),
		LIST_10("ACE_Sandbag_empty")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"I_G_HMG_02_weapon_F"};
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"I_G_HMG_02_weapon_F"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backPack[] = {"I_C_HMG_02_support_F"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class hmgg_csw : baseMan
{
    displayName = "HMG Gunner (CSW)";
    vest[] = {"V_BandollierB_blk","V_BandollierB_rgr","V_BandollierB_oli"};
	sidearmWeapon[] = {"hgun_P07_F"};
    secondaryWeapon[] = {"ace_compat_rhs_usf3_m2_carry"};
	magazines[] = {
		LIST_3("16Rnd_9x21_Mag"),
		LIST_2("Chemlight_blue"),
		"SmokeShell",
	};
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_1("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_tourniquet")
    };
};
class hmgag_csw : smg
{
    displayName = "HMG Assistant Gunner (CSW)";
	secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
	backPack[] = {"B_Carryall_mcamo","B_Carryall_oli","B_Carryall_khk"};
	backpackItems[] = {
        LIST_1("ace_csw_100Rnd_127x99_mag_yellow")
    };
    items[] += {
        LIST_6("ACE_Sandbag_empty")
    };
};
class hmgac_csw : car
{
    displayName = "HMG Ammo Carrier (CSW)";
	backpack[] = {"B_Bergen_dgtl_F"};
    backpackItems[] = {
        LIST_3("ace_csw_100Rnd_127x99_mag"),
        LIST_2("ace_csw_100Rnd_127x99_mag_yellow"),
    };
    items[] += {
        LIST_4("ACE_Sandbag_empty")
    };
};
class matg : car
{
    displayName = "MAT Gunner (RPG-7)";
    secondaryWeapon[] = {"launch_RPG7_F"};
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    magazines[] +=
    {
        LIST_5("RPG7_F")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo","B_Carryall_oli","B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_6("RPG7_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular"
    };
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    backpackItems[] =
    {
        LIST_6("RPG7_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner (MAAWS)";
    secondaryWeapon[] = {"launch_MRAWS_olive_rail_F"};
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    magazines[] +=
    {
        LIST_3("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    magazines[] +=
    {
        LIST_3("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    magazines[] +=
    {
        LIST_3("MRAWS_HEAT_F"),
		"MRAWS_HE_F"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular"
    };
};
class hatg_csw : hmgg_csw
{
displayName = "HAT Gunner (CSW, SPG-9M)";
secondaryWeapon[] = {"ace_compat_rhs_afrf3_spg9m_carry"};
};
class hatac_csw : hmgac_csw
{
displayName = "HAT Ammo Carrier (CSW, SPG-9M)"
backpackItems[] = {
	LIST_3("ace_compat_rhs_afrf3_mag_OG9VM"),
	LIST_3("ace_compat_rhs_afrf3_mag_PG9VNT")
};
};
class hatag_csw : hmgag_csw
{
displayName = "HAT Assistant Gunner (CSW, SPG-9M)";
secondaryWeapon[] = {"ace_csw_spg9CarryTripod"};
backpackItems[] = {
	LIST_2("ace_compat_rhs_afrf3_mag_PG9VNT"),
	"ace_compat_rhs_afrf3_mag_OG9VM"
};
};
class mtrg : car
{
    displayName = "Mortar Gunner (Legacy)";
    backPack[] = {"I_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"I_Mortar_01_weapon_F"};
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (Legacy)";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrg_csw : car
{
    displayName = "Mortar Gunner (CSW)";
	vest[] = {"V_BandollierB_blk","V_BandollierB_rgr","V_BandollierB_oli"};
	primaryWeapon[] = {};
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
	sidearmWeapon[] = {"hgun_ACPC2_F"};
	magazines[] = {
		LIST_5("9Rnd_45ACP_Mag"),
		LIST_2("Chemlight_blue"),
		"SmokeShell",
		"SmokeShellGreen"
	};
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrag_csw : car
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
	backpackItems[] += {LIST_4("ACE_1Rnd_82mm_Mo_HE")};
};
class mtrac_csw : car
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_dgtl_F"};
    backpackItems[] = {
        LIST_4("ACE_1Rnd_82mm_Mo_HE"),
        LIST_3("ACE_1Rnd_82mm_Mo_Smoke"),
		LIST_2("ACE_1Rnd_82mm_Mo_Illum")
    };
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_I_Titan_F"};
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    magazines[] +=
    {
        LIST_2("Titan_AA")
    };
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular"
    };
    backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    backpackItems[] =
    {
        LIST_2("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sharpshooter (M21)";
    primaryWeapon[] = {"hlc_rifle_M21_Rail"};
    scope[] = {"optic_khs_old"};
    bipod[] = {"bipod_03_f_oli"};
    magazines[] =
    {
        LIST_5("20Rnd_762x51_Mag"),
		LIST_1("ACE_20Rnd_762x51_Mag_tracer_yellow"),
		LIST_2("Chemlight_blue"),
		"SmokeShell",
		"SmokeShellGreen"
    };
    items[] += {
		"ACE_MapTools",
		"ACE_RangeCard"
	};
};
class sp : g
{
    displayName = "Spotter";
	linkedItems[] +=
    {
        "Rangefinder"
    };
	items[] += {"ACE_Tripod","ACE_SpottingScope"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
	silencer[] = {};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	silencer[] = {};
	backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	silencer[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
	silencer[] = {};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
	silencer[] = {};
	backPack[] = {"B_TacticalPack_blk","B_TacticalPack_oli","B_TacticalPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class jp : pp
{
	displayName = "Jet Pilot (unused)";
};
class pc : smg
{
    displayName = "Helicopter Crew";
	silencer[] = {};
    headgear[] = {"H_Cap_headphones"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (IEDs)";
    backPack[] = {"B_Carryall_cbr","B_Carryall_oli"};
    items[] += {
        "MineDetector",
        "ACE_DefusalKit",
		"ACE_Cellphone",
        "IEDLandBig_Remote_Mag",
		"IEDUrbanBig_Remote_Mag",
		LIST_1("IEDLandSmall_Remote_Mag"),
		LIST_2("IEDUrbanSmall_Remote_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    backPack[] = {"B_Carryall_cbr","B_Carryall_oli"};
    items[] += {
        "MineDetector",
        "ACE_DefusalKit",
		LIST_4("APERSTripMine_Wire_Mag"),
		LIST_2("ATMine_Range_Mag"),
		LIST_6("APERSMine_Range_Mag")		
    };
};
class UAV : car
{
    displayName = "UAV Operator (no drone)";
    linkedItems[] += {"B_UavTerminal"};
};