// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"Butan_M88"};
    vest[] = {};
    headgear[] = {"fieldcap_butan"};
    goggles[] = {
        "","","","",
        "murshun_cigs_cig1","murshun_cigs_cig2","murshun_cigs_cig3","murshun_cigs_cig4"
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
    items[] = {
        "murshun_cigs_cigpack",
        "murshun_cigs_matches"
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
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] =  {"ssh68_camo_green", "ssh68_khaki"};
    vest[] = {"6B3_RHS"};
    backpack[] = {"RD_54_6B3_345th"};
    primaryWeapon[] = {"rhs_weap_ak74", "rhs_weap_ak74_2"};
    scope[] = {};
    silencer[] = {"rhs_acc_dtk1983"};
    magazines[] =
    {
        LIST_7("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_mag_rgd5"),
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
    displayName = "Rifleman (Light)";
    magazines[] = 
    {
        LIST_5("rhs_30Rnd_545x39_7N10_AK"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    vest[] = {"6B3_RHS_GP"};
    primaryWeapon[] = {"rhs_weap_ak74_gp25"};
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
    headgear[] = {"ssh68_reg"};
    backPack[] = {"rhs_medic_bag"};
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
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_4("rhs_30Rnd_545x39_7N10_AK"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("rhs_GRD40_Green"),
        LIST_2("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    backPack[] = {"RD_54_69_R148"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
        LIST_3("rhs_mag_9x18_8_57N181S")
    };
    // TO REPLACE:  items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"rhs_beret_milp"};
    vest[] = {"6B3_RHS_OF"};
    magazines[] = {
        LIST_3("rhs_mag_9x18_8_57N181S"),
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellYellow"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_6("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    headgear[] =  {"ssh68_camo_green", "ssh68_khaki"};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "rhs_pdu4"
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"gm_lmgrpk74n_brn", "gm_lmgrpk74n_prp"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_7("rhs_45Rnd_545X39_AK"),
        "rhs_mag_rdg2_white"
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
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"40th_weap_svd_wood"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    magazines[] =
    {
        LIST_12("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class mmgg : r_light
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    sidearmWeapon[] = {};
    scope[] = {};
    backPack[] = {"B_FieldPack_oli"};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
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
        "ItemGPS",
        "rhs_pdu4"
    };
    backPack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_1("rhs_100Rnd_762x54mmR")
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
    backPack[] = {"RHS_Metis_Tripod_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
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
    headgear[] = {"fieldcap_butan"};
    vest[] = {"345th_RD_webbing_bayonet"};
    backpack[] = {};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_svds"};
    scope[] = {"rhs_acc_pso1m21"};
    bipod[] = {};
    silencer[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_5("rhs_10Rnd_762x54mmR_7N1"),
        LIST_1("rhs_mag_rdg2_white"),
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {"fieldcap_butan"};
    vest[] = {"345th_RD_webbing_bayonet"};
    backpack[] = {"RD_54_69_Shovel", "RD_54_69_Shovel2"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_ak74m_fullplum"};
    scope[] = {"rhs_acc_pso1m2"};
    silencer[] = {"rhs_acc_dtk"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_7N10_AK"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        LIST_1("rhs_mag_rdg2_white")
    };
    backpackItems[] = {
        LIST_6("rhs_10Rnd_762x54mmR_7N1")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
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
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"rhs_vydra_3m"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S")
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