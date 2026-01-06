class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "usm_bdum65_ubn"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "H_Watchcap_blk"
    };
    goggles[] = {};
    hmd[] = {
        "usm_nvg_gigloves",
        "usm_nvg_giglovesscarf",
        "usm_nvg_giglovesscarf2"
    };
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

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman (light)";
    headgear[] = {"H_PASGT_basic_white_F"};
    vest[] = {"V_PlateCarrier1_blk"};
    primaryWeapon[] = {"arifle_XMS_Gray_lxWS"};
    attachment[] = {"saber_light_lxWS"};
    sidearmWeapon[] = {"hgun_P07_blk_F"};
    magazines[] =
    {
        LIST_8("ACE_30Rnd_556x45_Stanag_M995_AP_mag"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
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
class r : car
{
    displayName = "Rifleman";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    magazines[] +=
    {
        LIST_4("ACE_30Rnd_556x45_Stanag_M995_AP_mag"),
        LIST_2("HandGrenade")
    };
};
class g : car
{
    displayName = "Grenadier";
    vest[] = {"V_PlateCarrierLite_black_noFlag_RF"};
    primaryWeapon[] = {"arifle_XMS_GL_Gray_lxWS"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
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
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_02_F"};
    magazines[] =
    {
        LIST_9("30Rnd_9x21_Green_Mag"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    linkedItems[] += {
        "Binocular",
        "ItemGPS"
    };
};
class sl : car
{
    displayName = "Squad Leader";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_Beret_blk"};
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {"B_RadioBag_01_black_F"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"LMG_Mk200_black_F"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
    magazines[] =
    {
        LIST_3("ACE_200Rnd_65x39_cased_Box_green"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("ACE_200Rnd_65x39_cased_Box_green"),
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : car
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"arifle_SPAR_02_blk_F"};
    scope[] = {"rhsusf_acc_su230a_mrds"};
    bipod[] = {"bipod_01_F_blk"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {"optic_Arco_AK_blk_F"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_3("ACE_130Rnd_338_Mag_green"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("ACE_130Rnd_338_Mag_green")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("ACE_130Rnd_338_Mag_green"),
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgg_csw : smg
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_nsv_carry"};
};
class hmgag_csw : car
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class hmgac_csw : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        LIST_6("ace_csw_50Rnd_127x108_mag"),
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("MRAWS_HEAT_F")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("MRAWS_HEAT_F")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_4("MRAWS_HEAT_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"launch_O_Vorona_green_F"};
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_2("Vorona_HEAT")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_2("Vorona_HEAT")
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("Vorona_HEAT")
    };
};
class hatg_csw : car
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_tow_carry"};
};
class hatag_csw : car
{
    displayName = "HAT Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class hatac_csw : car
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        LIST_2("ace_compat_rhs_usf3_mag_TOW2A"),
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner (Legacy)";
    backPack[] = {"B_D_CTRG_CommandoMortar_weapon_RF"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (Legacy)";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"B_D_CTRG_CommandoMortar_weapon_RF"};
};
class mtrg_csw : car
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
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
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class mtrac_csw : car
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        LIST_8("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] =
    {
        LIST_3("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"gm_dk_army_uniform_soldier_84_win"};
    vest[] = {"gm_dk_army_vest_m00_win"};
    headgear[] = {"gm_ge_headgear_m92_cover_win"};
    goggles[] = {"gm_xx_facewear_scarf_01_wht"};
    hmd[] = {"usm_nvg_gigloves"};
    primaryWeapon[] = {"srifle_LRR_F"};
    scope[] = {"optic_Nightstalker"};
    magazines[] =
    {
        LIST_10("ACE_7Rnd_408_305gr_Mag"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {};
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    uniform[] = {"gm_dk_army_uniform_soldier_84_win"};
    vest[] = {"gm_dk_army_vest_m00_win"};
    headgear[] = {"gm_ge_headgear_m92_cover_win"};
    goggles[] = {"gm_xx_facewear_scarf_01_wht"};
    hmd[] = {"usm_nvg_gigloves"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    primaryWeapon[] = {"arifle_SPAR_03_blk_F"};
    scope[] = {"rhsusf_acc_su230a_mrds"};
    silencer[] = {"ACE_muzzle_mzls_B"};
    bipod[] = {"bipod_01_F_blk"};
    attachment[] = {"ACE_DBAL_A3_Green"};
    magazines[] =
    {
        LIST_10("ACE_20Rnd_762x51_Mk316_Mod_0_Mag"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    traits[] += {"engineer"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_lxWS_SFIA_pilot_O"};
    vest[] = {"gm_ge_army_vest_pilot_oli"};
    headgear[] = {"gm_gc_headgear_zsh3_wht"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    magazines[] =
    {
        LIST_4("30Rnd_9x21_Green_Mag"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief (Repair)";
    traits[] += {"engineer"};
    backpack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"gm_ge_army_backpack_90_cover_win"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_4("APERSMine_Range_Mag"),
        LIST_1("ATMine_Range_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class UAV_light : car
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"ION_UAV_01_backpack_lxWS"};
};