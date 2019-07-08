class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_O_V_Soldier_Viper_F"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
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
    items[] =
	{
		LIST_10("ACE_fieldDressing"),
		LIST_3("ACE_morphine"),
		LIST_1("ACE_epinephrine"),
		LIST_2("ACE_CableTie"),
		LIST_1("ACE_Flashlight_XL50"),
		LIST_1("ACE_Earplugs"),
		LIST_1("ACE_IR_Strobe_Item")
	};
    // These are added directly into their respective slots
    linkedItems[] =
	{
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
		"ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
	headgear[] = {"H_HelmetO_ViperSP_ghex_F"};
    vest[] = {};
    backpack[] = {"B_ViperHarness_ghex_F"};
    primaryWeapon[] = {"arifle_ARX_ghex_F"};
    scope[] = {"optic_arco_ghex_f"};
	attachment[] = {"acc_pointer_ir"};
	silencer[] = {"muzzle_snds_65_ti_ghex_f"};
	sidearmWeapon[] = {"hgun_Rook40_F"};
	sidearmAttachments[] = {"muzzle_snds_l"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_green"),
		LIST_4("10Rnd_50BW_Mag_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
	backpack[] = {"B_ViperLightHarness_ghex_F"};
	primaryWeapon[] = {"arifle_CTAR_ghex_F"};
	scope[] = {"optic_aco_grn"};
	silencer[] = {"muzzle_snds_58_ghex_f"};
	magazines[] =
	{
        LIST_10("30Rnd_580x42_Mag_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_Mag")
	};
};
class g : r_light
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_CTAR_GL_ghex_F"};
	backpack[] = {"B_ViperHarness_ghex_F"};
    magazines[] =
    {
        LIST_9("30Rnd_580x42_Mag_F"),
        LIST_1("30Rnd_580x42_Mag_Tracer_F"),
        LIST_2("HandGrenade"),
		LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
        LIST_10("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
		LIST_1("UGL_FlareCIR_F"),
		LIST_2("ACE_HuntIR_M203"),
		LIST_3("16Rnd_9x21_Mag")
    };
	items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
	backpack[] = {"B_ViperLightHarness_ghex_F"};
};
class m : r_light
{
    displayName = "Medic";
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
		LIST_15("ACE_fieldDressing"),
		LIST_10("ACE_morphine"),
		LIST_10("ACE_epinephrine"),
		LIST_4("ACE_bloodIV_250"),
		LIST_2("ACE_bloodIV_500"),
		LIST_1("ACE_bloodIV")
	};
    items[] += {LIST_2("SmokeShell")};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_TR_hex"};
	scope[] = {"optic_aco_grn_smg"};
	silencer[] = {"muzzle_snds_570"};
    magazines[] =
    {
        LIST_7("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
		LIST_1("SmokeShellGreen"),
		LIST_1("SmokeShellOrange"),
		LIST_1("SmokeShellBlue"),
		LIST_1("B_IR_Grenade")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
	items[] += {"ACE_MapTools"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"hgun_Pistol_heavy_02_F"};
	sidearmAttachments[] = {"optic_yorris","acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_mag"),
		LIST_1("30Rnd_65x39_caseless_mag_tracer"),
		LIST_4("10Rnd_50BW_Mag_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_1("SmokeShellGreen"),
		LIST_1("SmokeShellOrange"),
		LIST_1("SmokeShellBlue"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_1("B_IR_Grenade"),
		LIST_4("6Rnd_45ACP_Cylinder")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_ghex_F"};
	hmd[] = {"O_NVGoggles_ghex_F"};
};
class fac : g
{
    displayName = "Forward Air Controller";
	scope[] = {};
    magazines[] =
    {
        LIST_8("30Rnd_580x42_Mag_F"),
        LIST_2("30Rnd_580x42_Mag_Tracer_F"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_1("ACE_M84"),
        LIST_3("1Rnd_HE_Grenade_shell"),
		LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
		LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
		LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
		LIST_2("1Rnd_SmokeYellow_Grenade_Shell"),
		LIST_1("UGL_FlareCIR_F"),
		LIST_3("16Rnd_9x21_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator_02",
        "ItemGPS"
    };
	items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"arifle_CTARS_ghex_F"};
	scope[] = {"optic_aco_grn"};
	silencer[] = {"muzzle_snds_58_ghex_f"};
    magazines[] =
    {
        LIST_5("100Rnd_580x42_Mag_F"),
		LIST_1("100Rnd_580x42_Mag_Tracer_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class aar : r_light
{
    displayName = "Assistant Automatic Rifleman";
	backpack[] = {"B_ViperHarness_ghex_F"};
    backpackItems[] =
    {
        LIST_5("100Rnd_580x42_Mag_F"),
		LIST_1("100Rnd_580x42_Mag_Tracer_F")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_RPG32_ghex_F"};
	vest[] = {"V_BandollierB_ghex_f"};
	magazines[] =
	{
		LIST_6("30Rnd_65x39_caseless_green"),
		LIST_3("16Rnd_9x21_Mag"),
		LIST_3("RPG32_F"),
		LIST_3("10Rnd_50BW_Mag_F"),
		LIST_2("MiniGrenade"),
		"SmokeShell",
		"SmokeShellRed",
		LIST_2("Chemlight_Red")
	};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"optic_dms_ghex_f"};
	bipod[] = {"bipod_02_f_blk"};
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
	vest[] = {"V_HarnessO_ghex_f"};
    primaryWeapon[] = {"MMG_01_tan_F"};
    scope[] = {"optic_tws_mg"};
    bipod[] = {"bipod_02_f_blk"};
	silencer[] = {"muzzle_snds_93mmg"};
    magazines[] =
    {
        LIST_4("150Rnd_93x64_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellGreen"),
		LIST_2("Chemlight_Green"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_red_Mag")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
	vest[] = {"V_HarnessO_brn"};
    backPack[] = {"B_ViperHarness_ghex_F"};
    backpackItems[] =
    {
        LIST_3("150Rnd_93x64_Mag"),
		LIST_1("ACE_Tripod")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	vest[] = {"V_HarnessO_brn"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_ViperHarness_ghex_F"};
    backpackItems[] =
    {
        LIST_3("150Rnd_93x64_Mag"),
		LIST_1("ACE_SpottingScope")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"O_HMG_01_weapon_F"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"O_HMG_01_weapon_F"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"O_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_O_Titan_short_ghex_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"B_ViperHarness_ghex_F"};
    magazines[] +=
    {
        LIST_2("Titan_AT"),
		LIST_1("Titan_AP")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"B_ViperHarness_ghex_F"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
		LIST_1("Titan_AP")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
	vest[] = {"V_HarnessO_ghex_f"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_ViperHarness_ghex_F"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
		LIST_1("Titan_AP")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backPack[] = {"B_ViperHarness_ghex_F"};
	vest[] = {"V_HarnessO_brn"};
	secondaryWeapon[] = {"launch_O_Vorona_green_F"};
	magazines[] += {LIST_2("Vorona_HEAT")};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
	vest[] = {"V_HarnessO_brn"};
    backPack[] = {"B_ViperHarness_ghex_F"};
	backpackItems[] =
	{
		LIST_2("Vorona_HEAT"),
		LIST_1("Vorona_HE")
	};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
	vest[] = {"V_HarnessO_brn"};
    backPack[] = {"B_ViperHarness_ghex_F"};
	backpackItems[] =
	{
		LIST_2("Vorona_HEAT"),
		LIST_1("Vorona_HE")
	};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"O_Mortar_01_weapon_F"};
	vest[] = {"V_HarnessO_ghex_f"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"O_Mortar_01_weapon_F"};
	vest[] = {"V_HarnessO_ghex_f"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"V_HarnessO_ghex_f"};
    backPack[] = {"O_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_O_Titan_ghex_F"};
	secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_ViperHarness_ghex_F"};
	vest[] = {"V_HarnessO_ghex_f"};
    magazines[] += {"Titan_AA"};
	backpackItems[] = {"Titan_AA"};
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_ViperHarness_ghex_F"};
	vest[] = {"V_HarnessO_ghex_f"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper [DLC]";
    uniform[] = {"U_O_T_FullGhillie_tna_F"};
    headgear[] = {};
    primaryWeapon[] = {"srifle_DMR_05_blk_F"};
    scope[] = {"optic_khs_blk"};
	attachment[] = {"acc_pointer_ir"};
	silencer[] = {"muzzle_snds_93mmg"};
    bipod[] = {"bipod_02_f_blk"};
    magazines[] =
    {
        LIST_8("10Rnd_93x64_DMR_05_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
		LIST_1("SmokeShellRed"),
		LIST_2("Chemlight_Red"),
		LIST_2("ACE_M84"),
		LIST_3("16Rnd_9x21_Mag")
    };
};
class sp : r
{
    displayName = "Spotter";
    uniform[] = {"U_O_T_FullGhillie_tna_F"};
	headgear[] = {};
	scope[] = {"optic_arco_ghex_f"};
	bipod[] = {"bipod_02_f_blk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
	backpackItems[] =
	{
		"ACE_Tripod",
		"ACE_SpottingScope"
	};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_HelmetCrew_O_ghex_F"};
	hmd[] = {"O_NVGoggles_ghex_F"};
	silencer[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	silencer[] = {};
    backpack[] = {"B_AssaultPack_rgr"};
    vest[] = {"V_BandollierB_cbr"};
    headgear[] = {"H_HelmetCrew_O_ghex_F"};
	hmd[] = {"O_NVGoggles_ghex_F"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
	silencer[] = {};
	linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_O_ghex_F"};
	hmd[] = {"O_NVGoggles_ghex_F"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
 	silencer[] = {};
	headgear[] = {"H_PilotHelmetHeli_O"};
	hmd[] = {"O_NVGoggles_ghex_F"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
	silencer[] = {};
    headgear[] = {"H_CrewHelmetHeli_O"};
	hmd[] = {"O_NVGoggles_ghex_F"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
	silencer[] = {};
    headgear[] = {"H_CrewHelmetHeli_O"};
	hmd[] = {"O_NVGoggles_ghex_F"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backPack[] = {"B_Carryall_ghex_F"};
    vest[] = {"V_BandollierB_ghex_f"};
    Items[] += {
        "MineDetector",
        "ACE_DefusalKit",
		"ACE_M26_Clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        LIST_1("MineDetector"),
        LIST_1("ACE_DefusalKit"),
        LIST_2("ATMine_Range_Mag"),
		LIST_2("APERSMineDispenser_Mag")
    };
    backPack[] = {"B_Bergen_dgtl_F"};
    vest[] = {"V_HarnessO_ghex_f"};
};
class jp : pp
{
	displayName = "Jet Pilot";
	headgear[] = {"H_PilotHelmetFighter_O"};
	hmd[] = {};
	uniform[] = {"U_O_PilotCoveralls"};
	vest[] = {"V_BandollierB_ghex_f"};
	backpack[] = {"B_Parachute"};
	primaryWeapon[] = {"SMG_02_F"};
	scope[] = {"optic_holosight_smg_blk_f"};
	sidearmWeapon[] = {};
	magazines[] =
	{
		LIST_5("30Rnd_9x21_Mag_SMG_02"),
		"SmokeShell",
		"SmokeShellPurple",
		"Chemlight_Red"
	};
	items[] = {
		LIST_10("ACE_fieldDressing"),
		LIST_3("ACE_morphine"),
		LIST_1("ACE_epinephrine"),
		LIST_1("ACE_Flashlight_XL50")
	};
};
class UAV : r_light
{
    displayName = "UAV Operator [OPFOR]";
	vest[] = {"V_HarnessO_ghex_f"};
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_UavTerminal"};
};