// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_cu_ucp"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"rhsusf_patrolcap_ucp"};
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
	goggles[] = {
		"","","","","","rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan",
		"G_Aviator","mgsr_eyepatch_goggles","rhs_googles_black","rhs_googles_clear","rhs_googles_orange","rhs_googles_yellow","rhs_ess_black",
		"rhsusf_shemagh_gogg_grn","rhsusf_shemagh2_gogg_grn","rhsusf_shemagh_gogg_od","rhsusf_shemagh2_gogg_od","rhsusf_shemagh_gogg_tan","rhsusf_shemagh2_gogg_tan",
		"rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw"
	};
    vest[] = {"rhsusf_iotv_ucp_Rifleman"};
    headgear[] =  {"rhsusf_ach_helmet_ucp"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
	scope[] = {"rhsusf_acc_compm4"};
	attachment[] = {
		"rhsusf_acc_anpeq15side","rhsusf_acc_anpeq15_top","rhsusf_acc_anpeq15side_bk","rhsusf_acc_anpeq15_bk_top"
	};
	bipod[] = {"rhsusf_acc_grip3"};
    magazines[] =
    {
        LIST_8("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_3("ACE_CableTie"),
		"ACE_Flashlight_XL50","ACE_Earplugs","rhsusf_ANPVS_14"
    };
};
class r_light : r
{
    displayName = "Rifleman (light)";
	headgear[] = {"rhs_Booniehat_ucp"};
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhsusf_iotv_ucp_Grenadier"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
	primaryWeapon[] = {"rhs_weap_m4_m203"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_15("rhs_mag_M433_HEDP"),
		LIST_5("rhs_mag_M585_white"),
		LIST_5("rhs_mag_m714_White"),
		LIST_3("ACE_HuntIR_M203")
    };
	Items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Rifleman (M16)";
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle"};
	scope[] = {};
    silencer[] = {};
    attachment[] = {};
    bipod[] = {};
};
class m : r
{
    displayName = "Medic";
    traits[] += {"medic"};
	primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	attachment[] = {};
	bipod[] = {};
	vest[] = {"rhsusf_iotv_ucp_Medic"};
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
};
class smg : r
{
    displayName = "Breacher (M590 + Satchel)";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
	attachment[] = {};
	bipod[] = {};
    silencer[] = {};
    scope[] = {};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
	backpackItems[] = {"SatchelCharge_Remote_Mag"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader (M203)";
	primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203S"};
	goggles[] = {
		"","","","","","rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan",
	};
	headgear[] = {"rhsusf_ach_helmet_ESS_ucp"};
	scope[] = {
		"rhsusf_acc_acog","rhsusf_acc_acog2","rhsusf_acc_acog3"
	};
    vest[] = {"rhsusf_iotv_ucp_Teamleader"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    magazines[] +=
    {
        LIST_1("rhs_mag_m18_yellow"),
		LIST_1("rhs_mag_m18_purple"),
        LIST_8("rhs_mag_M441_HE"),
		LIST_4("rhs_mag_M585_white"),
		LIST_4("rhs_mag_m714_White")
    };
    linkedItems[] += {
        "rhsusf_bino_m24"
    };
};
class ftlngl : r
{
    displayName = "Fireteam Leader";
	goggles[] = {
		"","","","","","rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan",
	};
	headgear[] = {"rhsusf_ach_helmet_ESS_ucp"};
	scope[] = {
		"rhsusf_acc_acog","rhsusf_acc_acog2","rhsusf_acc_acog3"
	};
    vest[] = {"rhsusf_iotv_ucp_Teamleader"};
    magazines[] +=
    {
        LIST_1("rhs_mag_m18_yellow"),
		LIST_1("rhs_mag_m18_purple")
    };
    linkedItems[] += {
        "rhsusf_bino_m24"
    };
};
class sl : r
{
    displayName = "Squad Leader";
	vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
	headgear[] = {"rhsusf_ach_helmet_headset_ucp"};
	scope[] = {
		"rhsusf_acc_acog","rhsusf_acc_acog2","rhsusf_acc_acog3"
	};
    linkedItems[] += {
        "rhsusf_bino_m24_ARD"
    };
	Items[] += {"ACE_Maptools"};
	magazines[] += {
		LIST_2("Chemlight_red"),"rhs_mag_m18_purple","rhs_mag_m18_yellow","rhs_mag_m18_red"
	};
};
class co : ftl
{
    displayName = "Platoon Leader";
	headgear[] = {"rhsusf_ach_helmet_headset_ess_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
	magazines[] += {
		LIST_2("Chemlight_red"),"rhs_mag_m18_purple","rhs_mag_m18_yellow","rhs_mag_m18_red"
	};
};
class fac : g
{
    displayName = "Forward Air Controller";
	headgear[] = {"rhsusf_ach_helmet_headset_ucp"};
	scope[] = {
		"rhsusf_acc_acog","rhsusf_acc_acog2","rhsusf_acc_acog3"
	};
	linkedItems[] += {"rhsusf_bino_lerca_1200_black"};
	Items[] += {
		"ACE_Maptools"
	};
	magazines[] = {
		LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
		LIST_10("rhs_mag_M441_HE"),
		LIST_5("rhs_mag_M585_white"),
		"rhs_mag_m715_Green","rhs_mag_m661_green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"rhsusf_iotv_ucp_SAW"};
	backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S"};
	scope[] = {"rhsusf_acc_elcan","rhsusf_acc_elcan_ard"};
	attachment[] = {};
    magazines[] =
    {
        LIST_7("rhsusf_100rnd_556x45_mixed_soft_pouch"),
		LIST_2("rhs_mag_m67"),"rhs_mag_an_m8hc"
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
	attachment[] = {};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100rnd_556x45_mixed_soft_pouch")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
	secondaryAttachments[] = {"rhs_acc_at4_handler"};
};
class dm : r
{
    displayName = "Designated Marksman";
	primaryWeapon[] = {"rhs_weap_m14ebrri"};
    scope[] = {"rhsusf_acc_leupoldmk4"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
	magazines[] = {
		LIST_6("rhsusf_20Rnd_762x51_m118_special_Mag"),
		LIST_1("rhsusf_20Rnd_762x51_m62_Mag"),
		"rhs_mag_m67","rhs_mag_an_m8hc"
	};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240B"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
		LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_50Rnd_762x51_m61_ap"),
		LIST_3("rhsusf_50Rnd_762x51_m62_tracer"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
		"rhs_mag_m67"
    };
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_2("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_50Rnd_762x51_m61_ap"),
		LIST_1("rhsusf_50Rnd_762x51_m62_tracer"),
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
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24"
    };
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
		LIST_1("rhsusf_50Rnd_762x51_m61_ap"),
		LIST_1("rhsusf_50Rnd_762x51_m62_tracer")
    };
	Items[] += {"ACE_Maptools"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
	attachment[] = {};
	bipod[] = {};
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
	attachment[] = {};
	bipod[] = {};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
	attachment[] = {};
	bipod[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24_ARD"
    };
	Items[] += {"ACE_Maptools"};
};
class matg : r
{
    displayName = "MAT Gunner";
	attachment[] = {};
	bipod[] = {};
    secondaryWeapon[] = {"rhs_weap_maaws"};
	secondaryAttachments[] = {"rhs_optic_maaws"};
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    magazines[] +=
    {
        LIST_1("rhs_mag_maaws_HEAT"),
		LIST_1("rhs_mag_maaws_HEDP")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEDP")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
	attachment[] = {};
	bipod[] = {};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24"
    };
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEAT"),
		LIST_1("rhs_mag_maaws_HE")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
	attachment[] = {};
	bipod[] = {};
	secondaryWeapon[] = {"rhs_weap_fgm148"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_fgm148_magazine_AT'";
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {"rhs_fgm148_magazine_AT"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"B_Carryall_cbr"};
	backpackItems[] = {"rhs_fgm148_magazine_AT"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24_ARD"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"B_Mortar_01_weapon_F"};
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
	attachment[] = {};
	bipod[] = {};
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_fim92_mag'";
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "rhsusf_bino_m24_ARD"
    };
    backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
    backpackItems[] =
    {
        LIST_1("rhs_fim92_mag")
    };
};
class sn : r_light
{
    displayName = "Sniper (XM2010)";
//    traits[] += {"camouflageCoef"};
	headgear[] = {"rhsusf_ach_bare"};
    primaryWeapon[] = {"rhs_weap_XM2010"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    scope[] = {"rhsusf_acc_leupoldmk4_2"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] = {
        LIST_8("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
		"rhs_mag_an_m8hc"
    };
    linkedItems[] += {"rhsusf_bino_lerca_1200_black"};
	Items[] += {"ACE_Maptools","ACE_RangeCard"};
};
class sn2 : sn
{
	displayname = "Sniper (M24 SWS)";
	primaryWeapon[] = {"rhs_weap_m24sws"};
	scope[] = {"rhsusf_acc_leupoldmk4"};
	bipod[] = {"rhsusf_acc_harris_swivel"};
	magazines[] = {
		LIST_5("rhsusf_5Rnd_762x51_m993_Mag"),
		LIST_2("rhsusf_5Rnd_762x51_m62_Mag"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
		"rhs_mag_an_m8hc"
	};
};
class sn3 : sn
{
	displayname = "Sniper (M107)";
	primaryWeapon[] = {"rhs_weap_M107"};
	scope[] = {"rhsusf_acc_leupoldmk4_2"};
	magazines[] = {
		LIST_3("rhsusf_mag_10Rnd_STD_50BMG_M33"),
		LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
	};
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_3("ACE_CableTie"),
		"ACE_Flashlight_XL50","ACE_Earplugs"
    };
	hmd[] = {"rhsusf_ANPVS_14"};
	code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhsusf_mag_10Rnd_STD_50BMG_M33'";
};
class sp : car
{
    displayName = "Spotter";
	headgear[] = {"rhsusf_ach_bare"};
	backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
//    traits[] += {"camouflageCoef"};
	attachment[] = {};
	scope[] = {"rhsusf_acc_acog","rhsusf_acc_acog2","rhsusf_acc_acog3"};
	bipod[] = {"rhsusf_acc_harris_bipod"};
    linkedItems[] += {"rhsusf_bino_lerca_1200_black"};
	Items[] += {"ACE_Maptools","ACE_SpottingScope","ACE_RangeCard"};
};
class vc : r
{
    displayName = "Vehicle Commander";
	attachment[] = {};
	bipod[] = {};
	scope[] = {};
    vest[] = {"rhsusf_iotv_ucp"};
	backPack[] = {"rhsusf_assault_eagleaiii_ucp"};
	primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    headgear[] = {
		"rhsusf_cvc_helmet","rhsusf_cvc_alt_helmet","rhsusf_cvc_ess"
	};
    goggles[] = {};
    linkedItems[] += {"rhsusf_bino_m24","ItemGPS"};
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_3("ACE_CableTie"),
		"ACE_Flashlight_XL50","ACE_Earplugs"
    };
	magazines[] += {LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")};
};
class vd : r
{
    displayName = "Vehicle Driver";
	attachment[] = {};
	bipod[] = {};
	scope[] = {};
    traits[] += {"engineer"};
	primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {
		"rhsusf_cvc_helmet","rhsusf_cvc_alt_helmet","rhsusf_cvc_ess"
	};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		LIST_3("ACE_CableTie"),
		"ACE_Flashlight_XL50","ACE_Earplugs"
    };
    backpackItems[] = {"ToolKit"};
	magazines[] += {LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
	vest[] = {"rhsusf_iotv_ucp"};
    backpackItems[] = {};
};
class pp : r
{
    displayName = "Helicopter Pilot";
	primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
	attachment[] = {};
	bipod[] = {};
	scope[] = {};
    vest[] = {"rhsusf_iotv_ucp"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {
		"rhsusf_hgu56p_visor_black","rhsusf_hgu56p_black","rhsusf_hgu56p_visor_green","rhsusf_hgu56p_green","rhsusf_hgu56p_visor","rhsusf_hgu56p"
	};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("SmokeShellGreen"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class pcc : r
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
	primaryWeapon[] = {"rhs_weap_m4_carryhandle"};
	sidearmWeapon[] = {"rhsusf_weap_m9"};
	attachment[] = {};
	bipod[] = {};
	scope[] = {};
    vest[] = {"rhsusf_iotv_ucp_Repair"};
    backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
    headgear[] = {
		"rhsusf_hgu56p_mask_black","rhsusf_hgu56p_mask_black_skull","rhsusf_hgu56p_visor_mask_black","rhsusf_hgu56p_visor_mask_Empire_black","rhsusf_hgu56p_visor_mask_black_skull",
		"rhsusf_hgu56p_mask_green","rhsusf_hgu56p_mask_green_mo","rhsusf_hgu56p_visor_mask_green","rhsusf_hgu56p_visor_mask_green_mo",
		"rhsusf_hgu56p_mask","rhsusf_hgu56p_mask_mo","rhsusf_hgu56p_mask_skull","rhsusf_hgu56p_visor_mask","rhsusf_hgu56p_visor_mask_mo","rhsusf_hgu56p_visor_mask_skull",
		"rhsusf_hgu56p_mask_smiley","rhsusf_hgu56p_visor_mask_smiley"
	};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("SmokeShellGreen"),
		LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
	vest[] = {"rhsusf_iotv_ucp"};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_pilotCoveralls"};
    backpack[] = {"rhsusf_eject_Parachute_backpack"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        "rhs_mag_m18_yellow",
        "ACE_HandFlare_Yellow",
        "ACE_Chemlight_HiYellow"
    };
    items[] = {
        LIST_5("ACE_fieldDressing"),
        LIST_1("ACE_morphine"),
		"ACE_Maptools",
        "ACE_Earplugs"
    };
    linkedItems[] = {
        "ItemMap",
        "ItemGPS",
        "ItemCompass",
        "ItemWatch"
    };
	code = "";
};
class eng : r
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
	bipod[] = {};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_4("rhsusf_m112_mag"),
        LIST_1("rhsusf_m112x4_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class engm : r
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
	bipod[] = {};
    Items[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_9("rhsusf_mine_m14_mag"),
        LIST_1("rhs_mine_M19_mag")
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