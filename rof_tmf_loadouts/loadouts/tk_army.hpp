// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_og107", "rhsgref_uniform_og107_erdl"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {
        "","rhsusf_shemagh_white","rhsusf_shemagh_tan"
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
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"usm_vest_LBE_rm"};
    headgear[] =  {"ssh68_camo_yel", "ssh68_khaki"};
    primaryWeapon[] = {"hlc_rifle_FAL5000"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
    magazines[] =
    {
        LIST_8("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
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
class r_light : r
{
    displayName = "Rifleman (light)";
    magazines[] = 
    {
        LIST_6("hlc_20Rnd_762x51_B_fal"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
    silencer[] = {};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_rdg2_white"),
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m714_White")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_FAL5061"};
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backPack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_scorpion"};
    silencer[] = {};
    scope[] = {};
    magazines[] =
    {
        LIST_6("rhsgref_20rnd_765x17_vz61"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {
        "rhs_pdu4",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhs_6b5_officer"};
    backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] += {
        LIST_2("rhs_mag_9x18_8_57N181S")
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
    primaryWeapon[] = {"rhs_weap_m84"};
    bipod[] = {};
    silencer[] = {};
    backpack[] = {"rhs_sidor"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"rhs_rpg_empty"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backpackItems[] = {
        LIST_3("rhs_rpg7_PG7VL_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    silencer[] = {};
    scope[] = {"hlc_optic_suit"};
    bipod[] = {};
};
class mmgg : r_light
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    sidearmWeapon[] = {};
    scope[] = {"rhs_acc_pkas"};
    backPack[] = {"B_FieldPack_oli"};
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
    backPack[] = {"B_FieldPack_oli"};
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
    backPack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
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
    secondaryWeapon[] = {};
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
    backPack[] = {"B_FieldPack_oli"};
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
    backPack[] = {"B_FieldPack_oli"};
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
    vest[] = {"rhs_6sh92_headset"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svdp"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_13("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_3("rhs_mag_9x19_17")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    vest[] = {"rhs_6sh92_radio"};
    primaryWeapon[] = {"hlc_rifle_FAL5000"};
    scope[] = {"hlc_optic_suit"};
    backPack[] = {"rhs_assault_umbts"};
    magazines[] =
    {
        LIST_7("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white"),
        LIST_4("rhs_mag_9x19_17")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"345th_RD_webbing"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"345th_RD_webbing"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4"};
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
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a_mike"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
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
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"rhs_6b23_ML_vydra_3m"};
    backpack[] = {"B_Carryall_oli"};
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
    vest[] = {"rhs_6b23_ML_vydra_3m"};
    backpack[] = {"B_Carryall_oli"};
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
    linkedItems[] += {"O_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
};