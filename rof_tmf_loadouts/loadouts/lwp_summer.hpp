// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_pl_army_uniform_soldier_80_moro","gm_pl_army_uniform_soldier_80_moro","gm_pl_army_uniform_soldier_rolled_80_moro"};
    vest[] = {"gm_pl_army_vest_80_rig_gry"};
    backpack[] = {};
    headgear[] = {"gm_pl_army_headgear_cap_80_moro"};
	goggles[] = {
		"","","","","","","","","","","",
		"G_Aviator","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted",
		"G_Aviator","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted",
		"mgsr_eyepatch_goggles"
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
		LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_CableTie"),
		"ACE_Earplugs","ACE_Flashlight_KSF1"
	};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "gm_gc_compass_f73",
        "gm_watch_kosei_80"
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
    vest[] = {"gm_pl_army_vest_80_rifleman_gry"};
	backpack[] = {};
    headgear[] =  {
		"gm_pl_army_headgear_wz67_oli",
		"gm_pl_army_headgear_wz67_net_oli"
	};
    primaryWeapon[] = {"gm_akm_wud"};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    magazines[] =
    {
		LIST_5("gm_30Rnd_762x39mm_B_M43_ak47_blk"),
        LIST_2("gm_handgrenade_frag_rgd5")
    };
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'}; {_this addItem _x} forEach ['gm_gc_army_facewear_schm41m','gm_pl_army_headgear_cap_80_moro','gm_bayonet_6x3_wud'];"
};
class r_light : r
{
    displayName = "Rifleman (light)";
	headgear[] = {"gm_pl_army_headgear_cap_80_moro"};
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_CableTie"),
		"ACE_Earplugs",
        "ACE_Flashlight_KSF1",
        "gm_bayonet_6x3_wud"
    };
};
class car : r
{
    displayName = "Carabinier (No change)";
};
class m : r
{
    displayName = "Medic";
    traits[] += {"medic"};
	backPack[] = {"gm_ge_backpack_satchel_80_san"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
};
class smg : r
{
    displayName = "Submachinegunner (No change)";
};
class ftl : r
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("gm_smokeshell_wht_gc")
    };
    linkedItems[] += {
        "gm_df7x40_blk"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	vest[] = {"gm_pl_army_vest_80_leader_gry"};
	sidearmWeapon[] = {"gm_wz78_blk"};
	magazines[] += {
		"gm_1Rnd_265mm_flare_single_wht_gc","gm_1Rnd_265mm_flare_single_grn_gc","gm_1Rnd_265mm_flare_single_red_gc","gm_1Rnd_265mm_flare_multi_red_gc",
		"gm_1Rnd_265mm_smoke_single_blk_gc","gm_1Rnd_265mm_smoke_single_blu_gc","gm_1Rnd_265mm_smoke_single_yel_gc"
	};

	Items[] += {"ACE_Maptools","ZSN_Whistle"};
};
class co : baseMan
{
    displayName = "Officer";
    vest[] = {"gm_ge_army_vest_80_officer"};
	sidearmWeapon[] = {"gm_pm_blk"};
	headgear[] = {"gm_pl_army_headgear_wz67_oli","gm_pl_army_headgear_wz67_net_oli"};
	Items[] += {
		"ACE_Earplugs",
        "ACE_Flashlight_KSF1",
        "ACE_Maptools",
        "ZSN_Whistle",
	};
	magazines[] = {LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk")};
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'}; {_this addItem _x} forEach ['gm_pl_army_headgear_cap_80_moro', 'gm_gc_army_facewear_schm41m'];"
};
class rto : r
{
	displayName = "Rifleman (Backpack)";
	backPack[] = {"gm_pl_army_backpack_80_oli"};
};
class fac : r
{
    displayName = "Forward Air Controller";
	sidearmWeapon[] = {"gm_wz78_blk"};
	magazines[] += {
		"gm_1Rnd_265mm_flare_single_wht_gc","gm_1Rnd_265mm_flare_single_grn_gc","gm_1Rnd_265mm_flare_single_red_gc","gm_1Rnd_265mm_flare_multi_red_gc",
		"gm_1Rnd_265mm_smoke_single_blk_gc","gm_1Rnd_265mm_smoke_single_blu_gc","gm_1Rnd_265mm_smoke_single_yel_gc"
	};
	linkedItems[] += {"gm_df7x40_blk"};
	Items[] += {
		"ACE_Maptools",
	};
};
class ar : r
{
    displayName = "Autorifleman (RPK)";
	vest[] = {"gm_pl_army_vest_80_mg_gry"};
	backPack[] = {"gm_pl_army_backpack_73_rpk_oli"};
    primaryWeapon[] = {"gm_rpk_wud"};
    magazines[] =
    {
        LIST_7("gm_75Rnd_762x39mm_B_T_M43_ak47_blk"),
        LIST_2("gm_handgrenade_frag_rgd5")
    };
};
class aar : r
{
    displayName = "Assistant Autorifleman (RPK)";
	backPack[] = {"gm_pl_army_backpack_73_rpk_oli"};
    backpackItems[] =
    {
        LIST_6("gm_75Rnd_762x39mm_B_T_M43_ak47_blk")
    };
};
class g : ar
{
    displayName = "Autorifleman (RPK + ZFK 4x25)";
	scope[] = {"gm_zfk4x25_blk"};
};
class rat : r
{
    displayName = "Anti-Tank Specialist (RPG-7)";
    secondaryWeapon[] = {"gm_rpg7_wud"};
	secondaryAttachments[] = {"gm_pgo7v_blk"};
	backPack[] = {"gm_pl_army_backpack_at_80_gry"};
	magazines[] += {LIST_4("gm_1Rnd_40mm_heat_pg7v_rpg7")};
};
class rata : r
{
	displayName = "Assistant Anti-Tank Specialist (RPG=7)";
	backPack[] = {"gm_pl_army_backpack_at_80_gry"};
	backpackItems[] = {LIST_3("gm_1Rnd_40mm_heat_pg7v_rpg7")};
};
class dm : r
{
    displayName = "Designated Marksman (AKMN + ZFK 4x25)";
	primaryWeapon[] = {"gm_akmn_wud"};
	scope[] = {"gm_zfk4x25_blk"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
	backPack[] = {"gm_pl_army_backpack_73_pk_oli"};
	primaryWeapon[] = {"gm_hmgpkm_prp"};
	magazines[] = {
		LIST_5("gm_100Rnd_762x54mm_B_T_T46_pk_grn"),
		LIST_2("gm_handgrenade_frag_rgd5")
	};
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backpackItems[] = {LIST_5("gm_100Rnd_762x54mm_B_T_T46_pk_grn")};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
	attachment[] = {};
	bipod[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "gm_gc_compass_f73",
        "ItemRadio",
        "gm_watch_kosei_80",
        "gm_df7x40_blk"
    };
    backpackItems[] = {LIST_4("gm_100Rnd_762x54mm_B_T_T46_pk_grn"),"ACE_Tripod"};
	Items[] += {"ACE_Maptools"};
};
class hmgg : r
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
	attachment[] = {};
	bipod[] = {};
};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_DShkM_Gun_Bag"};
	attachment[] = {};
	bipod[] = {};
};
class hmgag : r
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_DShkM_TripodHigh_Bag"};
    linkedItems[] +=
    {
        "gm_df7x40_blk"
    };
	Items[] += {"ACE_Maptools"};
};
class matg : rat
{
    displayName = "MAT Gunner (RPG-7)";
};
class matac : rata
{
    displayName = "MAT Ammo Carrier";
};
class matag : rata
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] +=
    {
        "gm_df7x40_blk"
    };
};
class hatg : r
{
    displayName = "HAT Gunner (Fagot)";
	backPack[] = {"gm_fagot_launcher_weaponBag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier (Unused)";
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
	linkedItems[] += {"gm_df7x40_blk"};
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"O_Mortar_01_weapon_F"};
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"O_Mortar_01_weapon_F"};
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"O_Mortar_01_support_F"};
    linkedItems[] +=
    {
        "gm_df7x40_blk"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class samg : r
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_mag_9k38_rocket'";
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] += {"gm_df7x40_blk"};
	backPack[] = {"gm_pl_army_backpack_at_80_gry"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : dm
{
    displayName = "Sniper";
	primaryWeapon[] = {"gm_svd_wud"};
	vest[] = {"gm_pl_army_vest_80_marksman_gry"};
//    traits[] += {"camouflageCoef"};
	scope[] = {"gm_pso1_gry"};
    linkedItems[] += {"gm_df7x40_blk"};
	Items[] += {"ACE_Maptools","ACE_RangeCard"};
	magazines[] = {LIST_6("gm_10Rnd_762x54mmR_AP_7N1_svd_blk")};
};
class sp : r
{
    displayName = "Spotter";
//    traits[] += {"camouflageCoef"};
	attachment[] = {};
    linkedItems[] += {"gm_df7x40_blk"};
	Items[] += {"ACE_Maptools","ACE_SpottingScope","ACE_RangeCard"};
};
class vc : baseMan
{
    displayName = "Vehicle Commander";
	sidearmWeapon[] = {"gm_pm_blk"};
	magazines[] = {LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk")};
    headgear[] = {
		"gm_gc_army_headgear_crewhat_80_blk"
	};
    linkedItems[] += {"gm_df7x40_blk"};
};
class vd : baseMan
{
    displayName = "Vehicle Driver";
	sidearmWeapon[] = {"gm_pm_blk"};
	magazines[] = {LIST_2("gm_8Rnd_9x18mm_B_pst_pm_blk")};
    headgear[] = {
		"gm_gc_army_headgear_crewhat_80_blk"
	};
	backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    traits[] += {"engineer"};
    backpackItems[] = {"ToolKit"};
};
class vg : vc
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : vc
{
    displayName = "Helicopter Pilot";
    headgear[] = {
		"gm_ge_headgear_headset_crew_oli"
	};
};
class pcc : vd
{
    displayName = "Helicopter Crew Chief";
	headgear[] = {"gm_ge_headgear_headset_crew_oli"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_df15"};
    backpack[] = {"rhs_d6_Parachute_backpack"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
	vest[] = {"rhs_6sh46"};
    goggles[] = {};
    primaryWeapon[] = {"gm_pm_blk"};
    magazines[] += {
		LIST_3("gm_8Rnd_9x18mm_B_pst_pm_blk"),
        LIST_1("gm_smokeshell_wht_gc"),
		LIST_1("gm_smokeshell_grn_gc")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
	backPack[] = {"gm_pl_army_backpack_73_demolition_oli"};
    backpackItems[] = {
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_3("gm_explosive_plnp_charge")
    };
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
	backPack[] = {"gm_ge_army_backpack_80_oli"};
    Items[] = {
        "ACE_wirecutter",
        "ACE_DefusalKit",
        "gm_mine_at_tm46"
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