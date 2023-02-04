class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_I_E_Uniform_01_F","U_I_E_Uniform_01_F",
        "U_I_E_Uniform_01_shortsleeve_F"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","","",
        "H_Booniehat_eaf","H_Beret_EAF_01_F","H_MilCap_eaf"
    };
    goggles[] = 
    {
        "","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted","G_Lowprofile","G_Lowprofile"
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
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
        LIST_2("ACE_CableTie"),
    };
    // These are added directly into their respective slots
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
};
class car : baseMan
{
    displayName = "Carabinier";
    headgear[] = {
        "H_HelmetHBK_headset_F","H_HelmetHBK_headset_F","H_HelmetHBK_headset_F","H_HelmetHBK_headset_F","H_HelmetHBK_headset_F","H_HelmetHBK_headset_F",
        "H_HelmetHBK_ear_F","H_HelmetHBK_ear_F","H_HelmetHBK_ear_F",
        "H_HelmetHBK_chops_F"
    };
    hmd[] = {"NVGoggles_INDEP"};
    vest[] = {"V_CarrierRigKBT_01_light_EAF_F"};
    primaryWeapon[] = {"arifle_MSBS65_black_F"};
    scope[] = {"rhsusf_acc_eotech_552"};
    sidearmWeapon[] = {"hgun_P07_blk_F"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_msbs_mag"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_2("16Rnd_9x21_Mag")
    };
    backpack[] = {"B_AssaultPack_eaf_F"};
};
class r : car
{
    displayName = "Rifleman";
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_msbs_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_Mag")
    };
};
class g : car
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MSBS65_GL_black_F"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_2("ACE_HuntIR_M203")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class m : r 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpack[] = {"B_Carryall_eaf_F"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
    magazines[] += {
        LIST_2("SmokeShell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m21s_pr"};
    scope[] = {"rhsusf_acc_eotech_552"};
    magazines[] =
    {
        LIST_5("rhsgref_30rnd_556x45_m21"),
        LIST_2("SmokeShell"),
        LIST_2("16Rnd_9x21_Mag")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_1("30Rnd_65x39_caseless_msbs_mag_Tracer"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue")
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
class sl : ftl
{
    displayName = "Squad Leader";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class rto: car
{
    displayName = "Radio Operator";
    backpack[] = {"B_RadioBag_01_eaf_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] =
    {
        "H_Beret_EAF_01_F",
        "H_MilCap_eaf"
    };
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {"B_RadioBag_01_eaf_F"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    backpack[] = {"B_Carryall_eaf_F"};
    primaryWeapon[] = {"LMG_Mk200_black_F"};
    scope[] = {"optic_Arco_blk_F"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_3("200Rnd_65x39_cased_Box_Red"),
        LIST_1("200Rnd_65x39_cased_Box_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Carryall_eaf_F"};
    backpackItems[] =
    {
        LIST_2("200Rnd_65x39_cased_Box_Red"),
        LIST_1("200Rnd_65x39_cased_Box_Red")
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
    primaryWeapon[] = {"arifle_MSBS65_Mark_black_F"};
    scope[] = {"optic_SOS"};
    bipod[] = {"bipod_01_f_blk"};
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    primaryWeapon[] = {"LMG_S77_lxWS"};
    scope[] = {"rhsusf_acc_ELCAN"};
    attachment[] = {};
    magazines[] =
    {
        LIST_5("100Rnd_762x51_S77_Red_lxWS"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_Mag")
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
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_4("100Rnd_762x51_S77_Red_lxWS"),
        LIST_1("ACE_SpottingScope")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_4("100Rnd_762x51_S77_Red_lxWS"),
        LIST_1("ACE_Tripod")
    };
};

class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    vest[] = {"V_Chestrig_oli"};
    backpack[] = {"I_E_HMG_01_weapon_F"};

};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner (Legacy)";
    backpack[] = {"I_E_HMG_01_support_F"};
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
    backpack[] = {"I_E_HMG_01_high_weapon_F"};
};
class hmgg_csw : car
{
    displayName = "HMG Gunner (CSW)";
    vest[] = {"V_Chestrig_oli"};
    secondaryWeapon[] = {"ace_csw_staticHMGCarry"};

};
class hmgag_csw : hmgg
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_sgg"};
};
class hmgac_csw : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] = {
        LIST_3("ace_csw_100Rnd_127x99_mag"),
        LIST_2("ace_csw_100Rnd_127x99_mag_yellow"),
    };
};

class gmgg : hmgg
{
    displayName = "GMG Gunner (Legacy)";
    backpack[] = {"I_E_GMG_01_weapon_F"};
};
class gmgag : hmgag
{
    displayName = "GMG Assistant Gunner (Legacy)";
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier (Legacy)";
    backpack[] = {"I_E_GMG_01_high_weapon_F"};
};
class gmgg_csw : car
{
    displayName = "GMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticGMGCarry"};
};
class gmgag_csw : hmgag_csw
{
    displayName = "GMG Assistant Gunner (CSW)";
};
class gmgac_csw : hmgac_csw
{
    displayName = "GMG Ammo Carrier (CSW)";
    backpackItems[] = {
        LIST_5("ace_csw_20Rnd_20mm_G_belt"),
    };
};

class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_green_F"};
    backpack[] = {"B_Kitbag_sgg"};
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
    backpack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] =
    {
        LIST_3("MRAWS_HEAT_F"),
        LIST_3("MRAWS_HE_F")
    };
};

class hatg : car
{
    displayName = "HAT Gunner (Legacy)";
    backpack[] = {"B_Kitbag_sgg"};
    secondaryWeapon[] = {"launch_I_Titan_short_F"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner (Legacy)";
    backpack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_1("Titan_AP")
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
    displayName = "HAT Ammo Carrier (Legacy)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] =
    {
        LIST_3("Titan_AT"),
        LIST_1("Titan_AP")
    };
};
class hatg_csw : car
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticATCarry"};
};
class hatag_csw : car
{
    displayName = "HAT Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m3CarryTripod"};
    backpack[] = {"B_Kitbag_sgg"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hatac_csw : car
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] =
    {
        LIST_4("Titan_AT"),
    };
};

class mtrg : car
{
    displayName = "Mortar Gunner (Legacy)";
    backpack[] = {"I_E_Mortar_01_weapon_F"};
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
    backpack[] = {"I_E_Mortar_01_support_F"};
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
    backpack[] = {"I_E_Mortar_01_weapon_F"};
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
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
    backpack[] = {"B_Kitbag_rgr"};
};
class mtrac_csw : car
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] = {
        LIST_6("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};

class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_olive_F"};
    backpack[] = {"B_Carryall_eaf_F"};
    magazines[] += {
        LIST_2("Titan_AA"),
    };
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
    backpack[] = {"B_Carryall_eaf_F"};
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
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_tna_F"};
    scope[] = {"optic_LRPS_tna_F"};
    magazines[] =
    {
        LIST_12("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_3("16Rnd_9x21_Mag")
    };
};
class sp : dm
{
    displayName = "Spotter [DLC]";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"arifle_MSBS65_Mark_F"};
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
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"V_CarrierRigKBT_01_EAF_F"};
    uniform[] =
    {
        "U_I_E_Uniform_01_shortsleeve_F",
        "U_I_E_Uniform_01_sweater_F", "U_I_E_Uniform_01_sweater_F",
        "U_I_E_Uniform_01_tanktop_F", "U_I_E_Uniform_01_tanktop_F", "U_I_E_Uniform_01_tanktop_F", "U_I_E_Uniform_01_tanktop_F"
    };
    headgear[] = {"H_Tank_eaf_F"};
    linkedItems[] += {
        "ItemGPS"
    };
};
class vc : vg
{
    displayName = "Vehicle Commander";
    uniform[] =
    {
        "U_I_E_Uniform_01_shortsleeve_F"
    };
    headgear[] = {"H_HelmetCrew_I_E"};
    linkedItems[] += {
        "Binocular"
    };
};
class vd : vg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"H_HelmetCrew_I_E"};
    backpackItems[] = {"ToolKit"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"V_CarrierRigKBT_01_EAF_F"};
    headgear[] = {"H_PilotHelmetHeli_I_E"};
    goggles[] = {};
    linkedItems[] += {
        "ItemGPS"
    };
};
class pcc : pp
{

    displayName = "Helicopter Crew Chief (Repair)";
    traits[] += {"engineer"};
    headgear[] = {"H_CrewHelmetHeli_I_E"};
    backpack[] = {"B_AssaultPack_eaf_F"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
    headgear[] = {"H_CrewHelmetHeli_I_E"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    uniform[] = {"U_I_E_Uniform_01_sweater_F"};
    headgear[] = {
        "H_HelmetHBK_ear_F","H_HelmetHBK_ear_F","H_HelmetHBK_ear_F",
        "H_HelmetHBK_chops_F"
    };
    backpack[] = {"B_Carryall_eaf_F"};
    backpackItems[] = {
        "MineDetector",
        "ACE_DefusalKit",
        "ACE_M26_Clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag"),
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class engm : eng
{
    displayName = "Combat Engineer (Mines)";
    backpackItems[] =
    {
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("APERSTripMine_Wire_Mag"),
        LIST_2("ATMine_Range_Mag"),
        LIST_1("APERSMineDispenser_Mag")
    };
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_I"};
    hmd[] = {};
    uniform[] = {"U_I_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"hgun_PDW2000_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("30Rnd_9x21_Yellow_Mag"),
        "SmokeShell",
        "SmokeShellBlue",
        "Chemlight_Green"
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
class UAV_light : car
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"I_E_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"I_E_UAV_01_backpack_F"};
};