class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "rhs_uniform_m88_patchless"
    };
    vest[] = {
        "rhs_6b5"
    };
    backpack[] = {
        "B_TacticalPack_oli"
    };
    headgear[] = {
        "rhsgref_helmet_M1_bare",
        "rhsgref_helmet_M1_bare_alt01"
    };
    goggles[] = {
        "default",
        "default",
        "G_Aviator",
        "murshun_cigs_cig1",
        "murshun_cigs_cig2"
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
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    primaryWeapon[] = {"rhs_weap_m21a"};
    magazines[] =
    {
        LIST_8("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    magazines[] =
    {
        LIST_5("rhsgref_30rnd_556x45_m21"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_m21a_pbg40"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r_light
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m21s"};
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
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
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"rhs_vydra_3m"};
    primaryWeapon[] = {"rhsusf_weap_MP7A2"};
    scope[] = {};
    attachment[] = {"rhsusf_acc_wmx"};
    bipod[] = {"rhs_acc_grip_rk6"};
    magazines[] =
    {
        LIST_6("rhsusf_mag_40Rnd_46x30_FMJ"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhs_6b5_officer"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"H_Beret_blk"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
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
class co : sl
{
    displayName = "Platoon Leader";
    goggles[] = {
        "G_Aviator"
    };
};
class fac : co
{
    displayName = "Forward Air Controller";
    headgear[] = {
        "rhsgref_helmet_M1_bare",
        "rhsgref_helmet_M1_bare_alt01"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
    bipod[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_2("rhs_200rnd_556x45_M_SAW"),
        "rhs_200rnd_556x45_T_SAW",
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("rhs_200rnd_556x45_M_SAW")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_m14ebrri"};
    scope[] = {"rhsusf_acc_ACOG3"};
    magazines[] =
    {
        LIST_11("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_3("130Rnd_338_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class mmgag : car
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgag : r_light
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
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgg_csw : smg
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_nsv_carry"};
};
class hmgag_csw : r_light
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
class hmgac_csw : r_light
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_6("ace_csw_50Rnd_127x108_mag"),
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    secondaryMagazine[] = {"rhs_mag_smaw_HEAA"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA"
    };
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA"
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
    };
};
class matag : r_light
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
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner (Legacy)";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatg_csw : r_light
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_tow_carry"};
};
class hatag_csw : r_light
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
class hatac_csw : r_light
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_2("ace_compat_rhs_usf3_mag_TOW2A"),
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Gun_Bag"};
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
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
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
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
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
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_3("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    vest[] = {"rhs_6b5_sniper"};
    headgear[] = {"rhs_beanie_green"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m40a5"};
    scope[] = {"rhsusf_acc_M8541_low"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_7("rhsusf_10Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backPack[] = {};
};
class sp : g
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    vest[] = {"rhs_6b5_sniper"};
    headgear[] = {"rhs_beanie_green"};
    goggles[] = {};
    scope[] = {"rhsusf_acc_ACOG_RMR"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"rhs_tsh4"};
    hmd[] = {"NVGoggles_OPFOR"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"rhs_tsh4"};
    hmd[] = {"NVGoggles_OPFOR"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_gssh18"};
    hmd[] = {"NVGoggles_OPFOR"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    headgear[] = {"rhs_gssh18"};
    hmd[] = {"NVGoggles_OPFOR"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {"rhs_gssh18"};
    hmd[] = {"NVGoggles_OPFOR"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_I_pilotCoveralls"};
    vest[] = {};
    headgear[] = {"rhs_zsh7a_alt"};
    goggles[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"B_Carryall_oli"};
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
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"I_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
};