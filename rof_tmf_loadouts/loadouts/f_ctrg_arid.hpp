class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_B_CTRG_1",
        "U_B_CTRG_2",
        "U_B_CTRG_3"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "H_Cap_khaki_specops_UK",
        "H_Watchcap_blk",
        "H_Bandanna_cbr",
        "H_Bandanna_khk_hs",
        "H_Watchcap_cbr",
        "H_Watchcap_khk",
        "H_Booniehat_khk_hs"
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
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_2("ACE_CableTie"),
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
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] =
    {
        "H_HelmetB_light_snakeskin",
        "H_HelmetB_light_grass",
        "H_HelmetB_light"
    };
    hmd[] = {"ACE_NVG_Gen4"};
    vest[] = {"V_PlateCarrierH_CTRG"};
    backpack[] = {"B_AssaultPack_rgr"};
    primaryWeapon[] =
    {
        "arifle_MX_Black_F"
    };
    scope[] = {"optic_aco"};
    attachment[] = {"acc_pointer_ir"};
    silencer[] =
    {
        "muzzle_snds_h"
    };
    sidearmWeapon[] = {"hgun_P07_f"};
    magazines[] =
    {
        LIST_10("30Rnd_65x39_caseless_black_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    primaryWeapon[] =
    {
        "arifle_SPAR_02_snd_F",
        "arifle_SPAR_02_blk_F"
    };
    silencer[] =
    {
        "muzzle_snds_m",
        "muzzle_snds_m_snd_f"
    };
    magazines[] =
    {
        LIST_10("30Rnd_556x45_Stanag_red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_Black_F"};
    scope[] = {"optic_hamr"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_black_mag"),
        LIST_1("30Rnd_65x39_caseless_black_mag_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_4("3Rnd_HE_Grenade_shell"),
        LIST_2("3Rnd_Smoke_Grenade_shell"),
        LIST_1("3Rnd_UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] =
    {
        "arifle_MXC_Black_F"
    };
    vest[] = {"V_PlateCarrierL_CTRG"};
    headgear[] =
    {
        "H_Cap_khaki_specops_UK",
        "H_Watchcap_blk",
        "H_Bandanna_cbr",
        "H_Bandanna_khk_hs",
        "H_Watchcap_cbr",
        "H_Watchcap_khk",
        "H_Booniehat_khk_hs"
    };
};
class m : r 
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
    headgear[] =
    {
        "H_Cap_khaki_specops_UK",
        "H_Watchcap_blk",
        "H_Bandanna_cbr",
        "H_Bandanna_khk_hs",
        "H_Watchcap_cbr",
        "H_Watchcap_khk",
        "H_Booniehat_khk_hs"
    };
    primaryWeapon[] = 
    {
        "SMG_03C_TR_khaki",
        "SMG_03C_TR_black"
    };
    silencer[] = {"muzzle_snds_570"};
    magazines[] =
    {
        LIST_7("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"arifle_SPAR_01_GL_snd_F"};
    scope[] = {"optic_erco_snd_f"};
    silencer[] =
    {
        "muzzle_snds_m",
        "muzzle_snds_m_snd_f"
    };
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag_red"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("B_IR_Grenade"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell"),
        LIST_1("1Rnd_SmokeGreen_Grenade_Shell"),
        LIST_1("UGL_FlareCIR_F"),
        LIST_3("16Rnd_9x21_red_Mag")
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
    primaryWeapon[] = {"arifle_MX_Black_F"};
    scope[] = {"optic_erco_blk_f"};
    silencer[] = {"muzzle_snds_h"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_black_mag"),
        LIST_2("30Rnd_65x39_caseless_black_mag_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("B_IR_Grenade"),
        LIST_3("11Rnd_45ACP_Mag")
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
class rto: r
{
    displayName = "Radio Operator";
    //backPack[] = {"B_RadioBag_01_eaf_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"UK_beret"};
};
class fac : car
{
    displayName = "Forward Air Controller";
    //backPack[] = {"B_RadioBag_01_eaf_F"};
    primaryWeapon[] =
    {
        "arifle_SPAR_01_GL_snd_F",
        "arifle_SPAR_01_GL_blk_F"
    };
    scope[] = {};
    silencer[] =
    {
        "muzzle_snds_m",
        "muzzle_snds_m_snd_f"
    };
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag_red"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("ACE_M84"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"arifle_SPAR_02_snd_F"};
    scope[] = {"optic_erco_snd_f"};
    bipod[] = {"bipod_01_f_snd"};
    silencer[] = {"muzzle_snds_m_snd_f"};
    magazines[] =
    {
        LIST_3("150Rnd_556x45_Drum_Sand_Mag_F"),
        LIST_1("150Rnd_556x45_Drum_Sand_Mag_Tracer_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("150Rnd_556x45_Drum_Sand_Mag_F"),
        LIST_1("150Rnd_556x45_Drum_Sand_Mag_Tracer_F")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = 
    {
        "arifle_SPAR_03_snd_F",
        "arifle_SPAR_03_blk_F"
    };
    scope[] = {"optic_sos"};
    silencer[] = {
        "muzzle_snds_b",
        "muzzle_snds_b_snd_f"
    };
    bipod[] = {
        "bipod_01_f_snd",
        "bipod_01_f_blk"
    };
    magazines[] =
    {
        LIST_8("20Rnd_762x51_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    primaryWeapon[] = {"MMG_02_sand_F"};
    scope[] = {"optic_erco_snd_f"};
    bipod[] = {"bipod_01_f_snd"};
    silencer[] = 
    {
        "muzzle_snds_338_sand",
        "muzzle_snds_338_black"
    };
    magazines[] =
    {
        LIST_3("130Rnd_338_Mag"),
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
    backPack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_4("130Rnd_338_Mag"),
        LIST_1("ACE_Tripod")
    };
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
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_weapon_F"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
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
    secondaryWeapon[] = {"launch_MRAWS_sand_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_cbr"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backPack[] = {"B_Kitbag_cbr"};
    secondaryWeapon[] = {"launch_B_Titan_short_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_Kitbag_cbr"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
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
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_cbr"};
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
    backPack[] = {"B_Carryall_cbr"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper [DLC]";
    uniform[] = {"U_B_FullGhillie_ard"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_DMR_02_sniper_F"};
    scope[] = {"optic_ams_snd"};
    attachment[] = {"acc_pointer_ir"};
    silencer[] = {"muzzle_snds_338_sand"};
    bipod[] = {"bipod_01_f_snd"};
    magazines[] =
    {
        LIST_8("10Rnd_338_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class sp : sn
{
    displayName = "Spotter";
    headgear[] = {};
    primaryWeapon[] = {"arifle_SPAR_03_snd_F"};
    scope[] = {"optic_erco_snd_f"};
    bipod[] = {"bipod_01_f_snd"};
    silencer[] = {"muzzle_snds_b_snd_f"};
    magazines[] =
    {
        LIST_8("ACE_20Rnd_762x51_Mag_Tracer_Dim"),
        LIST_2("ACE_20Rnd_762x51_Mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
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
    backpackItems[] =
    {
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_HelmetCrew_B"};
    silencer[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    silencer[] = {};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    silencer[] = {};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    silencer[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    backpack[] = {"B_AssaultPack_rgr"};
    silencer[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    silencer[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
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
    backPack[] = {"B_Carryall_cbr"};
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
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backPack[] = {"B_Carryall_cbr"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_B"};
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("30Rnd_45ACP_Mag_SMG_01"),
        "SmokeShell",
        "SmokeShellBlue",
        "Chemlight_Green"
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
    };
};
class UAV : r_light
{
    displayName = "UAV Operator [BLUFOR]";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};