class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_lxWS_ION_Casual1",
        "U_lxWS_ION_Casual2",
        "U_lxWS_ION_Casual3",
        "U_lxWS_ION_Casual4",
        "U_lxWS_ION_Casual5",
        "U_lxWS_ION_Casual6"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "H_Cap_blk_ION",
        "H_Cap_headphones_ion_lxws",
        "lxWS_H_CapB_rvs_blk_ION"
    };
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
    items[] =
    {
        LIST_4("ACE_fieldDressing"),
        LIST_1("ACE_morphine")
    };
    // These are added directly into their respective slots
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
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
    displayName = "Rifleman";
    vest[] = {"V_PlateCarrier1_blk"};
    
    primaryWeapon[] = {"arifle_XMS_Base_lxWS"};
    scope[] = {"optic_aco"};
    attachment[] = {"acc_pointer_ir"};
    
    sidearmWeapon[] = {"hgun_Glock19_RF"};
    sidearmAttachments[] = {};
    
    magazines[] =
    {
        LIST_8("ACE_30Rnd_556x45_Stanag_Mk318_mag"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("17Rnd_9x19_yellow_Mag_RF")
    };

    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint")
    };
};
class r : car
{
    displayName = "Assaultman";
    backpack[] = {"B_AssaultPack_blk"};
    primaryWeapon[] = {"arifle_XMS_Shot_lxWS"};
    magazines[] +=
    {
        LIST_3("6Rnd_12Gauge_Pellets"),
        LIST_1("6Rnd_12Gauge_Slug"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_TR_black"};
    attachment[] = {"saber_light_ir_lxWS"};
    scope[] = {"optic_Aco_smg"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("50Rnd_570x28_SMG_03"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Green"),
        LIST_2("Chemlight_Red")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_XMS_GL_lxWS"};
    magazines[] +=
    {
        LIST_12("rhs_mag_M441_HE"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_4("1Rnd_RC40_HE_shell_RF")
    };
    linkedItems[] += {"B_UavTerminal"};
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
    items[] += {LIST_2("SmokeShell")};
};
class ftl : car
{
    displayName = "Fireteam Leader";
    scope[] = {"optic_hamr"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] = {
        LIST_8("ACE_30Rnd_556x45_Stanag_Mk318_mag"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_4("rhs_mag_M441_HE"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_2("ACE_40mm_Flare_green"),
        LIST_4("1Rnd_RC40_shell_RF")
    };
    linkedItems[] +=
    {
        "Binocular",
        "B_UavTerminal"
    };
    items[] += {"ACE_MapTools"};
    backpack[] = {"B_AssaultPack_blk"};
};
class sl : car
{
    displayName = "Squad Leader";
    scope[] = {"optic_hamr"};
    linkedItems[] +=
    {
        "Rangefinder",
        "B_UavTerminal"
    };
    items[] += {"ACE_MapTools"};
};
class rto: car
{
    displayName = "Radio Operator";
    backPack[] = {"B_RadioBag_01_black_F"};
};
class co : baseMan
{
    displayName = "Platoon Leader (VIP)";
    headgear[] = {};
    uniform[] = {"U_C_FormalSuit_01_black_F"};
    vest[] = {"gm_ge_bgs_vest_type18_blk"};
    primaryWeapon[] = {};
    secondaryWeapon[] = {};
    sidearmWeapon[] = {
        "hgun_DEagle_classic_RF",
    };
    sidearmAttachments[] = {};
    magazines[] = {
        LIST_2("7Rnd_50AE_Mag_RF")
    };
};
class fac : car
{
    displayName = "Forward Air Controller";
    backPack[] = {"B_RadioBag_01_black_F"};
    primaryWeapon[] = {"arifle_XMS_GL_lxWS"};
    magazines[] +=
    {
        LIST_2("3Rnd_Smoke_Grenade_shell"),
        LIST_1("3Rnd_UGL_FlareCIR_F")
    };
    linkedItems[] +=
    {
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"LMG_Mk200_black_F"};
    scope[] = {"optic_Hamr"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_4("ACE_200Rnd_65x39_cased_Box_green"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_3("17Rnd_9x19_yellow_Mag_RF")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_4("ACE_200Rnd_65x39_cased_Box_green"),
        LIST_1("200Rnd_65x39_cased_Box_Tracer"),
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_PSRL1_black_RF"};
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] = {
        LIST_3("PSRL1_AT_RF"),
        LIST_3("PSRL1_FRAG_RF")
    };
};
class dm : car
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_EBR_blk_lxWS"};
    scope[] = {"optic_hamr"};
    silencer[] = {"muzzle_snds_M"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_7("20Rnd_762x51_Mag_blk_lxWS"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("17Rnd_9x19_yellow_Mag_RF")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {"optic_hamr"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_3("17Rnd_9x19_yellow_Mag_RF")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
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
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    vest[] = {"V_Chestrig_rgr"};
    backPack[] = {"I_E_HMG_02_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"I_E_HMG_02_weapon_F"};
};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner";
    backPack[] = {"I_E_HMG_02_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_PSRL1_PWS_black_RF"};
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_3("PSRL1_AT_RF"),
        LIST_2("PSRL1_HEAT_RF"),
        LIST_2("PSRL1_FRAG_RF")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_2("PSRL1_HEAT_RF"),
        LIST_3("PSRL1_AT_RF"),
        LIST_1("PSRL1_HE_RF")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_3("PSRL1_AT_RF"),
        LIST_3("PSRL1_FRAG_RF")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    secondaryWeapon[] = {"launch_I_Titan_short_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
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
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_CommandoMortar_weapon_RF"};
    linkedItems[] +=
    {
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_CommandoMortar_weapon_RF"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_olive_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    magazines[] += {"Titan_AA"};
    backpackItems[] = {"Titan_AA"};
};
class samag : car
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
    backpack[] = {
        "B_DuffleBag_Black_NoLogo_RF",
        "B_DuffleBag_Black_RF"
    };
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : car
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"srifle_GM6_F"};
    scope[] = {"optic_LRPS"};
    magazines[] =
    {
        LIST_10("ACE_5Rnd_127x99_AMAX_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_3("17Rnd_9x19_yellow_Mag_RF")
    };
    backpack[] = {"B_ViperLightHarness_blk_F"};
};
class sp : dm
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_ViperLightHarness_blk_F"};
    backpackItems[] =
    {
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_Cap_headphones_ion_lxws"};
    backpack[] = {"B_AssaultPack_blk"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {
        "lxWS_H_Headset",
        "H_Cap_headphones_ion_lxws"
    };
    linkedItems[] += {"ItemGPS"};
    backpack[] = {"B_AssaultPack_blk"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_TacVest_blk"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {
        "lxWS_H_Headset",
        "H_Cap_headphones_ion_lxws"
    };
    backpack[] = {"B_AssaultPack_blk"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_C_HeliPilotCoveralls_Black_RF"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_Black_RF", "H_PilotHelmetHeli_White_RF"};
    hmd[] = {"ACE_NVG_Wide_Black"};
    primaryWeapon[] = {"SMG_02_F"};
    attachment[] = {"saber_light_ir_lxWS"};
    scope[] = {};
    bipod[] = {};
    magazines[] = {
        LIST_3("30Rnd_9x21_Mag_SMG_02"),
        LIST_2("SmokeShellGreen"),
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellPurple"),
        LIST_2("Chemlight_Green"),
        LIST_2("Chemlight_Red")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backPack[] = {"B_AssaultPack_blk"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"V_PlateCarrierLite_black_noFlag_RF"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    attachment[] = {"acc_flashlight"};
    backpack[] = {"B_Carryall_blk"};
    Items[] += {
        "MineDetector",
        "ACE_DefusalKit",
        "ACE_M26_Clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"V_PlateCarrierLite_black_noFlag_RF"};
    attachment[] = {"acc_flashlight"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backpack[] = {"B_Carryall_blk"};
};
class jp : baseMan
{
    displayName = "Plane Pilot";
    headgear[] = {"H_Hat_Safari_sand_F"};
    goggles[] = {"G_Aviator"};
    uniform[] = {
        "U_C_PilotJacket_black_RF",
        "U_C_PilotJacket_open_black_RF",
        "U_C_PilotJacket_brown_RF",
        "U_C_PilotJacket_open_brown_RF",
        "U_C_PilotJacket_lbrown_RF",
        "U_C_PilotJacket_open_lbrown_RF"
    };
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_LegStrapBag_coyote_F"};
    hmd[] = {"immersion_cigs_cigar0_nv"};
    sidearmWeapon[] = {"hgun_Glock19_RF"};
    magazines[] = {
        LIST_2("17Rnd_9x19_Mag_RF")
    };
};
class UAV : car
{
    displayName = "UAV Operator [BLUFOR]";
    traits[] += {"UAVHacker"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] += {
        LIST_4("1Rnd_RC40_shell_RF")
    };
    backpack[] = {"ION_UAV_01_backpack_lxWS"};
    linkedItems[] += {"B_UavTerminal"};
};