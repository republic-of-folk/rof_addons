class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "usm_bdu_blk"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "rhssaf_helmet_m97_black_nocamo"
    };
    goggles[] = {
        ""
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
    //code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {
        "audibleCoef",
        "camouflageCoef"
    };
};
class r : baseMan
{
    displayName = "Rifleman";

    hmd[] = {"NVGoggles_OPFOR"};

    vest[] = {"usm_vest_LBE_rmp"};
    backpack[] = {"B_simc_USMC65_M41"};

    primaryWeapon[] = {"hlc_smg_mp5a3"};
    silencer[] = {"muzzle_snds_L"};
    attachment[] = {"hlc_acc_Surefiregrip"};
    scope[] = {};

    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    sidearmAttachments[] = {"rhsusf_acc_omega9k", "hlc_acc_DBALPL_FL"};

    magazines[] =
    {
        LIST_8("hlc_30Rnd_9x19_SD_MP5"),
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
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
        LIST_6("hlc_30Rnd_9x19_SD_MP5"),
        LIST_2("rhsusf_mag_17Rnd_9x19_FMJ"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    primaryWeapon[] = {"hlc_smg_9mmar"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r_light
{
    displayName = "Carabinier";
};
class m : r_light 
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpack[] = {"B_AssaultPack_rgr"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
};
class smg : r
{
    displayName = "Submachinegunner";
    vest[] = {"usm_vest_lbv_rm"};
    primaryWeapon[] = {"hlc_smg_mp5k_PDW"};
    silencer[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_7("hlc_30Rnd_9x19_B_MP5"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("UGL_FlareCIR_F")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"H_Beret_blk"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] +=
    {
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
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
    primaryWeapon[] = {"hlc_rifle_m14dmr"};
    scope[] = {"hlc_optic_artel_m14"};
    silencer[] = {};
    magazines[] =
    {
        LIST_11("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_3("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
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
        "ItemRadio",
        "ItemWatch",
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
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
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
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
    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_PVS4M14"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
    magazines[] =
    {
        LIST_9("hlc_20Rnd_762x51_S_M14"),
        LIST_3("rhsusf_mag_17Rnd_9x19_FMJ")
    };
    backpack[] = {"B_simc_USMC65_M41"};
    backpackItems[] = {};
};
class sp : ftl
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"usm_bdu_odg"};
    backpack[] = {"usm_pack_st138_prc77"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    uniform[] = {"usm_bdu_odg"};
    backpack[] = {"B_AssaultPack_rgr"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"usm_bdu_odg"};
    backpack[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"usm_bdu_odg"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"usm_bdu_odg"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    hmd[] = {"NVGoggles_OPFOR"};
    uniform[] = {"usm_bdu_odg"};
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
        LIST_2("SatchelCharge_Remote_Mag"),
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