class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_I_CBRN"
    };
    vest[] = {
        "V_DeckCrew_white_F"
    };
    backpack[] = {
        "B_LegStrapBag_black_F"
    };
    headgear[] = {
        "H_Construction_basic_white_F"
    };
    goggles[] = {
        "G_CBRN_S10"
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
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
};
class g : r_light
{
    displayName = "Grenadier";
};
class car : r_light
{
    displayName = "Shotgunner (Carabinier)";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
        LIST_3("rhsusf_8Rnd_Slug"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class m : r_light 
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
    primaryWeapon[] = {"SMG_02_F"};
    silencer[] = {"ACE_muzzle_mzls_smg_02"};
    scope[] = {"optic_Yorris"};
    magazines[] =
    {
        LIST_8("30Rnd_9x21_Mag_SMG_02"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
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
};
class fac : r_light
{
    displayName = "Radioman";
    backpack[] = {"usm_pack_st138_prc77_empty"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_g36kv"};
    scope[] = {"rhsusf_acc_T1_low"};
    bipod[] = {"rhsusf_acc_grip1"};
    silencer[] = {"ACE_muzzle_mzls_L"};
    attachment[] = {"ACE_acc_pointer_green"};
    magazines[] =
    {
        LIST_3("150Rnd_556x45_Drum_Mag_F"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpackItems[] =
    {
        LIST_2("150Rnd_556x45_Drum_Mag_F")
    };
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg75"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_vss"};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_7("rhs_20rnd_9x39mm_SP5"),
        LIST_2("rhs_mag_m67")
    };
};
class mmgg : r_light
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {"rhs_acc_pkas"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : r_light
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_Kord_Gun_Bag"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_Kord_Gun_Bag"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_Kord_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backpack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
    secondaryWeapon[] = {};
    backpackItems[] = {};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    linkedItems[] +=
    {
        "rhs_pdu4",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] += {
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    magazines[] +=
    {
        "rhs_mag_9k38_rocket"
    };
    backpackItems[] =
    {
        "rhs_mag_9k38_rocket"
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
        "rhs_pdu4",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"rhs_weap_vss"};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    magazines[] =
    {
        LIST_7("rhs_20rnd_9x39mm_SP5"),
        LIST_3("rhs_20rnd_9x39mm_SP6"),
        LIST_2("rhs_mag_m67")
    };
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_gssh18"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"rhs_gssh18"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"rhs_gssh18"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {};
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
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
};