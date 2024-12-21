// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_ge_uniform_soldier_90_trp", "gm_ge_uniform_soldier_rolled_90_trp"};
    vest[] = {"gm_ge_army_vest_80_belt"};
    backpack[] = {};
    headgear[] = {"gm_ge_headgear_hat_90_trp"};
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
        "gm_watch_kosei_80"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman (Light)";
    hmd[] = {"ACE_NVGoggles_OPFOR_WP"};
    vest[] = {"gm_ge_vest_armor_90_rifleman_flk"};
    headgear[] =  {"gm_ge_headgear_m92_trp"};
    primaryWeapon[] = {"gm_g36e_blk"};
    magazines[] =
    {
        LIST_3("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
        LIST_3("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
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
class r : car
{
    displayName = "Rifleman";
    magazines[] +=
    {
        LIST_1("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
        LIST_2("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1")
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp5a5_blk"};
    attachment[] = {"gm_maglite_2d_hkslim_blk"};
    magazines[] = {
        LIST_7("gm_30Rnd_9x19mm_B_DM51_mp5a3_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1")
    };
};
class g : r
{
    displayName = "Grenadier";
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] += {
        LIST_6("1Rnd_HE_Grenade_shell"),
        LIST_4("ACE_40mm_Flare_white"),
        LIST_4("ACE_40mm_Flare_ir"),
    };
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"gm_ge_vest_armor_90_medic_flk"};
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
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"gm_ge_vest_armor_90_leader_flk"};
    linkedItems[] += {"gm_fero51_oli"};
    magazines[] += {
        LIST_4("SmokeShell"),
        LIST_1("ACE_HandFlare_Green"),
        LIST_1("ACE_HandFlare_Red"),
        LIST_1("ACE_HandFlare_White"),
        LIST_1("ACE_HandFlare_Yellow")
    };
    backpack[] = {"gm_ge_backpack_satchel_80_blk"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"gm_ge_headgear_hat_90_trp"};
    uniform[] = {"gm_ge_uniform_soldier_90_trp"};
    items[] += {
        "ACE_Maptools"
    };
};
class co : smg
{
    displayName = "Platoon Leader";
    headgear[] = {"gm_ge_headgear_hat_90_trp"};
    uniform[] = {"gm_ge_uniform_soldier_90_trp"};
    sidearmWeapon[] = {"gm_lp1_blk"};
    vest[] = {"gm_ge_vest_armor_90_officer_flk"};
    magazines[] +=
    {
        LIST_1("gm_1Rnd_265mm_flare_multi_grn_DM21"),
        LIST_1("gm_1Rnd_265mm_flare_multi_yel_DM20"),
        LIST_1("gm_1Rnd_265mm_flare_multi_red_DM23"),
        LIST_2("gm_1Rnd_265mm_flare_multi_wht_DM25")
    };
    Items[] += {
        "ACE_Maptools",
        "ZSN_Whistle"
    };
    linkedItems[] += {
        "gm_fero51_oli"
    };
};
class fac : car
{
    displayName = "Forward Air Controller";
    headgear[] = {"gm_ge_headgear_beret_crew_red_signals"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    linkedItems[] += {"gm_fero51_oli"};
    Items[] += {
        "ACE_Maptools"
    };
};
class ar : car
{
    displayName = "Machinegunner";
    vest[] = {"gm_ge_vest_armor_90_machinegunner_flk"};
    primaryWeapon[] = {"gm_mg3_blk"};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn"),
        LIST_1("SmokeShell"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class aar : r
{
    displayName = "Assistant Machinegunner";
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn")
    };
    linkedItems[] += {
        "gm_fero51_oli"
    };
};
class rat : car
{
    displayName = "Anti-Tank Specialist (PzF44-2)";
    secondaryWeapon[] = {"gm_pzf3_blk"};
    secondaryMagazine[] = {"gm_1Rnd_60mm_heat_dm12_pzf3"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    magazines[] += {LIST_1("gm_1Rnd_60mm_heat_dm12_pzf3")};
};
class dm : car
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"gm_g3a3_oli_feroz24"};
    scope[] = {"gm_feroz24_stanagClaw_oli"};
    magazines[] = {
        LIST_6("ACE_20Rnd_762x51_M993_AP_Mag"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_1("SmokeShell")
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
    linkedItems[] += {"gm_fero51_oli"};
    Items[] += {"ACE_Maptools"};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] += {"gm_fero51_oli"};
    Items[] += {"ACE_Maptools"};
};
class matg : car
{
    displayName = "MAT Gunner (PzF84)";
    secondaryWeapon[] = {"gm_pzf84_oli"};
    secondaryMagazine[] = {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf"};
    secondaryAttachments[] = {"gm_feroz51_pzf84_oli"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matac : car
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"gm_fero51_oli"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class hatg : car
{
    displayName = "HAT Gunner (Milan)";
    backPack[] = {"gm_milan_launcher_weaponBag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"gm_fero51_oli"};
    Items[] += {"ACE_Maptools"};
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] += {"gm_fero51_oli"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    secondaryMagazine[] = {"rhs_fim92_mag"};
    backpack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] = {LIST_1("rhs_fim92_mag")};
    linkedItems[] += {"gm_fero51_oli"};
    items[] += {"ACE_Maptools"};
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] = {LIST_1("rhs_fim92_mag")};
};
class sn : dm
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {};
    goggles[] = {"gm_ge_facewear_stormhood_blk"};
    primaryWeapon[] = {"gm_msg90a1_blk"};
    silencer[] = {"ACE_muzzle_mzls_B"};
    scope[] = {"gm_feroz51_stanagHK_oli"};
    bipod[] = {"gm_msg90_bipod_blk"};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] = {
        LIST_6("gm_20Rnd_762x51mm_AP_DM151_g3_blk"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk"),
        LIST_1("SmokeShell")
    };
    linkedItems[] += {"gm_lp7_oli"};
    items[] += {
        "ACE_Maptools",
        "gm_zf10x42_stanaghk_blk"
    };
};
class sp : car
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {};
    goggles[] = {"gm_ge_facewear_stormhood_blk"};
    linkedItems[] += {"gm_fero51_oli"};
    items[] += {"ACE_Maptools","ACE_SpottingScope"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"gm_ge_headgear_beret_crew_blk_armor"};
    uniform[] = {"gm_ge_army_uniform_crew_90_trp"};
    vest[] = {"gm_ge_vest_armor_90_crew_flk"};
    linkedItems[] += {"gm_fero51_oli"};
    items[] += {"ACE_Maptools"};
    hmd[] = {"ACE_NVG_Wide_Black"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk", "gm_ge_headgear_headset_crew_oli"};
    uniform[] = {"gm_ge_army_uniform_crew_90_trp"};
    vest[] = {"gm_ge_vest_armor_90_crew_flk"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
    backpackItems[] = {"ToolKit"};
    hmd[] = {"ACE_NVG_Wide_Black"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {"gm_ge_headgear_crewhat_80_blk", "gm_ge_headgear_headset_crew_oli"};
    uniform[] = {"gm_ge_army_uniform_crew_90_trp"};
    vest[] = {"gm_ge_vest_armor_90_crew_flk"};
    hmd[] = {"ACE_NVG_Wide_Black"};
};
class pp : vc
{
    displayName = "Helicopter Pilot";
    uniform[] = {"gm_ge_army_uniform_pilot_oli", "gm_ge_army_uniform_pilot_rolled_oli"};
    headgear[] = {
        "gm_ge_headgear_headset_crew_oli"
    };
};
class pcc : vd
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"gm_ge_army_uniform_pilot_oli", "gm_ge_army_uniform_pilot_rolled_oli"};
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
    uniform[] = {"gm_ge_army_uniform_pilot_oli", "gm_ge_army_uniform_pilot_rolled_oli"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"gm_ge_army_uniform_pilot_oli"};
    backpack[] = {"ACE_NonSteerableParachute"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    vest[] = {"gm_ge_army_vest_80_officer"};
    goggles[] = {};
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] = {
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
    hmd[] = {"ACE_NVG_Wide_Black"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"gm_ge_army_vest_80_demolition"};
    backPack[] = {"gm_ge_army_backpack_90_trp"};
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
    backPack[] = {"gm_ge_army_backpack_90_trp"};
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