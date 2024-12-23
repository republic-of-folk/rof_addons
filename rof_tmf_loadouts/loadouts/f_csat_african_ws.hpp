class baseMan {// Weaponless baseclass
    faces[] = {"faceset:african", "faceset:persian", "faceset:persian", "faceset:persian", "faceset:persian"};
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_O_LCF_noInsignia_hex_lxws"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"H_MilCap_ocamo"};
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
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
        LIST_2("ACE_CableTie"),
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
class car : baseMan
{
    displayName = "Carabinier";
    headgear[] = {"lxWS_H_ssh40_sand"};
    vest[] = {"V_Chestrig_khk"};
    primaryWeapon[] = {"arifle_VelkoR5_lxWS"};
    sidearmWeapon[] = {"hgun_Rook40_F"};
    magazines[] =
    {
        LIST_8("35Rnd_556x45_Velko_reload_tracer_green_lxWS"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("16Rnd_9x21_green_Mag")
    };
};
class r : car
{
    displayName = "Rifleman";
    backpack[] = {"B_FieldPack_ocamo"};
    primaryWeapon[] = {"arifle_SLR_V_lxWS"};
    scope[] = {"optic_aco_grn"};
    magazines[] =
    {
        LIST_8("30Rnd_762x51_slr_reload_tracer_green_lxWS"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_2("16Rnd_9x21_green_Mag")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_SLR_V_GL_lxWS"};
    magazines[] +=
    {
        LIST_6("1Rnd_40mm_HE_lxWS"),
        LIST_4("1Rnd_58mm_AT_lxWS"),
        LIST_4("1Rnd_50mm_Smoke_lxWS"),
    };
};
class m : car
{
    displayName = "Medic";
    vest[] = {"V_TacVest_khk"};
    scope[] = {};
    backpack[] = {"B_FieldPack_ocamo"};
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
class ftl : g
{
    displayName = "Fireteam Leader";
    headgear[] = {"H_MilCap_ocamo"};
    backpack[] = {"B_AssaultPack_ocamo"};
    scope[] = {"optic_Arco_blk_F"};
    magazines[] += {
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellGreen"),
    };
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
    uniform[] = {"U_O_OfficerUniform_ocamo"};
    vest[] = {"V_TacVest_khk"};
    headgear[] = {"H_Beret_CSAT_01_F"};
    backpack[] = {"B_AssaultPack_ocamo"};
    magazines[] += {
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellGreen"),
    };
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class co : car
{
    displayName = "Platoon Leader";
    uniform[] = {"U_O_OfficerUniform_ocamo"};
    vest[] = {"V_TacVest_khk"};
    headgear[] = {"H_Beret_CSAT_01_F"};
    backpack[] = {"B_AssaultPack_ocamo"};
    magazines[] += {
        LIST_1("SmokeShellRed"),
        LIST_1("SmokeShellGreen"),
    };
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class fac : car
{
    magazines[] += {
        LIST_2("SmokeShellRed"),
        LIST_2("SmokeShellGreen"),
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
    primaryWeapon[] = {"LMG_Zafir_F"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("150Rnd_762x54_Box"),
        LIST_1("150Rnd_762x54_Box_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"B_TacticalPack_ocamo"};
    backpackItems[] =
    {
        LIST_3("150Rnd_762x54_Box"),
        LIST_1("150Rnd_762x54_Box_Tracer")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    vest[] = {"V_HarnessO_brn"};
    backPack[] = {"B_Carryall_ocamo"};
    secondaryWeapon[] = {"launch_RPG32_F"};
    magazines[] += {
        LIST_3("RPG32_F"),
        LIST_1("RPG32_HE_F")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"srifle_DMR_06_hunter_F"};
    scope[] = {"optic_dms"};
    bipod[] = {"bipod_02_F_blk"};
    magazines[] =
    {
        LIST_7("20Rnd_762x51_Mag_blk_lxWS"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_green_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    primaryWeapon[] = {"LMG_S77_Hex_lxWS"};
    scope[] = {"optic_Arco_hex_lxWS"};
    magazines[] =
    {
        LIST_3("100Rnd_762x51_S77_Green_lxWS"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_green_Mag")
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
    backPack[] = {"B_Carryall_ocamo"};
    backpackItems[] =
    {
        LIST_2("100Rnd_762x51_S77_Green_lxWS"),
        LIST_1("100Rnd_762x51_S77_Green_Tracer_lxWS"),
        LIST_1("ACE_SpottingScope")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_ocamo"};
    backpackItems[] =
    {
        LIST_3("100Rnd_762x51_S77_Green_lxWS"),
        LIST_1("100Rnd_762x51_S77_Green_Tracer_lxWS"),
        LIST_1("ACE_Tripod")
    };
};

class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    backpack[] = {"O_HMG_01_weapon_F"};

};
class hmgag : hmgg
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backpack[] = {"O_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backpack[] = {"O_HMG_01_high_weapon_F"};
};
class hmgg_csw : car
{
    displayName = "HMG Gunner (CSW)";
    backPack[] = {"B_Carryall_ocamo"};
    secondaryWeapon[] = {"ace_csw_staticHMGCarry"};

};
class hmgag_csw : hmgg_csw
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
    backpack[] = {"B_Bergen_hex_F"};
    backpackItems[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgac_csw : hmgg_csw
{
    displayName = "HMG Ammo Carrier (CSW)";
    secondaryWeapon[] = {};
    backpack[] = {"B_Bergen_hex_F"};
    backpackItems[] = {
        LIST_3("ace_csw_100Rnd_127x99_mag"),
        LIST_2("ace_csw_100Rnd_127x99_mag_yellow"),
    };
};
class gmgg : hmgg
{
    displayName = "GMG Gunner (Legacy)";
    backpack[] = {"O_GMG_01_weapon_F"};
};
class gmgag : hmgag
{
    displayName = "GMG Assistant Gunner (Legacy)";
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier (Legacy)";
    backpack[] = {"O_GMG_01_high_weapon_F"};
};
class gmgg_csw : hmgg_csw
{
    displayName = "GMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticGMGCarry"};
};
class gmgag_csw : hmgag_csw
{
    displayName = "GMG Assistant Gunner (CSW)";
    backpackItems[] = {};
};
class gmgac_csw : hmgac_csw
{
    displayName = "GMG Ammo Carrier (CSW)";
    backpackItems[] = {
        LIST_5("ace_csw_20Rnd_20mm_G_belt"),
    };
};

class matg : r
{
    displayName = "HAT (Metis) Gunner";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    secondaryWeapon[] = {"launch_O_Vorona_brown_F"};
    backPack[] = {"B_Carryall_ocamo"};
    magazines[] +=
    {
        LIST_2("Vorona_HEAT")
    };
};
class matag : r
{
    displayName = "MAT (Metis) Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_ocamo"};
    backpackItems[] =
    {
        LIST_1("Vorona_HEAT"),
        LIST_1("Vorona_HE")
    };
};
class matac : car
{
    displayName = "HAT (Metis) Ammo Carrier";
    backPack[] = {"B_Bergen_hex_F"};
    backpackItems[] =
    {
        LIST_3("Vorona_HEAT"),
        LIST_1("Vorona_HE")
    };
};

class hatg : r
{
    displayName = "HAT (Titan) Gunner (Legacy)";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    backPack[] = {"B_Carryall_ocamo"};
    scope[] = {"optic_holosight"};
    secondaryWeapon[] = {"launch_O_Titan_short_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatag : r
{
    displayName = "HAT (Titan) Assistant Gunner (Legacy)";
    backPack[] = {"B_Carryall_ocamo"};
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
class hatac : car
{
    displayName = "HAT (Titan) Ammo Carrier (Legacy)";
    backPack[] = {"B_Carryall_ocamo"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatg_csw : hatg
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticATCarry"};
};
class hatag_csw : hatag
{
    displayName = "HAT Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
    backpack[] = {"B_Bergen_hex_F"};
};
class hatac_csw : hatac
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_hex_F"};
    backpackItems[] =
    {
        LIST_4("Titan_AT"),
    };
};

class mtrg : car
{
    displayName = "Mortar Gunner (Legacy)";
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
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (Legacy)";
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
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"O_Mortar_01_weapon_F"};
};
class mtrg_csw : mtrg
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
};
class mtrag_csw : mtrag
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    backpack[] = {"B_Kitbag_rgr"};
};
class mtrac_csw : mtrac
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_hex_F"};
    backpackItems[] = {
        LIST_6("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};

class samg : r
{
    displayName = "AA Missile Specialist";
    helmet[] = {"H_HelmetSpecO_ocamo"};
    secondaryWeapon[] = {"launch_O_Titan_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_Carryall_ocamo"};
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
    backPack[] = {"B_Carryall_ocamo"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper (GM6)";
    backpack[] = {"B_AssaultPack_ocamo"};
    uniform[] = {"U_O_FullGhillie_ard"};
    hmd[] = {};
    headgear[] = {};
    primaryWeapon[] = {"srifle_GM6_camo_F"};
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
class sp : sn
{
    displayName = "Spotter";
    backpack[] = {"B_AssaultPack_ocamo"};
    headgear[] = {};
    primaryWeapon[] = {"srifle_DMR_01_F"};
    scope[] = {"optic_arco"};
    bipod[] = {"bipod_02_f_hex"};
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
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"B_AssaultPack_ocamo"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"B_AssaultPack_ocamo"};
    headgear[] = {"H_Tank_black_F"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"B_AssaultPack_ocamo"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_Tank_black_F"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {"B_FieldPack_ocamo"};
    headgear[] = {"H_PilotHelmetHeli_O"};
    goggles[] = {};
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {"B_FieldPack_ocamo"};
    headgear[] = {"H_CrewHelmetHeli_O"};
    goggles[] = {};
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_khk"};
    backpack[] = {"B_FieldPack_ocamo"};
    headgear[] = {"H_CrewHelmetHeli_O"};
    goggles[] = {};
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backPack[] = {"B_Carryall_ocamo"};
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
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backPack[] = {"B_Carryall_ocamo"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_O"};
    hmd[] = {};
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"ACE_NonSteerableParachute"};
    primaryWeapon[] = {};
    magazines[] =
    {
        LIST_2("16Rnd_9x21_green_Mag"),
        "SmokeShell",
        "SmokeShellPurple",
        "Chemlight_Red"
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
class UAV : car
{
    displayName = "UAV Operator [OPFOR]";
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_UavTerminal"};
};