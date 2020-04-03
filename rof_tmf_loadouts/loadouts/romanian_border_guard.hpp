class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "rds_uniform_Policeman"
    };
    vest[] = {"rhs_vest_commander"};
    backpack[] = {};
    headgear[] = {
        "rds_police_cap"
    };
    goggles[] = {
        "default"
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
    displayName = "Rifleman (Shotgun)";
    vest[] = {"V_BandollierB_khk"};
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhsusf_8Rnd_Slug"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_1("rhsusf_8Rnd_00Buck"),
        LIST_1("rhs_mag_rdg2_white")
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
    displayName = "Rifleman (Smg)";
    vest[] = {"rhs_vest_commander"};
    primaryWeapon[] = {"rhs_weap_scorpion"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_4("rhsgref_20rnd_765x17_vz61"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"V_BandollierB_khk"};
    primaryWeapon[] = {"rhs_weap_akm_gp25"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_1("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_pm63"};
    silencer[] = {"rhs_acc_dtkakm"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_762x39mm"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_1("rhs_mag_f1")
    };
};
class smg : r_light
{
    displayName = "Submachinegunner";
};
class m : smg 
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
};
class ftl : r_light
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : g
{
    displayName = "Squad Leader";
    linkedItems[] += {"Rangefinder","ItemGPS"};
    backpack[] = {"usm_pack_st138_prc77"};
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
class ar : car
{
    displayName = "Automatic Rifleman";
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"B_AssaultPack_rgr"};
    backpackItems[] =
    {
        LIST_2("rhs_200rnd_556x45_M_SAW")
    };
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rshg2"};
};
class mmgg : car
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"gm_lmgrpk_prp"};
    silencer[] = {};
    backPack[] = {"RD_54_69"};
    magazines[] =
    {
        LIST_6("gm_75Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_1("rhs_mag_9x18_8_57N181S")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"RD_54_69"};
    backpackItems[] =
    {
        LIST_6("gm_75Rnd_762x39mm_B_M43_ak47_blk")
    };
};
class mmgag : r_light
{
    displayName = "MMG Assistant Gunner";
    backPack[] = {"RD_54_69"};
    linkedItems[] +=
    {
        "Rangefinder"
    };
    backpackItems[] =
    {
        LIST_6("gm_75Rnd_762x39mm_B_M43_ak47_blk")
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_NSV_Gun_Bag"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_NSV_Gun_Bag"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_NSV_Tripod_Bag"};
    linkedItems[] +=
    {
        "Rangefinder"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
    linkedItems[] +=
    {
        "Rangefinder"
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
    linkedItems[] +=
    {
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"V_BandollierB_khk"};
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] +=
    {
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
    primaryWeapon[] = {"rhs_weap_m38_rail"};
    scope[] = {"rhs_acc_dh520x56"};
    magazines[] =
    {
        LIST_20("rhsgref_5Rnd_762x54_m38"),
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class sp : car
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    backpack[] = {"usm_pack_st138_prc77"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class dm : sn
{
    displayName = "Designated Marksman";
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {"RD_54_69"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {"RD_54_69"};
    headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    backpack[] = {"usm_pack_st138_prc77"};
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
class UAV_light : smg
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    vest[] = {"V_BandollierB_khk"};
    backpack[] = {"B_UAV_01_backpack_F"};
};