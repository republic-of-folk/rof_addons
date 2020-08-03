class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:african"};
    // All randomized.
    uniform[] =
    {
        "M93_lizard_pants_brown_B",
        "M93_Portugal_Lizard_Pants_Olive_B",
        "M93_Portugal_Lizard_2_Pants_Olive_B",
        "M93_ins_dpm_B",
        "rhsgref_uniform_altis_lizard_olive",
        "M93_dpm_shirt_B",
        "M93_Rhodesian_Olive_Pants_B",
        "M93_bdu_jeans_B",
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        LIST_17(""),
        "Portugal_llizard_Field_cap_2",
        "gm_gc_army_headgear_cap_80_gry",
        "rds_Profiteer_cap1",
        "rds_Profiteer_cap2",
        "rds_Profiteer_cap3",
        "rds_Profiteer_cap4",
        "usm_headwrap_dcu",
        "usm_headwrap_des",
        "usm_headwrap_tan",
        "usm_headwrap_tgrstp",
        "H_StrawHat_dark",
        "H_Hat_Safari_sand_F",
        "H_Hat_brown",
        "H_Hat_checker",
        "gm_ge_headgear_hat_boonie_oli",
        "rhsgref_helmet_M1_liner",
        "ssh68_dark_green",
    };
    goggles[] = {
        "","","","",
        "murshun_cigs_cig1","murshun_cigs_cig2","murshun_cigs_cig3","murshun_cigs_cig4",
        "G_simc_US_Bandoleer","G_simc_US_Bandoleer_left","G_simc_US_Bandoleer_right",
        "G_Aviator",
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

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Carabinier";
    vest[] = {"V_TacChestrig_cbr_F", "V_TacChestrig_grn_F", "V_TacChestrig_oli_F"};
    primaryWeapon[] = {"arifle_AKM_F", "rhs_weap_akm", "rhs_weap_akms", "rhs_weap_pm63", "gm_akm_wud", "gm_mpikms72_brn"};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] = {
        LIST_5("rhssaf_30Rnd_762x39mm_M67"),
        LIST_1("rhs_mag_f1"),
        LIST_1("SmokeShell"),
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
    };
};
class r : car
{
    displayName = "Rifleman";
    backpack[] = {
        "gm_dk_army_backpack_73_oli",
        "gm_gc_army_backpack_80_assaultpack_lmg_str",
        "gm_gc_army_backpack_80_assaultpack_str",
        "gm_pl_army_backpack_80_oli",
        "gm_gc_army_backpack_80_lmg_str",
    };
    magazines[] += {
        LIST_3("rhssaf_30Rnd_762x39mm_M67"),
        LIST_1("rhs_mag_f1"),
    };
    items[] += {
        LIST_1("ACE_EntrenchingTool")
    };
};
class g : car
{
    displayName = "Grenadier";
    vest[] = {
        "gm_pl_army_vest_80_crew_gry",
        "gm_pl_army_vest_80_leader_gry",
        "gm_pl_army_vest_80_mg_gry",
        "gm_pl_army_vest_80_marksman_gry",
        "gm_pl_army_vest_80_rifleman_gry",
        "gm_gc_army_vest_80_leader_str",
        "gm_gc_army_vest_80_rifleman_str",
    };
    primaryWeapon[] = {"rhs_weap_akm_gp25", "rhs_weap_akm_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_VG40OP_white")
    };
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
    backpack[] = {"rhs_medic_bag"};
};
class smg : car
{
    displayName = "Submachinegunner (bypassed)";
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
class sl : car
{
    displayName = "Squad Leader";
    headgear[] = {"H_Beret_blk"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] +=
    {
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
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {
        "gm_pl_army_vest_80_mg_gry",
        "gm_ge_army_vest_80_machinegunner",
        "gm_gc_army_vest_80_lmg_str",
    };
    primaryWeapon[] = {"rhs_weap_pkm"};
    silencer[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"gm_rpg7_wud"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_M14dmr_Rail"};
    scope[] = {"rhsusf_acc_ACOG3"};
    magazines[] =
    {
        LIST_11("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    backpack[] = {"B_AssaultPack_rgr"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"Binocular"};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodLow_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class matg : car
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
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backpack[] = {"rhs_rpg_empty"};
    linkedItems[] +=
    {
        "Binocular"
    };
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"RHS_SPG9_Tripod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] +=
    {
        "Binocular"
    };
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : r
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] +=
    {
        "Binocular"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : car
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"rhs_weap_l1a1_wood"};
    silencer[] = {"rhsgref_acc_falMuzzle_l1a1"};
    scope[] = {"rhsgref_acc_l1a1_l2a2"};
    magazines[] =
    {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal"),
        LIST_2("SmokeShell")
    };
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] =
    {
        "Binocular"
    };
    backpackItems[] += {
        LIST_5("rhs_mag_20Rnd_762x51_m80_fnfal")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"gm_ge_backpack_satchel_80_blk"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
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
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class jp : car
{
    displayName = "Plane pilot";
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {
        "gm_dk_army_backpack_73_oli",
        "gm_gc_army_backpack_80_assaultpack_lmg_str",
        "gm_gc_army_backpack_80_assaultpack_str",
        "gm_pl_army_backpack_80_oli",
        "gm_gc_army_backpack_80_lmg_str",
    };
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : eng
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
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
class UAV_light : car
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