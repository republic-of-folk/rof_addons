// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_cossack"};
    vest[] = {"rhs_belt_AK"};
    backpack[] = {};
    headgear[] =  {
        LIST_5("rhs_cossack_papakha"),
        LIST_2("rhs_fieldcap_early"),
        LIST_1("")
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
        "ItemCompass"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman (Nagant)";
    vest[] = {"rhs_suspender_AK"};
    primaryWeapon[] = {"rhs_weap_m38"};
    magazines[] =
    {
        LIST_6("rhsgref_5Rnd_762x54_m38"),
        LIST_2("rhs_mag_f1")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint")
    };
};
class r : car
{
    displayName = "Rifleman (SKS)";
    primaryWeapon[] = {"rhs_weap_m76"};
    magazines[] =
    {
        LIST_6("rhsgref_10Rnd_792x57_m76"),
        LIST_2("rhs_mag_f1")
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    vest[] = {"rhs_lifchik_light"};
    primaryWeapon[] = {"rhs_weap_akms_folded"};
    silencer[] = {"rhs_acc_dtkakm"};
    magazines[] = {
        LIST_5("gm_30Rnd_762x39mm_AP_7N23_ak47_blk"),
        LIST_1("rhs_mag_f1")
    };
};
class g : car
{
    displayName = "Grenadier";
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] += {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    headgear[] = {"rhs_pilotka"};
    vest[] = {"rhs_lifchik"};
    backpack[] = {"rhs_rd54"};
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
class ftl : smg
{
    displayName = "Fireteam Leader";
    headgear[] = {"rhs_cossack_visor_cap_tan"};
    vest[] = {"rhs_lifchik"};
    magazines[] += {
        LIST_4("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed"),
        LIST_1("ACE_HandFlare_Green"),
        LIST_1("ACE_HandFlare_Red"),
        LIST_1("ACE_HandFlare_White"),
        LIST_1("ACE_HandFlare_Yellow")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"rhs_cossack_visor_cap"};
    vest[] = {"rhs_lifchik_NCO"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] +=
    {
        LIST_1("rhs_mag_762x25_8")
    };
    linkedItems[] += {
        "40th_binocular_6x30"
    };
    items[] += {
        "ACE_Maptools",
        "ZSN_Whistle"
    };
};
class co : smg
{
    displayName = "Platoon Leader";
    headgear[] = {"rhs_cossack_visor_cap"};
    vest[] = {"rhs_lifchik_NCO"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] +=
    {
        LIST_1("rhs_mag_762x25_8")
    };
    linkedItems[] += {
        "40th_binocular_6x30"
    };
    items[] += {
        "ACE_Maptools",
        "ZSN_Whistle"
    };
    backpack[] = {"rhs_r148"};
};
class fac : smg
{
    displayName = "Political Officer (FAC)";
    headgear[] = {"rhs_beret_omon"};
    vest[] = {"rhs_lifchik_NCO"};
    backpack[] = {"rhs_r148"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] += {
        LIST_1("rhs_mag_9x18_8_57N181S")
    };
    linkedItems[] += {
        "40th_binocular_6x30",
        "ItemWatch"
    };
    items[] += {
        "ACE_Maptools"
    };
};
class ar : car
{
    displayName = "Automatic Rifleman (RPK)";
    vest[] = {"rhs_belt_RPK"};
    primaryWeapon[] = {"gm_rpk_wud"};
    magazines[] =
    {
        LIST_3("gm_75Rnd_762x39mm_B_57N231_mpikm_blk"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_f1")
    };
    backpack[] = {"rhs_sidor"};
};
class aar : car
{
    displayName = "Assistant Machinegunner";
    backpack[] = {"rhs_sidor"};
    backpackItems[] =
    {
        LIST_3("gm_75Rnd_762x39mm_B_57N231_mpikm_blk")
    };
    linkedItems[] += {
        "40th_binocular_6x30"
    };
};
class rat : g
{
    displayName = "Grenadier (Anti-Tank)";
    backpack[] = {"rhs_sidor"};
    magazines[] += {
        LIST_4("rhsgref_mag_rkg3em"),
        LIST_2("rhs_charge_tnt_x2_mag")
    };
};
class dm : car
{
    displayName = "Designated Marksman";
    vest[] = {"rhs_lifchik_light"};
    primaryWeapon[] = {"gm_svd_wud"};
    magazines[] = {
        LIST_6("gm_10Rnd_762x54mmR_API_7bz3_svd_blk"),
        LIST_2("rhs_mag_f1")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] += {"ACE_Tripod"};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"40th_binocular_6x30"};
    Items[] += {"ACE_Maptools"};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backpack[] = {"RHS_DShkM_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backpack[] = {"RHS_DShkM_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backpack[] = {"RHS_DShkM_TripodLow_Bag"};
    linkedItems[] += {"40th_binocular_6x30"};
    Items[] += {"ACE_Maptools"};
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryAttachments[] = {"rhs_acc_pgo7v"};
    backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_6("rhs_rpg7_PG7V_mag")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_6("rhs_rpg7_PG7V_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"40th_binocular_6x30"};
    backpack[] = {"gm_gc_army_backpack_80_at_str"};
    backpackItems[] =
    {
        LIST_6("rhs_rpg7_PG7V_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_SPG9_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"40th_binocular_6x30"};
    Items[] += {"ACE_Maptools"};
    backpack[] = {"RHS_SPG9_Tripod_Bag"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backpack[] = {"RHS_Podnos_Gun_Bag"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backpack[] = {"RHS_Podnos_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backpack[] = {"RHS_Podnos_Bipod_Bag"};
    linkedItems[] += {"40th_binocular_6x30"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class samg : hatg
{
    displayName = "AA Missile Specialist";
};
class samag : hatag
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] += {"40th_binocular_6x30"};
    items[] += {"ACE_Maptools"};
};
class sn : dm
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"rhs_uniform_afghanka_boots"};
    headgear[] = {"rhs_pilotka", "rhs_fieldcap_early"};
    scope[] = {"gm_pso1_dovetail_gry"};
    items[] += {"ACE_Maptools"};
};
class sp : car
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    uniform[] = {"rhs_uniform_afghanka_boots"};
    headgear[] = {"rhs_pilotka", "rhs_fieldcap_early"};
    linkedItems[] += {"rhssaf_zrak_rd7j"};
    items[] += {"ACE_Maptools"};
};
class vc : baseMan
{
    displayName = "Vehicle Commander";
    headgear[] = {"rhs_tsh4"};
    uniform[] = {"rhs_uniform_afghanka_boots"};
    vest[] = {"rhs_belt_holster"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] = {
        LIST_2("rhs_mag_762x25_8")
    };
    linkedItems[] += {"40th_binocular_6x30"};
    items[] += {"ACE_Maptools"};
};
class vd : baseMan
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"rhs_tsh4"};
    uniform[] = {"rhs_uniform_afghanka_boots"};
    vest[] = {"rhs_belt_holster"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] = {
        LIST_2("rhs_mag_762x25_8")
    };
    backpack[] = {"rhs_rd54"};
    backpackItems[] = {"ToolKit"};
};
class vg : baseMan
{
    displayName = "Vehicle Gunner";
    headgear[] = {"rhs_tsh4"};
    uniform[] = {"rhs_uniform_afghanka_boots"};
    vest[] = {"rhs_belt_holster"};
    sidearmWeapon[] = {"rhs_weap_tt33"};
    magazines[] = {
        LIST_2("rhs_mag_762x25_8")
    };
};
class pp : vc
{
    displayName = "Helicopter Pilot";
    uniform[] = {"rhs_uniform_afghanka_winter"};
    headgear[] = {
        "rhs_gssh18"
    };
};
class pcc : vd
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"rhs_uniform_afghanka_winter"};
    headgear[] = {"rhs_gssh18"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
    uniform[] = {"rhs_uniform_afghanka_winter"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_afghanka_winter"};
    backpack[] = {"gm_backpack_rs9_parachute"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    vest[] = {"rhs_belt_holster"};
    goggles[] = {};
    sidearmWeapon[] = {"gm_wz78_blk"};
    magazines[] = {
        LIST_3("gm_1Rnd_265mm_flare_multi_red_gc")
    };
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"gm_ge_army_vest_80_demolition"};
    backpack[] = {"gm_ge_army_backpack_90_flk"};
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
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"gm_ge_army_backpack_90_flk"};
    backpackItems[] = {LIST_3("ATMine_Range_Mag")};
    items[] += {
        "ACE_wirecutter",
        "ACE_DefusalKit"
    };
};
class UAV : car
{
    displayName = "UAV Operator [BLUFOR]";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};