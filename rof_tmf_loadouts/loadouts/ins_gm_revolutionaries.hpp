class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "gm_xx_army_uniform_fighter_01_alp",
        "gm_xx_army_uniform_fighter_01_m84",
        "gm_xx_army_uniform_fighter_01_oli",
        "gm_xx_army_uniform_fighter_02_oli",
        "gm_xx_army_uniform_fighter_02_wdl",
        "gm_xx_army_uniform_fighter_03_blk",
        "gm_xx_army_uniform_fighter_03_brn",
        "gm_xx_army_uniform_fighter_04_grn",
        "gm_xx_army_uniform_fighter_04_wdl"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "","","","",
        "gm_pl_headgear_beret_blk_empty","gm_pl_headgear_beret_blk_empty",
        "gm_ge_headgear_beret_blk","gm_ge_headgear_beret_blk"
    };
    goggles[] = {
        "","","","","","","","","","","","",
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
class car : baseMan
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_aks74u", "arifle_AKS_F"};
    silencer[] = {"rhs_acc_pgs64_74u", "rhs_acc_pgs64_74un"};

    sidearmWeapon[] = {"rhs_weap_makarov_pm"};

    vest[] = {"rhs_vest_pistol_holster"};
    
    magazines[] =
    {
        LIST_8("rhs_30Rnd_545x39_7N10_plum_AK"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint")
    };
};
class r : car
{
    displayName = "Rifleman";

    primaryWeapon[] = {"rhs_weap_akms", "rhs_weap_m92", "rhs_weap_pm63", "rhs_weap_savz58p", "rhs_weap_savz58v", "rhs_weap_m70b3n"};
    silencer[] = {"rhs_acc_dtkakm"};

    magazines[] =
    {
        LIST_8("rhs_30Rnd_762x39mm_89"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"rhs_weap_akms_gp25"};
    magazines[] +=
    {
        LIST_8("rhs_VOG25"),
        LIST_4("rhs_GRD40_White")
    };
    backpack[] = {"B_AssaultPack_rgr"};
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp2a1_blk"};
    magazines[] =
    {
        LIST_8("gm_32Rnd_9x19mm_B_DM51_mp2_blk"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_2("HandGrenade"),
        LIST_1("SmokeShell")
    };
};
class m : smg
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500")
    };
    items[] = {};
    backpack[] = {"B_AssaultPack_rgr"};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhs_vest_commander"};
    magazines[] +=
    {
        LIST_2("rhs_mag_m715_Green")
    };
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : r
{
    displayName = "Squad Leader";
    headgear[] = {"H_Beret_blk"};
    vest[] = {"rhs_vest_commander"};
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
};
class fac : smg
{
    displayName = "Radioman";
    vest[] = {"rhs_vest_commander"};
    backpack[] = {"gm_gc_backpack_r105m_brn"};
};
class ar : r
{
    displayName = "Automatic Rifleman";

    primaryWeapon[] = {"gm_rpk_wud"};
    scope[] = {"gm_zvn64_rpk"};

    vest[] = {"rhs_belt_RPK"};

    magazines[] = {
        LIST_3("gm_75Rnd_762x39mm_AP_7N23_mpikm_blk"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] =
    {
        LIST_2("gm_75Rnd_762x39mm_AP_7N23_mpikm_blk")
    };
};
class rat : smg
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryMagazine[] = {"rhs_rpg7_PG7VL_mag"};
    backPack[] = {"gm_pl_army_backpack_at_80_gry"};
    magazines[] +=
    {
        LIST_3("rhs_rpg7_PG7VL_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_akmn"};
    scope[] = {"rhs_acc_1p29"};
    silencer[] = {"rhs_acc_dtkakm"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_pkm"};
    primaryMagazine[] = {"rhs_100Rnd_762x54mmR_7N26"};
    magazines[] = {
        LIST_2("rhs_100Rnd_762x54mmR_7N26"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell")
    };
    backpack[] = {"gm_ge_army_backpack_80_oli"};
};
class mmgag : aar
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
    backpack[] = {"gm_ge_army_backpack_80_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_7N26")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR_7N26"),
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgag : car
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
class hmgac : car
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgg_csw : smg
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_nsv_carry"};
};
class hmgag_csw : car
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
class hmgac_csw : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_6("ace_csw_50Rnd_127x108_mag"),
    };
};
class matg : rat
{
    displayName = "MAT Gunner";
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
};
class matag : smg
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
    backPack[] = {"gm_pl_army_backpack_at_80_gry"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class matac : smg
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"gm_pl_army_backpack_at_80_gry"};
    backpackItems[] =
    {
        "rhs_rpg7_PG7VR_mag",
        LIST_2("rhs_rpg7_PG7VL_mag")
    };
};
class hatg : smg
{
    displayName = "HAT Gunner (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : smg
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
class hatac : smg
{
    displayName = "HAT Ammo Carrier (Legacy)";
    backPack[] = {"rhs_Tow_Gun_Bag"};
};
class hatg_csw : smg
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_tow_carry"};
};
class hatag_csw : smg
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
class hatac_csw : smg
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_2("ace_compat_rhs_usf3_mag_TOW2A"),
    };
};
class mtrg : smg
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
class mtrag : smg
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
class mtrac : smg
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrg_csw : smg
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
class mtrag_csw : smg
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
class mtrac_csw : smg
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        LIST_8("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
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
class sn : dm
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"40th_weap_svd_wood"};
    scope[] = {"rhs_acc_pso1m21"};
    magazines[] =
    {
        LIST_10("rhs_10Rnd_762x54mmR_7N1"),
        LIST_1("rhs_mag_9x18_8_57N181S"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class sp : dm
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    backpack[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"B_AssaultPack_rgr"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    backpack[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    backpack[] = {};
    headgear[] = {"rhs_gssh18"};
    goggles[] = {"G_Aviator"};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
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
    backpack[] = {};
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
class eng : smg
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
class engm : smg
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
class UAV_light : smg
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