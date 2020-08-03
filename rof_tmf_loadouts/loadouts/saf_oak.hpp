// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhssaf_uniform_m93_oakleaf_summer"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"rhssaf_beret_green"};
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
    displayName = "Rifleman (M70)";
	goggles[] = {
		"","","","","",
		"G_Aviator","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted",
		"G_Aviator","G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted",
		"mgsr_eyepatch_goggles"
	};
    vest[] = {"rhssaf_vest_md99_woodland_rifleman"};
	backpack[] = {"rhssaf_kitbag_smb"};
    headgear[] =  {"rhssaf_helmet_m59_85_oakleaf"};
    primaryWeapon[] = {"rhs_weap_m70b3n"};
	scope[] = {};
	attachment[] = {};
	bipod[] = {};
    magazines[] =
    {
        LIST_10("rhssaf_30Rnd_762x39mm_M67"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
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
	headgear[] = {"rhssaf_bandana_oakleaf"};
	primaryWeapon[] = {"rhs_weap_m70ab2"};
};
class g : r
{
    displayName = "Grenadier";
	primaryWeapon[] = {"rhs_weap_m70b3n_pbg40"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
		LIST_2("rhs_GRD40_White"),
		LIST_1("rhs_GRD40_Green"),
		LIST_1("rhs_GRD40_Red")
    };
	Items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Rifleman (M21)";
    primaryWeapon[] = {"rhs_weap_m21a"};
	scope[] = {};
    silencer[] = {};
    attachment[] = {};
    bipod[] = {};
    magazines[] =
    {
        LIST_10("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
};
class m : r
{
    displayName = "Medic";
    traits[] += {"medic"};
	vest[] = {"rhssaf_vest_md99_woodland_radio"};
	headgear[] = {"rhssaf_helmet_m97_olive_nocamo","rhssaf_helmet_m97_oakleaf"};
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
    displayName = "Submachinegunner (Suppressed)";
    primaryWeapon[] = {"rhs_weap_m92"};
	silencer[] = {"rhs_acc_pbs1"};
};
class ftl : r
{
    displayName = "Fireteam Leader (PBG40)";
	primaryWeapon[] = {"rhs_weap_m70b3n_pbg40"};
	headgear[] = {"rhssaf_helmet_m97_oakleaf","rhssaf_helmet_m97_oakleaf_black_ess","rhssaf_helmet_m97_oakleaf_black_ess_bare"};
    vest[] = {"rhssaf_vest_md98_rifleman"};
    magazines[] +=
    {
        LIST_6("rhs_VOG25"),
		LIST_2("rhs_GRD40_White"),
		LIST_1("rhs_GRD40_Green"),
		LIST_1("rhs_GRD40_Red"),
		LIST_1("rhssaf_mag_brd_m83_blue")
    };
    linkedItems[] += {
        "rhssaf_zrak_rd7j"
    };
};
class ftlngl : r
{
    displayName = "Fireteam Leader";
	headgear[] = {"rhssaf_helmet_m97_oakleaf","rhssaf_helmet_m97_oakleaf_black_ess","rhssaf_helmet_m97_oakleaf_black_ess_bare"};
    vest[] = {"rhssaf_vest_md98_rifleman"};
    magazines[] +=
    {
        LIST_1("rhssaf_mag_brd_m83_blue")
    };
    linkedItems[] += {
        "rhssaf_zrak_rd7j"
    };
};
class sl : ftlngl
{
    displayName = "Squad Leader";
	vest[] = {"rhssaf_vest_md99_woodland_rifleman_radio"};
    linkedItems[] += {
        "ItemGPS"
    };
	Items[] += {"ACE_Maptools"};
};
class co : sl
{
    displayName = "Platoon Leader";
	primaryWeapon[] = {"rhs_weap_m21a"};
	headgear[] = {"rhssaf_beret_green"};
	vest[] = {"rhssaf_vest_md99_woodland_radio"};
    magazines[] =
    {
        LIST_10("rhsgref_30rnd_556x45_m21"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green"),
        LIST_1("rhssaf_mag_brd_m83_blue")
    };
};
class fac : g
{
    displayName = "Forward Air Controller";
	headgear[] = {"rhssaf_beret_green"};
	linkedItems[] += {"rhs_pdu4"};
	Items[] += {
		"ACE_Maptools"
	};
};
class ar : r
{
    displayName = "Machinegunner (M84)";
	vest[] = {"rhssaf_vest_md98_woodland"};
	headgear[] = {"rhssaf_helmet_m97_oakleaf"};
    primaryWeapon[] = {"rhs_weap_m84"};
    magazines[] =
    {
        LIST_4("rhs_100Rnd_762x54mmR"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M80"};
};
class dm : r
{
    displayName = "Designated Marksman";
	headgear[] = {"rhssaf_booniehat_woodland"};
	vest[] = {"rhssaf_vest_md99_woodland_radio"};
	primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m2"};
	magazines[] = {
		LIST_9("rhs_10Rnd_762x54mmR_7N1"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
	};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    magazines[] =
    {
        LIST_2("rhssaf_250Rnd_762x54R"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhssaf_250Rnd_762x54R';";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backpackItems[] =
    {
        LIST_1("rhssaf_250Rnd_762x54R"),
		LIST_1("rhs_100Rnd_762x54mmR_green"),
		"ACE_Tripod"
    };
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
	attachment[] = {};
	bipod[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_1("rhssaf_250Rnd_762x54R"),
		LIST_1("rhs_100Rnd_762x54mmR_green")
    };
	Items[] += {"ACE_Maptools"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
	vest[] = {"V_Chestrig_oli"};
	attachment[] = {};
	bipod[] = {};
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_NSV_Gun_Bag"};
	vest[] = {"V_Chestrig_oli"};
	attachment[] = {};
	bipod[] = {};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_NSV_Tripod_Bag"};
	vest[] = {"V_Chestrig_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
	Items[] += {"ACE_Maptools"};
};
class matg : r
{
    displayName = "MAT Gunner";
	headgear[] = {"rhssaf_helmet_m97_oakleaf"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    magazines[] +=
    {
        LIST_1("rhs_mag_smaw_HEAA")
    };
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhs_mag_smaw_HEAA';";
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	backPack[] = {"rhssaf_alice_smb"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP")
    };
};
class hatg : r
{
    displayName = "HAT Gunner";
	vest[] = {"V_Chestrig_oli"};
	backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
	vest[] = {"V_Chestrig_oli"};
    backPack[] = {"RHS_Metis_Gun_Bag"};
};
class hatag : r
{
    displayName = "HAT Assistant Gunner";
	vest[] = {"V_Chestrig_oli"};
	backPack[] = {"RHS_Metis_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
	vest[] = {"V_Chestrig_oli"};
    backPack[] = {"I_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
	vest[] = {"V_Chestrig_oli"};
    backPack[] = {"I_Mortar_01_weapon_F"};
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
	vest[] = {"V_Chestrig_oli"};
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class samg : r
{
    displayName = "AA Missile Specialist";
	headgear[] = {"rhssaf_helmet_m97_oakleaf"};
    secondaryWeapon[] = {"rhs_weap_igla"};
	magazines[] += {"rhs_mag_9k38_rocket"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_mag_9k38_rocket'";
};
class samag : r
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhssaf_zrak_rd7j"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : dm
{
    displayName = "Sniper";
//    traits[] += {"camouflageCoef"};
	scope[] = {"rhs_acc_pso1m2"};
    linkedItems[] += {"rhs_pdu4"};
	Items[] += {"ACE_Maptools","ACE_RangeCard"};
};
class sp : r_light
{
    displayName = "Spotter";
	headgear[] = {"rhssaf_booniehat_woodland"};
//    traits[] += {"camouflageCoef"};
	attachment[] = {};
    linkedItems[] += {"rhs_pdu4"};
	Items[] += {"ACE_Maptools","ACE_SpottingScope","ACE_RangeCard"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
	silencer[] = {};
    vest[] = {"rhssaf_vest_md99_woodland"};
    headgear[] = {
		"rhs_tsh4_ess"
	};
    goggles[] = {};
    linkedItems[] += {"rhssaf_zrak_rd7j","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
	silencer[] = {};
    vest[] = {"rhssaf_vest_md99_woodland"};
    traits[] += {"engineer"};
    headgear[] = {
		"rhs_tsh4"
	};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : baseMan
{
    displayName = "Helicopter Pilot";
	primaryWeapon[] = {"rhs_weap_scorpion"};
	uniform[] = {"rhssaf_uniform_heli_pilot"};
	vest[] = {"rhs_6sh46"};
    headgear[] = {
		"rhsusf_hgu56p_saf","rhsusf_hgu56p_visor_saf"
	};
    goggles[] = {};
    linkedItems[] += {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
    magazines[] += {
		LIST_5("rhsgref_20rnd_765x17_vz61"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_CableTie"),
		"ACE_Flashlight_KSF1","ACE_Earplugs"
    };
};
class pcc : baseMan
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
	uniform[] = {"rhssaf_uniform_heli_pilot"};
	vest[] = {"rhs_6sh46"};
	primaryWeapon[] = {"rhs_weap_scorpion"};
    headgear[] = {
		"rhsusf_hgu56p_mask_saf","rhsusf_hgu56p_visor_mask_saf"
	};
    goggles[] = {};
    linkedItems[] += {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
    magazines[] += {
		LIST_5("rhsgref_20rnd_765x17_vz61"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_CableTie"),
		"ACE_Flashlight_KSF1","ACE_Earplugs"
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhssaf_uniform_mig29_pilot"};
    backpack[] = {"rhs_d6_Parachute_backpack"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
	vest[] = {"rhs_6sh46"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_scorpion"};
    magazines[] += {
		LIST_5("rhsgref_20rnd_765x17_vz61"),
        LIST_2("rhssaf_mag_br_m75"),
        LIST_1("rhssaf_mag_brd_m83_white"),
		LIST_1("rhssaf_mag_brd_m83_green")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_1("ACE_CableTie"),
		"ACE_Flashlight_KSF1","ACE_Earplugs"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
	vest[] = {"rhssaf_vest_md99_woodland"};
	headgear[] = {"rhssaf_helmet_m97_olive_nocamo","rhssaf_helmet_m97_olive_nocamo_black_ess","rhssaf_helmet_m97_olive_nocamo_black_ess_bare"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_10("rhssaf_tm100_mag"),
        LIST_6("rhssaf_tm200_mag"),
        LIST_3("rhssaf_tm500_mag")
    };
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhssaf_mine_mrud_d_mag'";
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
	vest[] = {"rhssaf_vest_md99_woodland"};
	headgear[] = {"rhssaf_helmet_m97_olive_nocamo","rhssaf_helmet_m97_olive_nocamo_black_ess","rhssaf_helmet_m97_olive_nocamo_black_ess_bare"};
    Items[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_DefusalKit",
        LIST_15("rhssaf_mine_pma3_mag"),
        LIST_1("rhssaf_mine_tma4_mag"),
		LIST_1("rhssaf_mine_mrud_a_mag")
    };
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhssaf_mine_tma4_mag'";
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
	vest[] = {"V_Chestrig_oli"};
    traits[] += {"UAVHacker"};
    linkedItems[] += {"I_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
	vest[] = {"V_Chestrig_oli"};
    backpack[] = {"I_UAV_01_backpack_F"};
};