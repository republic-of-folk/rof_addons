class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_B_T_Soldier_F","U_B_T_Soldier_F",
        "U_B_T_Soldier_AR_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","","",
        "H_Booniehat_tna_F",
        "H_Cap_usblack",
    };
    goggles[] = 
    {
        "","","","","","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted","G_Combat","G_Lowprofile","G_Combat","G_Lowprofile",
        "G_Tactical_Clear","G_Tactical_Clear","G_Tactical_Clear","G_Tactical_Black","G_Tactical_Black","G_Tactical_Black"
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
    displayName = "Rifleman (Carbine)";
    headgear[] = {"H_HelmetB_plain_sb_tna_RF"};
    hmd[] = {"NVGoggles_tna_F"};
    vest[] = {"V_PlateCarrier2_rgr", "V_PlateCarrier2_tna_F"};
    backpack[] = {"B_AssaultPack_tna_F"};

    primaryWeapon[] = {"arifle_MXC_khk_F", "arifle_MXC_khk_F", "arifle_MXC_khk_F", "arifle_MXC_khk_F", "arifle_MXC_Black_F"};
    scope[] = {"optic_aco"};
    silencer[] = {"suppressor_65_khaki_RF"};
    attachment[] = {"acc_pointer_ir"};
    
    sidearmWeapon[] = {"hgun_Glock19_auto_khk_RF"};
    sidearmAttachments[] = {"acc_flashlight_IR_pistol_RF", "optic_MRD_khk_RF"};
    
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_khaki_mag"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("33Rnd_9x19_Yellow_Mag_khk_RF")
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
    displayName = "Rifleman";
    primaryWeapon[] = {"arifle_MX_khk_F", "arifle_MX_khk_F", "arifle_MX_khk_F", "arifle_MX_khk_F", "arifle_MX_Black_F"};
    magazines[] +=
    {
        LIST_5("30Rnd_65x39_caseless_khaki_mag"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
    };
};
class g : car
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_khk_F", "arifle_MX_GL_Black_F"};
    vest[] = {"V_PlateCarrierGL_rgr", "V_PlateCarrierGL_tna_F"};
    magazines[] +=
    {
        LIST_4("3Rnd_HE_Grenade_shell"),
        LIST_2("3Rnd_Smoke_Grenade_shell"),
        LIST_1("3Rnd_UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_6("30Rnd_45ACP_Mag_SMG_01_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"V_PlateCarrierSpec_tna_F"};
    backpack[] = {"B_TacticalPack_oli"};
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
class ftl : g
{
    displayName = "Fireteam Leader";
    scope[] = {"optic_hamr"};
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class sl : car
{
    displayName = "Squad Leader";
    vest[] =  {"V_PlateCarrierSpec_tna_F"};
    scope[] = {"optic_hamr"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class rto: r
{
    displayName = "Radio Operator";
    backPack[] = {"B_RadioBag_01_tropic_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_tna_F"};
};
class fac : g
{
    displayName = "Forward Air Controller";
    backPack[] = {"B_RadioBag_01_tropic_F"};
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
    silencer[] = {"muzzle_snds_H_MG_khk_F"};
    attachment[] = {"acc_pointer_IR"};
    scope[] = {"optic_Arco_lush_F"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_4("ACE_200Rnd_65x39_cased_Box_Tracer_Dim"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_3("17Rnd_9x19_yellow_Mag_RF")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_3("ACE_200Rnd_65x39_cased_Box_Tracer_Dim"),
        LIST_1("200Rnd_65x39_cased_Box_Tracer"),
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
    primaryWeapon[] = {"srifle_h6_blk_RF", "srifle_h6_oli_RF"};
    scope[] = {"optic_DMS", "optic_DMS_weathered_F"};
    silencer[] = {"muzzle_snds_M"};
    bipod[] = {"bipod_01_F_khk"};
    magazines[] =
    {
        LIST_7("10Rnd_556x45_AP_Stanag_RF"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("33Rnd_9x19_Yellow_Mag_khk_RF")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    primaryWeapon[] = {"MMG_02_Black_F"};
    scope[] = {"optic_Hamr_khk_F"};
    bipod[] = {"bipod_01_f_blk", "bipod_01_f_khk"};
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
    backPack[] = {"B_Carryall_oli"};
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
    backPack[] = {"B_Kitbag_rgr", "B_Kitbag_sgg"};
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
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_high_weapon_F"};
};
class gmgg : hmgg
{
    displayName = "GMG Gunner";
    backPack[] = {"B_GMG_01_weapon_F"};
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier";
    backPack[] = {"B_GMG_01_high_weapon_F"};
};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
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
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Kitbag_rgr", "B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matag : r
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
    backPack[] = {"B_Kitbag_rgr", "B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_Kitbag_rgr", "B_Kitbag_sgg"};
    secondaryWeapon[] = {"launch_B_Titan_short_tna_F"};
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_Kitbag_rgr", "B_Kitbag_sgg"};
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
    secondaryWeapon[] = {"launch_B_Titan_tna_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpack[] = {"B_TacticalPack_oli"};
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    headgear[] = {};
    vest[] = {"V_PlateCarrier2_rgr"};
    primaryWeapon[] = {"srifle_LRR_tna_F"};
    scope[] = {"optic_LRPS_tna_F"};
    magazines[] =
    {
        LIST_10("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_3("17Rnd_9x19_yellow_Mag_RF")
    };
};
class sp : dm
{
    displayName = "Spotter [DLC]";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    headgear[] = {};
    vest[] = {"V_PlateCarrier2_rgr"};
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
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    vest[] = {"V_BandollierB_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"V_BandollierB_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_BandollierB_rgr"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    hmd[] = {"ACE_NVG_Wide"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {"B_AssaultPack_sgg"};
    headgear[] = {"H_CrewHelmetHeli_B"};
    hmd[] = {"ACE_NVG_Wide"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
    hmd[] = {"ACE_NVG_Wide"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"V_PlateCarrierGL_tna_F"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    attachment[] = {"acc_flashlight"};
    backPack[] = {"B_Carryall_oli"};
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
    vest[] = {"V_PlateCarrierGL_tna_F"};
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
    backPack[] = {"B_Carryall_oli"};
};
class jp : smg
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_B"};
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    hmd[] = {};
};
class UAV : car
{
    displayName = "UAV Operator [BLUFOR]";
    traits[] += {"UAVHacker"};
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};