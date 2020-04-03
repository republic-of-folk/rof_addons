// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhsgref_uniform_og107", "rhsgref_uniform_og107_erdl"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {
        "","","","","","rhsusf_shemagh_white","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan"
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
    headgear[] =  {"ssh68_camo_yel", "ssh68_khaki"};
    primaryWeapon[] = {"hlc_rifle_FAL5000"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
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
		LIST_1("ACE_CableTie"),
		LIST_1("ACE_Flashlight_MX991"),
		LIST_1("ACE_Earplugs")
    };
};
class r_light : r
{
    displayName = "Rifleman (light)";
    magazines[] = 
    {
        LIST_6("hlc_20Rnd_762x51_B_fal"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class g : r_light
{
    displayName = "Grenadier";
	vest[] = {"usm_vest_LBE_gr"};
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"rhs_weap_m79"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    silencer[] = {};
    magazines[] =
    {
        LIST_4("rhs_mag_9x18_8_57N181S"),
        LIST_1("rhs_mag_rdg2_white"),
        LIST_20("rhs_mag_M441_HE"),
        LIST_6("rhs_mag_m714_White"),
		LIST_3("rhs_mag_M585_white"),
		LIST_3("rhs_mag_m576")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"hlc_rifle_FAL5061"};
};
class m : car 
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
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_scorpion"};
    silencer[] = {};
    scope[] = {};
    magazines[] =
    {
        LIST_6("rhsgref_20rnd_765x17_vz61"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    backpack[] = {};
	primaryWeapon[] = {"mbg_m16a2"};
    magazines[] =
    {
        LIST_2("SmokeShellRed"),
        LIST_2("SmokeShellGreen"),
        LIST_10("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
    linkedItems[] += {
        "Binocular"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhsgref_6b23_khaki_nco"};
    backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] += {
        LIST_2("rhs_mag_9x18_8_57N181S")
    };
	items[] += {"ZSN_Whistle","ACE_MapTools"};
};
class co : sl
{
    displayName = "Platoon Leader";
	vest[] = {"rhs_6b5_officer"};
	headgear[] = {"usm_bdu_cap_odg"};
};
class fac : ftl
{
    displayName = "Forward Air Controller";
	headgear[] = {"usm_bdu_cap_odg"};
    backpack[] = {"usm_pack_st138_prc77"};
    primaryWeapon[] = {"hlc_rifle_FAL5061"};
	sidearmWeapon[] = {"rhs_weap_makarov_pm"};
	items[] += {"ACE_MapTools"};
	linkedItems[] += {"rhs_pdu4"};
	magazines[] = {
		LIST_2("rhs_mag_9x18_8_57N181S"),
        LIST_2("SmokeShellRed"),
        LIST_2("SmokeShellGreen"),
        LIST_8("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
	};
};
class ar : r
{
    displayName = "Automatic Rifleman";
	vest[] = {"RPS_Smersh6_sh"};
    primaryWeapon[] = {"rhs_weap_m84"};
    bipod[] = {};
    silencer[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR")
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
//    backpack[] = {"rhs_sidor"};
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addSecondaryWeaponItem 'rhs_rpg7_PG7V_mag';";
//    backpackItems[] = {
//        LIST_1("rhs_rpg7_PG7V_mag")
//    };
};
class dm : r
{
    displayName = "Designated Marksman";
    silencer[] = {};
    scope[] = {"hlc_optic_suit"};
    bipod[] = {};
};
class dmnv: dm
{
	displayName = "Designated Marksman (NV)";
	scope[] = {"hlc_optic_pvs4fal"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"RPS_Smersh5_sh","RPS_Smersh3_sh"};
	weaponMagazine[] = {"rhssaf_250Rnd_762x54R"};
    magazines[] =
    {
        LIST_2("rhssaf_250Rnd_762x54R"),
        "rhs_mag_rgd5",
        "rhs_mag_rdg2_white"
    };
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};_this addItem 'rhssaf_250Rnd_762x54R';";
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"usm_pack_762x51_bandoliers"};
    backpackItems[] =
    {
        LIST_2("rhssaf_250Rnd_762x54R")
    };
};
class mmgag : mmgac
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
	Items[] += {"ACE_MapTools"};
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_NSV_Gun_Bag"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_NSV_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_NSV_Tripod_Bag"};
    linkedItems[] +=
    {
        "rhs_pdu4"
    };
	Items[] += {"ACE_MapTools"};
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
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
    backpack[] = {"RHS_Kornet_Gun_Bag"};
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"RHS_Kornet_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"RHS_Kornet_Tripod_Bag"};
    linkedItems[] +=
    {
        "rhs_pdu4"
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
    linkedItems[] += {
        "rhs_pdu4"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backPack[] = {"B_FieldPack_oli"};
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
    backPack[] = {"B_FieldPack_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "rhs_pdu4"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_9k38_rocket")
    };
};
class sn : r
{
    displayName = "Sniper";
//    traits[] += {"camouflageCoef"};
    vest[] = {"RPS_Smersh17_sh"};
    goggles[] = {};
    primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m2"};
    bipod[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_13("rhs_10Rnd_762x54mmR_7N1"),
        "rhs_mag_rgd5",
        LIST_5("rhs_mag_9x18_8_57N181S")
    };
    backpack[] = {};
    linkedItems[] += {"rhs_pdu4"};
};
class sp : sn
{
    displayName = "Spotter";
//    traits[] += {"camouflageCoef"};
    vest[] = {"usm_vest_LBE_rm"};
    primaryWeapon[] = {"hlc_rifle_FAL5000"};
	sidearmWeapon[] = {};
    scope[] = {"hlc_optic_suit"};
    magazines[] =
    {
        LIST_7("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_rdg2_white")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"345th_RD_webbing"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"345th_RD_webbing"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
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
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt","rhs_zsh7a_mike_green","rhs_zsh7a_mike_green_alt"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	Items[] += {"ACE_MapTools"};
    magazines[] += {
        LIST_2("SmokeShellGreen")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    headgear[] = {"rhs_zsh7a_mike","rhs_zsh7a_mike_alt","rhs_zsh7a_mike_green","rhs_zsh7a_mike_green_alt"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
	Items[] += {"ACE_MapTools"};
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
    uniform[] = {"rhs_uniform_df15_tan"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] =
    {
        LIST_6("rhs_mag_9x18_8_57N181S")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
		"ACE_MapTools","ACE_Earplugs","ACE_Flashlight_KSF1"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"rhsgref_6b23_khaki"};
    backpack[] = {"usm_pack_alice"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_4("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"rhsgref_6b23_khaki"};
    backpack[] = {"usm_pack_alice"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_DefusalKit",
        LIST_10("rhs_mine_pmn2_mag"),
        LIST_2("rhs_mine_tm62m_mag")
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