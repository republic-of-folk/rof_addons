// in case of fire, tell Bear


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "rhs_uniform_g3_blk"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "H_Bandanna_gry",
        "H_Watchcap_blk",
        "H_Cap_blk"
    };
    goggles[] = {
        "rhs_ess_black"
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
        "ItemWatch",
        "ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhssaf_helmet_m97_black_nocamo"};
    vest[] = {"V_TacVestIR_blk"};
    backpack[] = {"B_ViperLightHarness_blk_F"};
    primaryWeapon[] = {"SMG_03C_Black"};
    magazines[] =
    {
        LIST_8("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("ACE_Chemlight_Orange"),
        LIST_1("rhs_mag_zarya2")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_3("ACE_CableTie")
    };
};
class r_light : r
{
};
class g : r_light
{
    displayName = "Grenadier";
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] += {
        LIST_8("1Rnd_Smoke_Grenade_shell"),
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_shell"),
        LIST_4("UGL_FlareWhite_F"),
        LIST_2("UGL_FlareRed_F"),
        LIST_2("UGL_FlareGreen_F")
    };
};
class car : r_light
{
    displayName = "Carabinier";
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
};
class smg : r
{
    displayName = "Submachinegunner";
};
class ftl : r
{
    displayName = "Fireteam Leader";
};
class sl : g
{
    displayName = "Squad Leader";
    headgear[] = {"mgsr_beret"};
    goggles[] = {"G_Aviator"};
    backPack[] = {"B_ViperHarness_blk_F"};
    magazines[] += {
        LIST_2("ACE_HuntIR_M203")
    };
    linkedItems[] += {
        "Rangefinder"
    };
    items[] += {
        "ACE_HuntIR_monitor"
    };
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_black_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : g
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_black_F"};
    headgear[] = {"mgsr_beret"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {
        "Rangefinder"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman (M27 IAR)";
    primaryWeapon[] = {"rhs_weap_hk416d145"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    silencer[] = {"ACE_muzzle_mzls_L"};
    magazines[] =
    {
        LIST_3("rhs_mag_100Rnd_556x45_M855A1_cmag_mixed"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("ACE_Chemlight_Orange")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_sr25_ec"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_10("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "SAW Gunner";
};
class mmgac : r
{
    displayName = "SAW Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
};
class mmgag : aar
{
    displayName = "SAW Assistant Gunner";
};
class hmgg : r_light
{
    displayName = "HMG Gunner [defunct]";

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier [defunct]";
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner [defunct]";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    backpack[] = {"B_ViperHarness_blk_F"};
    secondaryWeapon[] = {"rhs_weap_smaw"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"B_ViperHarness_blk_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP"
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backpack[] = {"B_ViperHarness_blk_F"};
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    magazines[] += {
        "rhs_fgm148_magazine_AT"
    };
    // code = "_this addItemToBackpack ""rhs_fgm148_magazine_AT"";";
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_ViperHarness_blk_F"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_ViperHarness_blk_F"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner [defunct]";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier [defunct]";
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner [defunct]";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r_light
{
    displayName = "Sniper";
    goggles[] = {"immersion_cigs_cigar0"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    sidearmWeapon[] = {"rhs_weap_6p53"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    magazines[] =
    {
        LIST_7("rhs_5Rnd_338lapua_t5000"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("rhs_18rnd_9x21mm_7N28"),
        LIST_2("ACE_Chemlight_Orange")
    };
    items[] +=
    {
        "ACE_MapTools"
    };
};
class sp : r
{
    displayName = "Spotter";
    linkedItems[] +=
    {
        "Rangefinder"
    };
    items[] +=
    {
        "ACE_MapTools"
    };
    backpackItems[] += {
        "ACE_SpottingScope",
        "ACE_Tripod"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhsusf_cvc_green_ess"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"rhsusf_cvc_green_ess"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    attachment[] = {};
    bipod[] = {};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    attachment[] = {};
    bipod[] = {};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    backpackItems[] = {"ToolKit"};
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
    backpack[] = {"B_ViperHarness_blk_F"};
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
    backpack[] = {"B_ViperHarness_blk_F"};
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
    displayName = "UAV Operator (no drone) [BLUFOR]";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator [defunct]";
};