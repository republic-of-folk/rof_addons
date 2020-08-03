// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_gc_army_uniform_soldier_80_str"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    backpack[] = {};
    headgear[] = {"gm_gc_army_headgear_hat_80_grn"};
    goggles[] = {
        "","","","","","","","","","","",
        "","","","","","","","","","","",
        "G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted"
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
        "ItemRadio",
        "gm_watch_kosei_80"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r_light : baseMan
{
    displayName = "Rifleman (light)";
    vest[] = {"gm_gc_army_vest_80_rifleman_str"};
    backpack[] = {};
    headgear[] =  {
        "gm_gc_army_headgear_m56",
        "gm_gc_army_headgear_m56_net",
        "gm_gc_army_headgear_m56_cover_str"
    };
    primaryWeapon[] = {"gm_mpikm72_brn"};
    magazines[] =
    {
        LIST_5("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_1("SmokeShell")
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
class r : r_light
{
    displayName = "Rifleman";
    magazines[] += {
        LIST_3("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_2("rhs_mag_rgd5")
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class g : r_light {
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akms_gp25"};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] = {
        LIST_5("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_1("SmokeShell"),
        LIST_5("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
};
class car : r_light
{
    displayName = "Carabinier";
    primaryWeapon[] = {"gm_mpikms72_prp"};
};
class m : r_light
{
    displayName = "Medic";
    traits[] += {"medic"};
    insignias[] = {"gm_gc_armpatch_medical"};
    backpack[] = {"gm_ge_backpack_satchel_80_san"};
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
class smg : r_light
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mpiaks74nk_prp"};
    magazines[] = {
        LIST_6("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
        LIST_1("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"gm_gc_army_vest_80_leader_str"};
    linkedItems[] += {"gm_df7x40_blk"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] += {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
    items[] += {"ACE_Maptools","ZSN_Whistle"};
};
class co : sl
{
    displayName = "Platoon Leader";
    uniform[] = {"gm_gc_army_uniform_dress_80_gry"};
    headgear[] = {"gm_gc_army_headgear_cap_80_gry"};
    vest[] = {"rds_pistol_holster"};
    primaryWeapon[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] = {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    headgear[] = {"gm_gc_army_headgear_hat_80_grn"};
    items[] += {
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Autorifleman (RPK)";
    vest[] = {"gm_gc_army_vest_80_lmg_str"};
    backPack[] = {"gm_gc_army_backpack_80_lmg_str"};
    primaryWeapon[] = {"gm_lmgrpk_brn"};
    magazines[] =
    {
        LIST_6("gm_75Rnd_762x39mm_B_T_M43_ak47_blk"),
        LIST_2("gm_handgrenade_frag_rgd5")
    };
};
class aar : r
{
    displayName = "Assistant Autorifleman (RPK)";
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_lmg_str"};
    backpackItems[] =
    {
        LIST_4("gm_75Rnd_762x39mm_B_T_M43_ak47_blk")
    };
};
class rat : r
{
    displayName = "Anti-Tank Specialist (RPG-7)";
    secondaryWeapon[] = {"gm_rpg7_prp"};
    secondaryMagazine[] = {"gm_1Rnd_40mm_heat_pg7v_rpg7"};
    backPack[] = {"gm_gc_army_backpack_80_at_str"};
    magazines[] += {LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m2"};
    magazines[] = {
        LIST_8("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"gm_hmgpkm_prp"};
    magazines[] = {
        LIST_5("gm_100Rnd_762x54mm_B_T_T46_pk_grn"),
        LIST_2("SmokeShell")
    };
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("gm_100Rnd_762x54mm_B_T_T46_pk_grn"),
        "ACE_Tripod"
    };
};
class mmgag : mmgac
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
};
class matg : rat
{
    displayName = "MAT Gunner (RPG-7)";
    secondaryAttachments[] = {"gm_pgo7v_blk"};
};
class matac : rat
{
    displayName = "MAT Ammo Carrier";
    secondaryWeapon[] = {};
};
class matag : rat
{
    displayName = "MAT Assistant Gunner";
    secondaryWeapon[] = {};
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
};
class hatg : r_light
{
    displayName = "HAT Gunner (Fagot)";
    backPack[] = {"gm_fagot_launcher_weaponBag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"O_Mortar_01_weapon_F"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"O_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"O_Mortar_01_support_F"};
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    secondaryMagazine[] = {"rhs_mag_9k38_rocket"};
    backPack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] = {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
    backPack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] = {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : dm
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {"gm_gc_army_headgear_hat_80_grn"};
    items[] += {
        "ACE_Maptools",
        "ACE_RangeCard"
    };
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {"gm_gc_army_headgear_hat_80_grn"};
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {
        "ACE_Maptools",
        "ACE_SpottingScope",
        "ACE_RangeCard"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    insignias[] = {"gm_gc_armpatch_armored"};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {
        "gm_gc_army_headgear_crewhat_80_blk"
    };
    linkedItems[] += {"gm_df7x40_blk"};
    items[] += {"ACE_Maptools"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    insignias[] = {"gm_gc_armpatch_armored"};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {
        "gm_gc_army_headgear_crewhat_80_blk"
    };
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    traits[] += {"engineer"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    insignias[] = {"gm_gc_armpatch_armored"};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {
        "gm_gc_army_headgear_crewhat_80_blk"
    };
};
class pp : smg
{
    displayName = "Helicopter Pilot";\
    insignias[] = {};
    headgear[] = {
        "gm_ge_headgear_headset_crew_oli"
    };
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    insignias[] = {};
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    traits[] += {"engineer"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    insignias[] = {};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    headgear[] = {
        "gm_gc_army_headgear_crewhat_80_blk"
    };
};
class jp : baseMan
{
    displayName = "Jet pilot";
    insignias[] = {"gm_gc_armpatch_pilotschool"};
    uniform[] = {"gm_gc_army_uniform_soldier_80_blk"};
    backpack[] = {"ACE_NonSteerableParachute"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    vest[] = {"gm_gc_army_vest_80_belt_str"};
    goggles[] = {};
    primaryWeapon[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] = {
        LIST_2("rhs_mag_9x18_8_57N181S"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    insignias[] = {"gm_gc_armpatch_engineering"};
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    backpackItems[] = {
        LIST_4("rhsusf_m112_mag"),
        LIST_1("rhsusf_m112x4_mag")
    };
    items[] += {
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit"
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    insignias[] = {"gm_gc_armpatch_engineering"};
    backPack[] = {"gm_gc_army_backpack_80_assaultpack_str"};
    backpackItems[] = {LIST_3("ATMine_Range_Mag")};
    items[] += {
        "ACE_wirecutter",
        "ACE_DefusalKit"
    };
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
};