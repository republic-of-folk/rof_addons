// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_gorka_r_y"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {""};
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
    headgear[] =  {"rhs_altyn_novisor_bala", "rhs_altyn_novisor_ess_bala"};
    vest[] = {"RPS_Smersh13_sh", "RPS_Smersh14_sh"};
    primaryWeapon[] = {"rhs_weap_ak103"};
    scope[] = {"rhs_acc_ekp1"};
    silencer[] = {"rhs_acc_dtk2"};
    sidearmWeapon[] = {"hgun_Rook40_F"};
    magazines[] =
    {
        LIST_11("rhs_30Rnd_762x39mm_polymer"),
        LIST_2("16Rnd_9x21_Mag"),
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
    displayName = "Rifleman (light)";
    magazines[] = 
    {
        LIST_7("rhs_30Rnd_762x39mm_polymer"),
        LIST_2("16Rnd_9x21_Mag"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    vest[] = {"RPS_Smersh4_sh", "RPS_Smersh9_sh"};
    primaryWeapon[] = {"rhs_weap_ak103_gp25"};
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
    vest[] = {"rhs_6b23_ML_medic"};
    backPack[] = {"rhs_assault_umbts"};
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
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
    magazines[] =
    {
        LIST_6("rhs_30Rnd_545x39_7N10_2mag_plum_AK"),
        LIST_2("16Rnd_9x21_Mag"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    scope[] = {"rhs_acc_1p78"};
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
    magazines[] +=
    {
        LIST_3("rhs_mag_9x19_17")
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
    magazines[] = {
        LIST_2("16Rnd_9x21_Mag"),
        LIST_2("rhs_GRD40_Green"),
        LIST_3("rhs_GRD40_Red"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellYellow"),
        LIST_3("rhs_VOG25"),
        LIST_2("rhs_GRD40_White"),
        LIST_6("rhs_30Rnd_762x39mm_polymer"),
        LIST_2("rhs_30Rnd_545x39_AK_green"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white")
    };
};
class fac : co
{
    displayName = "Forward Air Controller";
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
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"rhs_weap_pkp"};
    scope[] = {};
    bipod[] = {};
    silencer[] = {};
    vest[] = {"RPS_Smersh3_sh", "RPS_Smersh5_sh"};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        LIST_2("16Rnd_9x21_Mag"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
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
    primaryWeapon[] = {"rhs_weap_svdp"};
    silencer[] = {};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    magazines[] =
    {
        LIST_12("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_2("rhs_mag_rdg2_white"),
        LIST_2("16Rnd_9x21_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkp"};
    sidearmWeapon[] = {};
    scope[] = {"rhs_acc_pkas"};
    backPack[] = {"B_Carryall_oli"};
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
    vest[] = {"rhs_6b23_ML_6sh92"};
    backPack[] = {"B_Carryall_oli"};
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
    backPack[] = {"B_Carryall_oli"};
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
    linkedItems[] +=
    {
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
    backPack[] = {"B_Carryall_oli"};
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
    backPack[] = {"B_Carryall_oli"};
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
    vest[] = {"RPS_Smersh15_sh"};
    headgear[] = {"H_Watchcap_khk"};
    goggles[] = {"rhs_scarf"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmAttachments[] = {"muzzle_snds_L"};
    magazines[] =
    {
        LIST_13("rhs_5Rnd_338lapua_t5000"),
        "rhs_mag_rgd5",
        LIST_2("16Rnd_9x21_Mag")
    };
    backpack[] = {};
    linkedItems[] += {"ItemGPS"};
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {"H_Watchcap_khk"};
    goggles[] = {"rhs_scarf"};
    scope[] = {"rhs_acc_1p78"};
    sidearmWeapon[] = {"hgun_Rook40_F"};
    sidearmAttachments[] = {"muzzle_snds_L"};
    linkedItems[] += {"ItemGPS", "rhs_pdu4"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"RS_Tarzan_g"};
    headgear[] = {"rhs_tsh4_bala"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"RS_Tarzan_g"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4_bala"};
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
    vest[] = {"RS_Tarzan_g"};
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
    vest[] = {"RS_Tarzan_g"};
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
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"RS_Tarzan_g"};
    backpack[] = {"rhs_sidor"};
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
    headgear[] = {"rhs_altyn_bala"};
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
    headgear[] = {"rhs_altyn_bala"};
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
    backpack[] = {"O_UAV_01_backpack_F"};
};