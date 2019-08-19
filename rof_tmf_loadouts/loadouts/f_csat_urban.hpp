class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_O_CombatUniform_oucamo"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","","",
        "H_Cap_blk","H_MilCap_ocamo","H_MilCap_ocamo"
    };
    goggles[] = 
    {
        "","","","","","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted"
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
        "H_HelmetO_oucamo"
    };
    hmd[] = {"O_NVGoggles_urb_F"};
    goggles[] = {};
    vest[] = {"V_HarnessO_gry"};
    primaryWeapon[] =
    {
        "arifle_Katiba_F"
    };
    scope[] = {"optic_aco_grn"};
    attachment[] = {"acc_pointer_ir"};
    sidearmWeapon[] = {"hgun_Rook40_F"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_green"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    vest[] = {"V_BandollierB_blk"};
    hmd[] = {"NVGoggles_OPFOR"};
    headgear[] = 
    {
        "H_MilCap_ocamo"
    };
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_green"),
        LIST_2("MiniGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_2("16Rnd_9x21_green_Mag")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_Katiba_GL_F"};
    backpack[] = {"B_FieldPack_oucamo"};
    vest[] = 
    {
        "V_HarnessOGL_gry"
    };
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_green"),
        LIST_2("HandGrenade"),
        LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_1("UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_Katiba_C_F"};
};
class m : r 
{
    displayName = "Medic";
    vest[] = {"V_TacVest_blk"};
    scope[] = {};
    backpack[] = {"B_FieldPack_oucamo"};
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
    primaryWeapon[] = {"SMG_03C_TR_hex"};
    magazines[] =
    {
        LIST_7("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"arifle_Katiba_GL_F"};
    headgear[] = {"H_HelmetLeaderO_oucamo"};
    vest[] = {"V_HarnessOGL_gry"};
    backpack[] = {"B_FieldPack_oucamo"};
    scope[] = {"optic_arco_blk_f"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_green"),
        LIST_2("30Rnd_65x39_caseless_green_mag_tracer"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellPurple"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_1("O_IR_Grenade"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell"),
        LIST_1("1Rnd_SmokeGreen_Grenade_Shell"),
        LIST_1("UGL_FlareCIR_F"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class sl : r
{
    displayName = "Squad Leader";
    vest[] = {"V_TacVest_blk"};
    backpack[] = {"B_FieldPack_oucamo"};
    headgear[] = {"H_HelmetLeaderO_oucamo"};
    scope[] = {"optic_arco_blk_f"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_02_F"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_green"),
        LIST_2("30Rnd_65x39_caseless_green_mag_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellPurple"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_1("O_IR_Grenade"),
        LIST_4("6Rnd_45ACP_Cylinder")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_oucamo_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_ocamo"};
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_oucamo_F"};
    backpack[] = {"B_FieldPack_oucamo"};
    primaryWeapon[] = {"arifle_Katiba_GL_F"};
    sidearmWeapon[] = {};
    scope[] = {};
    attachment[] = {"acc_pointer_ir"};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_green"),
        LIST_2("30Rnd_65x39_caseless_green_mag_tracer"),
        LIST_1("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokeBlue_Grenade_Shell"),
        LIST_2("1Rnd_SmokeGreen_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    headgear[] = {"H_HelmetO_oucamo"};
    backpack[] = {"B_FieldPack_oucamo"};
    primaryWeapon[] = {"LMG_Zafir_F"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("150Rnd_762x54_Box"),
        LIST_1("150Rnd_762x54_Box_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"B_FieldPack_oucamo"};
    backpackItems[] =
    {
        LIST_3("150Rnd_762x54_Box"),
        LIST_1("150Rnd_762x54_Box_Tracer")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    vest[] = {"V_HarnessO_gry"};
    backPack[] = {"B_FieldPack_oucamo"};
    secondaryWeapon[] = {"launch_RPG32_F"};
    magazines[] += {LIST_3("RPG32_F"),LIST_1("RPG32_HE_F")};
};
class dm : r
{
    displayName = "Designated Marksman";
    headgear[] = {"H_HelmetSpecO_blk"};
    primaryWeapon[] = {"srifle_DMR_01_F"};
    scope[] = {"optic_dms"};
    bipod[] = {"bipod_02_f_blk"};
    magazines[] =
    {
        LIST_7("10Rnd_762x54_Mag"),
        LIST_1("ACE_10Rnd_762x54_Tracer_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    headgear[] = {"H_HelmetSpecO_blk"};
    primaryWeapon[] = {"MMG_01_tan_F"};
    scope[] = {"optic_arco_blk_f"};
    bipod[] = {"bipod_02_f_hex"};
    magazines[] =
    {
        LIST_3("150Rnd_93x64_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        LIST_4("150Rnd_93x64_Mag"),
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
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        LIST_3("150Rnd_93x64_Mag"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    vest[] = {"V_Chestrig_khk"};
    hmd[] = {"NVGoggles_OPFOR"};
    backPack[] = {"O_HMG_01_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"O_HMG_01_high_weapon_F"};
};
class gmgg : hmgg
{
    displayName = "GMG Gunner";
    backPack[] = {"O_GMG_01_weapon_F"};
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier";
    backPack[] = {"O_GMG_01_high_weapon_F"};
};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner";
    backPack[] = {"O_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : r
{
    displayName = "HAT (Metis) Gunner";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    hmd[] = {"NVGoggles_OPFOR"};
    secondaryWeapon[] = {"launch_O_Vorona_brown_F"};
    backPack[] = {"B_FieldPack_oucamo"};
    magazines[] +=
    {
        LIST_2("Vorona_HEAT")
    };
};
class matac : r
{
    displayName = "HAT (Metis) Ammo Carrier";
    hmd[] = {"NVGoggles_OPFOR"};
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        LIST_1("Vorona_HEAT"),
        LIST_1("Vorona_HE")
    };
};
class matag : r
{
    displayName = "MAT (Metis) Assistant Gunner";
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        LIST_1("Vorona_HEAT"),
        LIST_1("Vorona_HE")
    };
};
class hatg : r
{
    displayName = "HAT (Titan) Gunner";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    hmd[] = {"NVGoggles_OPFOR"};
    backPack[] = {"B_Carryall_oucamo"};
    scope[] = {"optic_holosight"};
    secondaryWeapon[] = {"launch_O_Titan_short_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : r
{
    displayName = "HAT (Titan) Ammo Carrier";
    hmd[] = {"NVGoggles_OPFOR"};
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : r
{
    displayName = "HAT (Titan) Assistant Gunner";
    hmd[] = {"NVGoggles_OPFOR"};
    backPack[] = {"B_Carryall_oucamo"};
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
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    vest[] = {"V_Chestrig_khk"};
    backPack[] = {"O_Mortar_01_weapon_F"};
    primaryWeapon[] = {"arifle_Katiba_C_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    vest[] = {"V_Chestrig_khk"};
    backPack[] = {"O_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"V_Chestrig_khk"};
    backPack[] = {"O_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    hmd[] = {"NVGoggles_OPFOR"};
    secondaryWeapon[] = {"launch_O_Titan_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_oucamo"};
    magazines[] += {"Titan_AA"};
    backpackItems[] = {"Titan_AA"};
};
class samag : r
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
    backPack[] = {"B_Carryall_oucamo"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper (GM6)";
    backpack[] = {"B_FieldPack_oucamo"};
    uniform[] = {"U_O_FullGhillie_sard"};
    hmd[] = {};
    headgear[] = {};
    primaryWeapon[] = {"srifle_GM6_F"};
    scope[] = {"optic_lrps"};
    magazines[] =
    {
        LIST_8("5Rnd_127x108_Mag"),
        LIST_2("5Rnd_127x108_APDS_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    backpackItems[] += {"optic_nightstalker"};
};
class sn2 : sn
{
    displayName = "Sniper (Cyrus [DLC])";
    backpack[] = {"B_FieldPack_oucamo"};
    primaryWeapon[] = {"srifle_DMR_05_tan_F"};
    scope[] = {"optic_khs_tan"};
    attachment[] = {"acc_pointer_ir"};
    bipod[] = {"bipod_02_f_tan"};
    magazines[] =
    {
        LIST_10("10Rnd_93x64_DMR_05_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class sp : sn
{
    displayName = "Spotter";
    backpack[] = {"B_FieldPack_oucamo"};
    headgear[] = {};
    primaryWeapon[] = {"srifle_DMR_01_F"};
    scope[] = {"optic_arco_blk_f"};
    bipod[] = {"bipod_02_f_blk"};
    magazines[] =
    {
        LIST_8("10Rnd_762x54_Mag"),
        LIST_2("ACE_10Rnd_762x54_Tracer_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
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
    hmd[] = {"NVGoggles_OPFOR"};
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_FieldPack_oucamo"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    hmd[] = {"NVGoggles_OPFOR"};
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_FieldPack_oucamo"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    hmd[] = {"NVGoggles_OPFOR"};
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_FieldPack_oucamo"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_Tank_black_F"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backPack[] = {};
    headgear[] = {"H_PilotHelmetHeli_O"};
    goggles[] = {};
    primaryWeapon[] = {"SMG_02_F"};
    scope[] = {"optic_aco_grn_smg"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_6("30Rnd_9x21_Mag_SMG_02_Tracer_Green"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backPack[] = {"B_FieldPack_oucamo"};
    headgear[] = {"H_CrewHelmetHeli_O"};
    scope[] = {};
    goggles[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_green"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backPack[] = {};
    headgear[] = {"H_CrewHelmetHeli_O"};
    goggles[] = {};
    scope[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_green"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellRed"),
        LIST_2("Chemlight_Red")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    hmd[] = {"NVGoggles_OPFOR"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    attachment[] = {"acc_flashlight"};
    backPack[] = {"B_Carryall_oucamo"};
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
    hmd[] = {"NVGoggles_OPFOR"};
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
    backPack[] = {"B_Carryall_oucamo"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_O"};
    hmd[] = {};
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"SMG_02_F"};
    scope[] = {"optic_aco_grn_smg"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("30Rnd_9x21_Mag_SMG_02_Tracer_Green"),
        "SmokeShell",
        "SmokeShellPurple",
        "Chemlight_Red"
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class UAV : r
{
    displayName = "UAV Operator [OPFOR]";
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_UavTerminal"};
};