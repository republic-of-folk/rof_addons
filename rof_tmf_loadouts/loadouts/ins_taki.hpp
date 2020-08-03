class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_Afghan01NH", "U_Afghan02NH", "U_Afghan03NH", "U_Afghan06NH"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"", "", "", "Afghan_01Hat", "Afghan_02Hat", "Afghan_04Hat", "Afghan_05Hat", "Afghan_06Hat", "H_ShemagOpen_khk"};
    goggles[] = {"", "", "", "", "", "", "rhsusf_shemagh_white", "rhsusf_shemagh2_white"};
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
    code = "";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"rhs_6sh92"};
    primaryWeapon[] = {"rhs_weap_akm", "rhs_weap_akms"};
    scope[] = {};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_762x39mm"),
        LIST_2("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
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
    primaryWeapon[] = {"rhs_weap_m38"};
    magazines[] =
    {
        LIST_9("rhsgref_5Rnd_762x54_m38"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhs_6sh92_vog"};
    primaryWeapon[] = {"rhs_weap_akm_gp25", "rhs_weap_akms_gp25"};
    backpack[] = {"B_FieldPack_khk"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_2("rhs_VG40OP_white")
    };
};
class car : r
{
    displayName = "Shotgunner (Carabinier)";
    primaryWeapon[] = {"rhs_weap_Izh18"};
    magazines[] = {
        LIST_8("rhsgref_1Rnd_00Buck"),
        LIST_8("rhsgref_1Rnd_00Buck"),
        LIST_8("rhsgref_1Rnd_00Buck"),
        LIST_8("rhsgref_1Rnd_00Buck"),
        LIST_8("rhsgref_1Rnd_00Buck"),
        LIST_8("rhsgref_1Rnd_Slug"),
        LIST_8("rhsgref_1Rnd_Slug"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class m : r_light 
{
    displayName = "Medic";
    traits[] += {"medic"};
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
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"V_TacChestrig_cbr_F"};
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_7N10_AK"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : smg
{
    displayName = "Fireteam Leader";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : g
{
    displayName = "Squad Leader";
    headgear[] = {"H_Beret_blk"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_4("rhs_mag_9x18_8_57N181S")
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
};
class fac : co
{
    displayName = "Forward Air Controller";
    headgear[] = {"", "", "", "Afghan_01Hat", "Afghan_02Hat", "Afghan_04Hat", "Afghan_05Hat", "Afghan_06Hat", "H_ShemagOpen_khk"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkm"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    backpack[] = {"B_FieldPack_khk"};
    magazines[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR"),
        "rhs_100Rnd_762x54mmR_green",
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_FieldPack_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VL_mag"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_kar98k"};
    scope[] = {};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_13("rhsgref_5Rnd_792x57_kar98k"),
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_FieldPack_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpack[] = {"B_FieldPack_khk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
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
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_SPG9_Tripod_Bag"};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
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
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    backpack[] = {"B_TacticalPack_oli"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
{
    displayName = "AA Assistent Missile Specialist";
    backpack[] = {"B_TacticalPack_oli"};
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
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"rhs_weap_kar98k"};
    scope[] = {};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_13("rhsgref_5Rnd_792x57_kar98k"),
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : g
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    vest[] = {"V_TacChestrig_cbr_F"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
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
    backPack[] = {"B_Carryall_cbr"};
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
    backPack[] = {"B_Carryall_cbr"};
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