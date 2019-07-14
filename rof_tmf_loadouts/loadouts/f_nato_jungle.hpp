class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_B_T_Soldier_F",
        "U_B_T_Soldier_AR_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","H_Booniehat_tna_F","H_Booniehat_tna_F"
    };
    goggles[] = 
    {
        "","","","","","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted","G_Combat_Goggles_tna_F","G_Lowprofile","G_Combat_Goggles_tna_F","G_Lowprofile",
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
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_2("ACE_CableTie")
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
    headgear[] = {"H_HelmetB_tna_F"};
    hmd[] = {"NVGoggles_tna_F"};
    vest[] = {"V_PlateCarrier2_tna_F"};
    backpack[] = {"B_AssaultPack_tna_F"};
    primaryWeapon[] =
    {
        "arifle_MX_khk_F"
    };
    scope[] = {"optic_aco"};
    attachment[] = {"acc_pointer_ir"};
    sidearmWeapon[] = {"hgun_P07_khk_F"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_khaki_mag"),
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
    vest[] = {"V_Chestrig_rgr"};
    sidearmWeapon[] = {};
    headgear[] = {"H_HelmetB_Light_tna_F"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_khk_F"};
    vest[] = {"V_PlateCarrierGL_tna_F"};
    scope[] = {"optic_aco"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_khaki_mag"),
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
    vest[] = {"V_PlateCarrier1_tna_F"};
    primaryWeapon[] = {"arifle_MXC_khk_F"};
};
class m : r
{
    displayName = "Medic";
    vest[] = {"V_PlateCarrierSpec_tna_F"};
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
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_TR_black"};
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
    primaryWeapon[] = {"arifle_MX_GL_khk_F"};
    headgear[] = {"H_HelmetB_Enh_tna_F"};
    vest[] = {"V_PlateCarrierGL_tna_F"};
    scope[] = {"optic_hamr_khk_f"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("30Rnd_65x39_caseless_khaki_mag_tracer"),
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
class sl : r
{
    displayName = "Squad Leader";
    vest[] = {"V_PlateCarrierSpec_tna_F"};
    headgear[] = {
        "H_HelmetB_Enh_tna_F"
    };
    primaryWeapon[] = {"arifle_MX_khk_F"};
    scope[] = {"optic_hamr_khk_f"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("30Rnd_65x39_caseless_khaki_mag_tracer"),
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
    items[] += {"ACE_MapTools"};
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_tropic_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_tna_F"};
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_tropic_F"};
    primaryWeapon[] = {"arifle_MX_GL_khk_F"};
    scope[] = {};
    attachment[] = {"acc_pointer_ir"};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("30Rnd_65x39_caseless_khaki_mag_tracer"),
        LIST_1("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell")
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
    primaryWeapon[] = {"arifle_MX_SW_khk_F"};
    scope[] = {};
    bipod[] = {"bipod_01_f_khk"};
    magazines[] =
    {
        LIST_5("100Rnd_65x39_caseless_khaki_mag"),
        LIST_1("100Rnd_65x39_caseless_khaki_mag_Tracer"),
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
        LIST_5("100Rnd_65x39_caseless_khaki_mag"),
        LIST_1("100Rnd_65x39_caseless_khaki_mag_Tracer"),
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
    primaryWeapon[] = {"arifle_MXM_khk_F"};
    scope[] = {"optic_sos_khk_f"};
    bipod[] = {"bipod_01_f_khk"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_khaki_mag"),
        LIST_1("30Rnd_65x39_caseless_khaki_mag_tracer"),
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
    headgear[] = {"H_HelmetB_Light_tna_F"};
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {"optic_hamr"};
    bipod[] = {"bipod_01_f_blk"};
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
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    headgear[] = {"H_HelmetB_Light_tna_F"};
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
    headgear[] = {"H_HelmetB_Light_tna_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_sgg"};
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
    scope[] = {"optic_holosight_khk_f"};
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_weapon_F"};
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
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    headgear[] = {"H_HelmetB_Light_tna_F"};
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    headgear[] = {"H_HelmetB_Light_tna_F"};
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    headgear[] = {"H_HelmetB_Light_tna_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_Kitbag_sgg"};
    scope[] = {"optic_holosight_khk_f"};
    headgear[] = {"H_HelmetB_Light_tna_F"};
    secondaryWeapon[] = {"launch_B_Titan_short_tna_F"};
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_Kitbag_sgg"};
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
    primaryWeapon[] = {"arifle_MXC_khk_F"};
    scope[] = {"optic_holosight_khk_f"};
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
class samg : car
{
    displayName = "AA Missile Specialist";
    headgear[] = {"H_HelmetB_Light_tna_F"};
    scope[] = {"optic_holosight_khk_f"};
    secondaryWeapon[] = {"launch_B_Titan_tna_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_oli"};
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper";
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_tna_F"};
    scope[] = {"optic_lrps_tna_F"};
    magazines[] =
    {
        LIST_10("7Rnd_408_Mag"),
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
    displayName = "Spotter [DLC]";
    headgear[] = {};
    primaryWeapon[] = 
    {
        "srifle_DMR_03_khaki_F"
    };
    scope[] = {"optic_hamr"};
    bipod[] = {"bipod_01_f_khk"};
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
class vc : car
{
    displayName = "Vehicle Commander";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_rgr"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    scope[] = {};
    attachment[] = {};
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
    goggles[] = {};
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
    linkedItems[] += {"ItemGPS"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {"B_AssaultPack_sgg"};
    headgear[] = {"H_CrewHelmetHeli_B"};
    scope[] = {"optic_holosight_khk_f"};
    goggles[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
    goggles[] = {};
    scope[] = {"optic_holosight_khk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_khaki_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    scope[] = {"optic_holosight_khk_f"};
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
    scope[] = {"optic_holosight_khk_f"};
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
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_B"};
    hmd[] = {};
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
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
        LIST_1("ACE_epinephrine")
    };
};
class UAV : r
{
    displayName = "UAV Operator [BLUFOR]";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};