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
    headgear[] =  {"rhsgref_helmet_M1_bare","rhsgref_helmet_M1_bare_alt01","rhsgref_helmet_M1_painted","rhsgref_helmet_M1_painted_alt01"};
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
        LIST_1("ACE_epinephrine")
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
    vest[] = {"usm_vest_lbe_gr"};
    backpack[] = {"B_FieldPack_oli"};
    sidearmWeapon[] = {"rhs_weap_M320"};
    magazines[] =
    {
        LIST_6("hlc_20Rnd_762x51_B_fal"),
        LIST_1("rhs_mag_rdg2_white"),
        LIST_8("rhs_mag_M433_HEDP"),
        LIST_4("rhs_mag_m714_White")
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
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a3"};
    silencer[] = {};
    scope[] = {};
    magazines[] =
    {
        LIST_6("hlc_30Rnd_9x19_B_MP5"),
        LIST_1("rhs_mag_rgd5"),
        LIST_1("rhs_mag_rdg2_white")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"usm_vest_lbv_rm"};
    backpack[] = {};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green"),
        LIST_2("rhs_mag_m713_Red"),
        LIST_2("SmokeShellGreen")
    };
    linkedItems[] += {
        "rhs_pdu4",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    backpack[] = {"usm_pack_st138_prc77"};
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
    primaryWeapon[] = {"rhs_weap_minimi_para_railed"};
    sidearmWeapon[] = {"rhsusf_weap_glock17g4"};
    bipod[] = {};
    silencer[] = {};
    backpack[] = {"B_FieldPack_oli"};
    magazines[] =
    {
        LIST_3("rhs_200rnd_556x45_M_SAW"),
        LIST_2("rhsusf_mag_17Rnd_9x19_JHP")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_3("rhs_200rnd_556x45_M_SAW")
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
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_mag_7x45acp_MHP")
    };
    backPack[] = {"usm_pack_762x51_ammobelts"};
};
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class mmgag : r
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
    backPack[] = {"usm_pack_762x51_ammobelts"};
    backpackItems[] =
    {
        LIST_1("rhsusf_100Rnd_762x51")
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
    secondaryWeapon[] = {"rhs_weap_maaws"};
    backPack[] = {"rhssaf_alice_smb"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT"        
    };
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEDP"),
        LIST_1("rhs_mag_maaws_HEAT")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEAT"),
        LIST_2("rhs_mag_maaws_HEDP")
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
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_1("rhs_mag_maaws_HEAT"),
        LIST_2("rhs_mag_maaws_HEDP")
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
    backPack[] = {"I_Mortar_01_support_F"};
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
    backPack[] = {"rhssaf_alice_smb"};
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
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_I_FullGhillie_lsh"};
    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
    magazines[] = {
        LIST_8("hlc_20Rnd_762x51_B_M14"),
        LIST_1("rhs_mag_rdg2_white")
    };
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_I_FullGhillie_lsh"};
    linkedItems[] += {"rhs_pdu4","ItemGPS"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_tsh4"};
    goggles[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    headgear[] = {"rhs_tsh4"};
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
    headgear[] = {"rhs_zsh7a_mike"};
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
    headgear[] = {"rhs_zsh7a"};
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
    backpack[] = {};
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_I_pilotCoveralls"};
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"usm_pack_st138_prc77"};
    headgear[] = {"rhs_zsh7a"};
    goggles[] = {};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_4("rhs_mag_9x19_17")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhssaf_alice_smb"};
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
    backpack[] = {"rhssaf_alice_smb"};
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
    linkedItems[] += {"O_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"I_UAV_01_backpack_F"};
};