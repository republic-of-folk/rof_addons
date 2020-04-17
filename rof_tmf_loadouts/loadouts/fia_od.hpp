class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "usm_bdu_odg"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {
        "","","","",
        "murshun_cigs_cig1","murshun_cigs_cig2","murshun_cigs_cig3","murshun_cigs_cig4"
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
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"usm_bdu_cap_odg"};
    vest[] = {"usm_vest_LBE_rm"};
    primaryWeapon[] = {"mbg_m16a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_9("mbg_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
    };
    backpack[] = {"B_simc_USMC65_M41", "B_simc_USMC65_M41_Roll", "B_simc_USMC65_M41_Roll2"};
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    magazines[] =
    {
        LIST_6("mbg_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_LBE_gr"};
    primaryWeapon[] = {"hlc_rifle_m203"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m714_White")
    };    
};
class car : r
{
    displayName = "Shotgunner (Carabinier)";
    vest[] = {"usm_vest_LBE_gr"};
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
        LIST_3("rhsusf_8Rnd_Slug"),
        LIST_3("rhsusf_mag_7x45acp_MHP"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class m : r_light 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
    items[] = {};
    backpack[] = {"B_simc_USMC65_M41", "B_simc_USMC65_M41_Roll", "B_simc_USMC65_M41_Roll2"};
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"V_TacChestrig_oli_F"};
    primaryWeapon[] = {"hlc_wp_mod733"};
    magazines[] =
    {
        LIST_8("rhs_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
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
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"usm_bdu_8point_odg"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
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
    headgear[] = {"H_Beret_blk"};
};
class fac : r_light
{
    displayName = "Radioman";
    backpack[] = {"usm_pack_st138_prc77_empty"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"usm_vest_LBE_mg_m"};
    primaryWeapon[] = {"rhs_weap_m249"};
    bipod[] = {"rhsusf_acc_saw_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_3("rhsusf_200rnd_556x45_mixed_box"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"B_simc_USMC65_M41", "B_simc_USMC65_M41_Roll", "B_simc_USMC65_M41_Roll2"};
    backpackItems[] =
    {
        LIST_2("rhsusf_200rnd_556x45_mixed_box")
    };
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryMagazine[] = {"rhs_rpg7_PG7VL_mag"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7VL_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_M14_Bipod"};
    scope[] = {"hlc_optic_artel_m14"};
    magazines[] =
    {
        LIST_9("20Rnd_762x51_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    primaryMagazine[] = {"hlc_200Rnd_762x51_Barrier_M60E4"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    backpack[] = {"B_simc_USMC65_M41_M43"};
    magazines[] =
    {
        LIST_2("hlc_200Rnd_762x51_Barrier_M60E4"),
        LIST_3("rhsusf_mag_7x45acp_MHP"),
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
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_simc_USMC65_M41_M43"};
    backpackItems[] =
    {
        LIST_1("hlc_200Rnd_762x51_Barrier_M60E4"),
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_2("hlc_200Rnd_762x51_Barrier_M60E4"),
    };
};
class hmgg : r_light
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgg_csw : smg
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_nsv_carry"};
};
class hmgag_csw : r_light
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class hmgac_csw : r_light
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_6("ace_csw_50Rnd_127x108_mag"),
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    secondaryMagazine[] = {"rhs_mag_smaw_HEAA"};
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP"),
        LIST_4("rhs_mag_smaw_SR"),
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
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_smaw_HEAA"),
        LIST_1("rhs_mag_smaw_HEDP"),
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA"),
        LIST_2("rhs_mag_smaw_HEDP"),
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner (Legacy)";
    backPack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatg_csw : r_light
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_tow_carry"};
};
class hatag_csw : r_light
{
    displayName = "HAT Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class hatac_csw : r_light
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_2("ace_compat_rhs_usf3_mag_TOW2A"),
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner (Legacy)";
    backPack[] = {"I_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner (Legacy)";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrg_csw : r_light
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrag_csw : r_light
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpack[] = {"B_Kitbag_rgr"};
};
class mtrac_csw : r_light
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_8("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_3("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    vest[] = {"usm_vest_LBE_rmp"};
    headgear[] = {"usm_bdu_boonie_odg"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m24sws_ghillie"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2_d"};
    bipod[] = {"bipod_03_F_oli"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_12("rhsusf_5Rnd_762x51_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {};
    backpackItems[] = {};
};
class sp : sn
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    vest[] = {"usm_vest_LBE_gr_m"};
    primaryWeapon[] = {"hlc_rifle_m203"};
    scope[] = {"rhsusf_acc_ACOG"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    magazines[] =
    {
        LIST_6("mbg_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green"),
        LIST_2("rhs_mag_an_m8hc"),
        LIST_6("rhs_mag_M433_HEDP"),
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_Cap_headphones"};
    backpack[] = {"B_simc_USMC65_M41"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
    backpack[] = {"B_simc_USMC65_M41"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {"B_simc_USMC65_M41"};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    headgear[] = {"H_Hat_Safari_sand_F"};
    goggles[] = {"G_Aviator"};
    backpack[] = {"B_simc_USMC65_M41"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    backpack[] = {"B_simc_USMC65_M41"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    backpack[] = {"B_simc_USMC65_M41"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"rhssaf_alice_smb"};
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
    backPack[] = {"rhssaf_alice_smb"};
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
    linkedItems[] += {"B_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"B_UAV_01_backpack_F"};
};