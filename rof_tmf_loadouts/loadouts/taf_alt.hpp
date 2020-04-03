// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_ERDL"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
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
    vest[] = {"usm_vest_LBE_rm"};
    headgear[] =  {"rhsgref_helmet_M1_bare","rhsgref_helmet_M1_bare_alt01","rhsgref_helmet_M1_painted","rhsgref_helmet_M1_painted_alt01","rhsgref_helmet_M1_liner"};
    primaryWeapon[] = {"hlc_rifle_L1A1SLR"};
    magazines[] =
    {
        LIST_8("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		"ACE_Flashlight_MX991","ACE_CableTie","ACE_Earplugs"
    };
};
class r_light : r
{
    displayName = "Rifleman (light)";
	headgear[] = {"usm_bdu_boonie_erdl"};
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_lbe_gr"};
	primaryWeapon[] = {"rhs_weap_m79"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_5("rhsusf_mag_7x45acp_MHP"),
        LIST_20("rhs_mag_M441_HE"),
        LIST_6("rhs_mag_m714_White"),
		LIST_3("rhs_mag_M585_white"),
		LIST_3("rhs_mag_m576")
    };
};
class car : r
{
    displayName = "Shotgunner (Carabinier)";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    silencer[] = {};
    attachment[] = {};
    bipod[] = {};
    magazines[] = {
        LIST_6("rhsusf_8Rnd_00Buck"),
        LIST_6("rhsusf_8Rnd_Slug")
    };
};
class m : r_light 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backPack[] = {"rhs_medic_bag"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
};
class smg : r_light
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a3"};
    silencer[] = {};
    scope[] = {};
    magazines[] =
    {
        LIST_8("hlc_30Rnd_9x19_B_MP5"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    vest[] = {"usm_vest_LBE_rmp"};
	sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    backpack[] = {};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
	headgear[] = {"usm_bdu_cap_erdl"};
    backpack[] = {"usm_pack_st138_prc77"};
	Items[] += {
		"ACE_Maptools","ZSN_Whistle"
	};
};
class co : sl
{
    displayName = "Platoon Leader";
	headgear[] = {"usm_bdu_8point_erdl"};
};
class fac : ftl
{
    displayName = "Forward Air Controller";
	headgear[] = {"usm_bdu_boonie_erdl"};
    backpack[] = {"usm_pack_st138_prc77"};
	linkedItems[] += {"rhs_pdu4"};
	Items[] += {
		"ACE_Maptools"
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"usm_vest_LBE_mg_m"};
    primaryWeapon[] = {"rhs_weap_m249"};
    magazines[] =
    {
        LIST_6("rhsusf_100rnd_556x45_mixed_soft_pouch")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_6("rhsusf_100rnd_556x45_mixed_soft_pouch")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"hlc_optic_suit"};
};
class dmnv: dm
{
	displayName = "Designated Marksman (NV)";
	scope[] = {"hlc_optic_pvs4fal"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    primaryMagazine[] = {"hlc_100Rnd_762x51_M_M60E4"}; // array is not randomized - it's in case of grenade launchers
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_1("hlc_100Rnd_762x51_M_M60E4"),
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backpackItems[] = {
        LIST_1("hlc_100Rnd_762x51_M_M60E4")
    };
    backPack[] = {"usm_pack_762x51_ammobelts_empty"};
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_3("hlc_100Rnd_762x51_M_M60E4"),
		LIST_1("hlc_100Rnd_762x51_T_M60E4"),
		"ACE_Tripod"
    };
};
class mmgag : r
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
    backPack[] = {"B_simc_USMC65_M41"};
    backpackItems[] =
    {
        LIST_1("hlc_100Rnd_762x51_M_M60E4")
    };
	Items[] += {"ACE_Maptools"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
	Items[] += {"ACE_Maptools"};
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backPack[] = {"B_FieldPack_oli"};
    magazines[] +=
    {
        LIST_2("rhs_mag_maaws_HEAT")        
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT"),
        LIST_1("rhs_mag_maaws_HE")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEAT"),
		LIST_1("rhs_mag_maaws_HEDP"),
        LIST_1("rhs_mag_maaws_HE")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
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
    backPack[] = {"I_Mortar_01_weapon_F"};
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
	Items[] += {
		"ACE_RangeTable_82mm","ACE_Maptools"
	};
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"rhsgref_hidf_alicepack"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular"
    };
    backPack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r_light
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
	vest[] = {"V_TacChestrig_grn_F"};
    primaryWeapon[] = {"hlc_rifle_M21"};
    primaryMagazine[] = {"hlc_20Rnd_762x51_B_M14"};
    scope[] = {"hlc_optic_artel_m14"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
    magazines[] = {
        LIST_7("hlc_20Rnd_762x51_B_M14"),
        LIST_1("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"rhs_pdu4"};
	items[] += {"ACE_Maptools","ACE_RangeCard"};
    backpack[] = {"B_simc_USMC65_M41"};
};
class snnv : sn
{
	displayName = "Sniper (Starlight Scope)";
	scope[] = {"hlc_optic_pvs4m14"};
};
class sp : r_light
{
    displayName = "Spotter";
	silencer[] = {"hlc_muzzle_300blk_kac"};
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    linkedItems[] += {"rhs_pdu4"};
	items[] += {"ACE_Maptools","ACE_SpottingScope","ACE_RangeCard"};
    backpack[] = {"B_simc_USMC65_M41"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"usm_helmet_cvc"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"usm_helmet_cvc"};
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
    uniform[] = {"U_I_pilotCoveralls"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a_mike_green_alt"};
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
    uniform[] = {"U_I_pilotCoveralls"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"B_FieldPack_oli"};
    headgear[] = {"rhs_zsh7a_mike_green"};
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
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_I_pilotCoveralls"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    goggles[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_5("rhsusf_mag_7x45acp_MHP"),"SmokeShellBlue"
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		"ACE_Maptools","ACE_Earplugs","ACE_Flashlight_MX991"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_4("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag"),
        LIST_1("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    Items[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_10("rhsusf_mine_m14_mag"),
        LIST_2("rhs_mine_M19_mag")
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