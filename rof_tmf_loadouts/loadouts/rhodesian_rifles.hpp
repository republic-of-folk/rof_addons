class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "M93_Rhodesian_B",
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "UK_beret"
    };
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
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";
};
class r : baseMan
{
    displayName = "Rifleman";
    vest[] = {
        "V_TacChestrig_grn_F"
    };
    backpack[] = {
        "B_simc_USMC65_M41_M43",
        "B_simc_USMC65_M41_M43_roll",
        "B_simc_USMC65_M41_M43_roll2"
    };
    primaryWeapon[] = {
        "hlc_rifle_L1A1SLR"
    };
    magazines[] =
    {
        LIST_9("hlc_20Rnd_762x51_B_fal"),
        LIST_2("rhs_mag_m67")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_EntrenchingTool"),
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    backpack[] = {
        "B_simc_USMC65_M41",
        "B_simc_USMC65_M41_roll",
        "B_simc_USMC65_M41_roll2"
    };
    magazines[] =
    {
        LIST_6("hlc_20Rnd_762x51_B_fal"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class g : r_light
{
    displayName = "Grenadier";
};
class car : r_light
{
    displayName = "Shotgunner (Carabinier)";
    primaryWeapon[] = {"rhs_weap_M590_8RD"};
    magazines[] =
    {
        LIST_8("rhsusf_8Rnd_00Buck"),
        LIST_3("rhsusf_8Rnd_Slug"),
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
    backpack[] = {"B_simc_USMC65_M41"};
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a2"};
    magazines[] = {
        LIST_8("hlc_30Rnd_9x19_B_MP5"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
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
    headgear[] = {"H_Beret_blk"};
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
    vest[] = {"usm_vest_LBE_mg"};
    primaryWeapon[] = {"hlc_rifle_LAR_XMAG"};
    bipod[] = {};
    magazines[] =
    {
        LIST_3("hlc_50rnd_762x51_M_FAL"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc"),
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"B_simc_USMC65_M41"};
    backpackItems[] =
    {
        LIST_2("hlc_50rnd_762x51_M_FAL")
    };
};
class rat : r_light
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    scope[] = {"hlc_optic_suit"};
    silencer[] = {"hlc_muzzle_MAG58_Brake"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    magazines[] =
    {
        LIST_3("hlc_100Rnd_762x51_Barrier_M60E4"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("hlc_100Rnd_762x51_Barrier_M60E4")
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
    backpackItems[] =
    {
        LIST_2("hlc_100Rnd_762x51_Barrier_M60E4")
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
    secondaryAttachments[] = {};
    backpack[] = {"rhsgref_hidf_alicepack"};
    magazines[] +=
    {
        "rhs_mag_maaws_HEAT"
    };
    backpackItems[] =
    {
        "rhs_mag_maaws_HEAT"
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
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
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_maaws_HEAT")
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
    backPack[] = {"O_Mortar_01_weapon_F"};
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
    backPack[] = {"O_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"O_Mortar_01_support_F"};
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
    backpack[] = {"rhsgref_hidf_alicepack"};
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
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {"usm_bdu_boonie_tgrstp"};
    primaryWeapon[] = {"hlc_rifle_M14_Bipod"};
    scope[] = {"hlc_optic_LRT_m14"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
    magazines[] =
    {
        LIST_10("hlc_20Rnd_762x51_B_M14"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_7x45acp_MHP")
    };
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {"usm_bdu_boonie_tgrstp"};
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
    backpack[] = {};
    headgear[] = {"rhsusf_Bowman"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"B_simc_USMC65_M41"};
    headgear[] = {"rhsusf_Bowman"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
    headgear[] = {"rhsusf_Bowman"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"rhsusf_Bowman"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpack[] = {"B_simc_USMC65_M41"};
    headgear[] = {"rhsusf_Bowman"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    backpack[] = {};
    headgear[] = {"rhsusf_Bowman"};
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
    goggles[] = {"G_Aviator"};
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
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        "ACE_EntrenchingTool",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_1("SatchelCharge_Remote_Mag")
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_DefusalKit",
        "ACE_EntrenchingTool",
        LIST_4("APERSMine_Range_Mag"),
        LIST_1("ATMine_Range_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
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