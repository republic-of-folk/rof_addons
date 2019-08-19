class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "usm_bdu_ubn"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "H_Watchcap_blk"
    };
    goggles[] = {
        "G_Bandanna_blk",
        "G_Bandanna_aviator",
        "G_Bandanna_shades",
        "G_Bandanna_sport"
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
    vest[] = {"rhsusf_spcs_ucp_rifleman"};
    primaryWeapon[] = {"mbg_m16a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_8("mbg_mag_20Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
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
    primaryWeapon[] = {"hlc_rifle_m203"};
    magazines[] +=
    {
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m714_White")
    };
    backpack[] = {"B_AssaultPack_rgr"};
};
class car : r_light
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
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
    backpack[] = {"B_AssaultPack_rgr"};
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"V_TacChestrig_oli_F"};
    primaryWeapon[] = {"rhs_weap_pp2000"};
    magazines[] =
    {
        LIST_10("rhs_mag_9x19mm_7n21_20"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhsusf_spcs_ucp_teamleader"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhsusf_spcs_ucp_squadleader"};
    headgear[] = {"H_Beret_blk"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] +=
    {
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
    vest[] = {"rhsusf_spcs_ucp_saw"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S_para"};
    bipod[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_2("rhs_200rnd_556x45_M_SAW"),
        "rhs_200rnd_556x45_T_SAW",
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    backpack[] = {"usm_pack_200rnd_556_bandoliers"};
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"B_AssaultPack_rgr"};
    backpackItems[] =
    {
        LIST_2("rhs_200rnd_556x45_M_SAW")
    };
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        "rhs_rpg7_PG7VL_mag"
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    vest[] = {"rhsusf_spcs_ucp_sniper"};
    primaryWeapon[] = {"hlc_rifle_M14_Rail"};
    scope[] = {"hlc_optic_VOMZ3d"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
    magazines[] =
    {
        LIST_6("hlc_20Rnd_762x51_T_M14"),
        LIST_2("rhs_mag_an_m8hc")
    };
    backpack[] = {"B_AssaultPack_rgr"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {"rhsusf_acc_ELCAN"};
    bipod[] = {"bipod_01_F_blk"};
    magazines[] =
    {
        LIST_3("130Rnd_338_Mag"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag")
    };
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
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA"
    };
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        LIST_4("rhs_mag_smaw_SR")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
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
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    linkedItems[] +=
    {
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_HMG_01_support_F"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
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
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    vest[] = {"usm_vest_LBE_rmp"};
    headgear[] = {"usm_bdu_boonie_ubn"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m24sws"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    bipod[] = {"bipod_03_F_oli"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_12("rhsusf_5Rnd_762x51_m62_Mag"),
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
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
    scope[] = {"rhsusf_acc_ACOG"};
    linkedItems[] +=
    {
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
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_Cap_headphones"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    vest[] = {"rhsusf_spcs_ucp_crewman"};
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
    vest[] = {"rhsusf_spcs_ucp_crewman"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
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
    backPack[] = {"B_Carryall_oli"};
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
    backPack[] = {"B_Carryall_oli"};
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