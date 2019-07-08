class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "Afghanka_M88"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "panama_afg",
        "panama_afg2"
    };
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
        LIST_4("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {"rhsgref_6b23_khaki", "rhsgref_6b23_khaki_sniper"};
    backpack[] = {"RD_54_69", "RD_54_69_Shovel", "RD_54_69_Shovel2"};
    primaryWeapon[] = {"rhs_weap_aks74"};
    scope[] = {};
	silencer[] = {"rhs_acc_dtk1l"};
    magazines[] =
    {
        LIST_11("rhs_30Rnd_545x39_AK"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_AK"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_aks74_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r
{
    displayName = "Carabinier";
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    uniform[] = {"Afghanka_M88_reg"};
    vest[] = {"rhsgref_6b23_khaki_medic"};
	backpack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"345th_RD_webbing"};
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_545x39_7N10_AK"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
	vest[] = {"rhsgref_6b23_khaki_nco"};
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backPack[] = {"RD_54_69_R148"};
	vest[] = {"rhsgref_6b23_khaki_officer"};
    headgear[] = {"345th_beret_VDV_officer", "345th_beret_VDV_officer2"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : co
{
    displayName = "Forward Air Controller";
    headgear[] = {"panama_afg", "panama_afg2"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"hlc_rifle_rpk74n"};
    bipod[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_11("rhs_45Rnd_545X39_AK"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_6("rhs_45Rnd_545X39_AK")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
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
    primaryWeapon[] = {"rhs_weap_m76"};
    scope[] = {"rhs_acc_pso1m21"};
	silencer[] = {"rhs_acc_dtk1l"};
    magazines[] =
    {
        LIST_11("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR_green"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white",
        LIST_4("rhs_mag_9x18_8_57N181S")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_green")
    };
    linkedItems[] += {"Binocular"};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    backpackItems[] =
    {
        LIST_1("rhs_100Rnd_762x54mmR_green")
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
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
        LIST_1("rhs_mag_9k38_rocket")
    };
};
class samag : r_light
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
    magazines[] +=
    {
        LIST_1("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"rhs_weap_m76"};
    scope[] = {"rhs_acc_pso1m21"};
	silencer[] = {"rhs_acc_dtk1l"};
    magazines[] =
    {
        LIST_11("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class sp : g
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {};
	vest[] = {"rhsgref_6b23_khaki"};
    headgear[] = {"rhs_tsh4"};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
	vest[] = {"rhsgref_6b23_khaki"};
	headgear[] = {"rhs_tsh4"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
	vest[] = {"rhsgref_6b23_khaki"};
	headgear[] = {"rhs_tsh4"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
	uniform[] = {"rhs_uniform_df15_tan"};
    headgear[] = {"rhs_zsh7a_mike_alt"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
	uniform[] = {"rhs_uniform_df15_tan"};
    headgear[] = {"rhs_zsh7a_mike_alt"};
    goggles[] = {"default"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
	uniform[] = {"rhs_uniform_df15_tan"};
    headgear[] = {"rhs_zsh7a_mike_alt"};
    goggles[] = {"default"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
    items[] = {
        LIST_6("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    headgear[] = {"ssh68_khaki"};
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    headgear[] = {"ssh68_khaki"};
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
    backpack[] = {"O_UAV_01_backpack_F"};
};