class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:asian"};
    // All randomized.
    uniform[] =
    {
        "vn_o_uniform_vc_mf_01_07",
        "vn_o_uniform_vc_mf_02_07",
        "vn_o_uniform_vc_mf_03_07",
        "vn_o_uniform_vc_mf_04_07"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "vn_o_helmet_vc_01",
        "vn_o_helmet_vc_02",
        "vn_o_helmet_vc_03",
        "vn_o_helmet_vc_04",
        "vn_o_helmet_vc_05"
    };
    goggles[] = {"", "vn_o_scarf_01_04"};
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
        ITEMS_MEDICAL_SMALL()
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman (PPSh-41)";
    vest[] = {
        "vn_o_vest_vc_01"
    };
    backpack[] = {
        "vn_o_pack_04"
    };
    primaryWeapon[] = {
        "vn_ppsh41",
        "vn_k50m"
    };
    magazines[] =
    {
        LIST_7("vn_ppsh41_35_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        ITEMS_MEDICAL_FULL(),
        ITEMS_CIGS()
    };
};
class r : car
{
    displayName = "Rifleman (PPSh-41 Drum)";
    magazines[] =
    {
        LIST_3("vn_ppsh41_71_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
};
class smg : car
{
    displayName = "Rifleman (MAT-49)";
    
    primaryWeapon[] = {
        "vn_mat49_vc"
    };
    magazines[] =
    {
        LIST_7("vn_mat49_vc_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
};
class g : car
{
    displayName = "Grenadier (SKS)";
    vest[] = {
        "vn_o_vest_vc_02"
    };
    primaryWeapon[] = {"vn_sks_gl"};
    magazines[] =
    {
        LIST_11("vn_sks_mag"),
        LIST_2("SmokeShell"),
        LIST_6("vn_22mm_m60_frag_mag"),
        LIST_2("vn_22mm_m22_smoke_mag"),
        LIST_2("vn_22mm_m60_heat_mag"),
        LIST_2("vn_22mm_m19_wp_mag")
    };
};
class m : car 
{
    displayName = "Medic (Shotgun)";
    traits[] += {"medic"};
    vest[] = {"vn_o_vest_vc_04"};
    primaryWeapon[] = {"vn_izh54"};
    backpackItems[] = {
        BACKPACK_MEDICAL_FULL()
    };
    magazines[] = {
        LIST_20("vn_izh54_mag"),
        LIST_2("SmokeShell")
    };
    items[] = {};
};
class ftl : car
{
    displayName = "Fireteam Leader";
    vest[] = {"vn_o_vest_vc_05"};
    sidearmWeapon[] = {"vn_m1895"};
    magazines[] += {
        LIST_1("vn_m1895_mag")
    };
    linkedItems[] += {"Binocular"};
};
class sl : ftl
{
    displayName = "Squad Leader";
};
class co : sl
{
    displayName = "Squad Leader (Radio)";
    backpack[] = {"vn_o_pack_t884_01"};
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {
        "vn_o_pack_t884_01"
    };
};
class ar : car
{
    displayName = "Automatic Rifleman (Type 56)";
    primaryWeapon[] = {
        "vn_type56"
    };
    vest[] = {
        "vn_b_vest_sog_05"
    };
    backpack[] = {
        "vn_o_pack_05"
    };
    magazines[] +=
    {
        LIST_10("vn_type56_mag"),
        LIST_2("vn_chicom_grenade_mag"),
        LIST_2("SmokeShell")
    };
    items[] += {
        "vn_b_type56"
    };

};
class aar : smg
{
    displayName = "Ammo bearer (MAT-49)";
    backpack[] = {"vn_o_pack_06"};
    backpackItems[] = {
        LIST_8("vn_ppsh41_71_mag"),
        LIST_10("vn_type56_mag")
    };
};
class rat : car
{
    displayName = "Rifleman (AT)";
    backpack[] = {"vn_o_pack_03"};
    secondaryWeapon[] = {"vn_rpg2"};
    magazines[] += {
        LIST_4("vn_rpg2_mag")
    };
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"vn_sks"};
    scope[] = {"vn_o_3x_m9130"};
    magazines[] =
    {
        LIST_11("vn_sks_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
};
class mmgg : car
{
    displayName = "MMG Gunner (RPD)";
    primaryWeapon[] = {"vn_rpd"};
    vest[] = {
        "vn_o_vest_vc_03"
    };
    magazines[] =
    {
        LIST_4("vn_rpd_100_mag"),
        LIST_2("SmokeShell")
    };
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"Binocular"};
    vest[] = {"vn_o_vest_vc_05"};
    backpackItems[] =
    {
        LIST_6("vn_rpd_100_mag")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_6("vn_rpd_100_mag")
    };
};
class hmgg : smg
{
    displayName = "HMG Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_pk_low_01"};

};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier (Legacy)";
    backPack[] = {"vn_o_pack_static_pk_low_01"};
};
class hmgg_csw : smg
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_sog_pk_carry"};
};
class hmgag_csw : smg
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_kordCarryTripodLow"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class hmgac_csw : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpackItems[] = {
        LIST_1("ace_compat_sog_m1919_250")
    };
};
class matg : smg
{
    displayName = "MAT Gunner (RPG-7)";
    backpack[] = {"vn_o_pack_07"};
    secondaryWeapon[] = {"vn_rpg7"};
    magazines[] += {
        LIST_4("vn_rpg7_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"Binocular"};
    backpack[] = {"vn_o_pack_07"};
    backpackItems[] =
    {
        LIST_2("vn_rpg7_mag")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"vn_o_pack_07"};
    backpackItems[] =
    {
        LIST_2("vn_rpg7_mag")
    };
};
class hatg : smg
{
    displayName = "HAT Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_type56rr_01"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class hatac : smg
{
    displayName = "HAT Ammo Carrier (CSW)";
    backPack[] = {"vn_o_pack_static_type56rr_01"};
};
class hatg_csw : smg
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_sog_tow_carry"};
};
class hatag_csw : car
{
    displayName = "HAT Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class hatac_csw : smg
{
    displayName = "HAT Ammo Carrier (CSW)";
};
class mtrg : smg
{
    displayName = "Mortar Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_type63_01"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch"
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (Legacy)";
    backPack[] = {"vn_o_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class mtrac : smg
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"vn_o_pack_static_type63_01"};
};
class mtrg_csw : smg
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_sog_mortar_m2_carry"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch"
    };
};
class mtrag_csw : smg
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
};
class mtrac_csw : smg
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"vn_o_pack_07"};
    backpackItems[] = {
        LIST_8("ace_compat_sog_60mm_he")
    };
};
class samg : car
{
    displayName = "AA Missile Specialist (Strela)";
    secondaryWeapon[] = {"vn_sa7"};
    magazines[] += {
        LIST_3("vn_sa7_mag")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist (Strela)";
    magazines[] += {
        LIST_3("vn_sa7_mag")
    };
};
class sn : car
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {
        "vn_o_helmet_vc_03",
        "vn_o_helmet_vc_04"
    };
    vest[] = {"vn_o_vest_vc_03"};
    backpack[] = {"vn_o_pack_06"};
    primaryWeapon[] = {"vn_m9130"};
    scope[] = {"vn_o_3x_m9130"};
    bipod[] = {"vn_b_camo_m9130"};
    silencer[] = {"vn_s_m14"};
    sidearmWeapon[] = {"vn_m1895"};
    magazines[] =
    {
        LIST_12("vn_m38_mag"),
        LIST_4("vn_m1895_mag"),
        LIST_1("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
    items[] += {
        "vn_b_m38"
    };
};
class sp : car
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {
        "vn_o_helmet_vc_03",
        "vn_o_helmet_vc_04"
    };
    vest[] = {"vn_o_vest_vc_05"};
    backpack[] = {"vn_o_pack_06"};
    sidearmWeapon[] = {"vn_m1895"};
    linkedItems[] =
    {
        "ItemMap",
        "vn_b_item_compass_sog",
        "vn_b_item_watch",
        "vn_mk21_binocs"
    };
    magazines[] += {
        LIST_4("vn_m1895_mag")
    };
};
class vc : fac
{
    displayName = "Vehicle Commander";
};
class vd : smg
{
    displayName = "Vehicle Driver";
    backpack[] = {"vn_o_pack_01"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
};
class pp : baseMan
{
    displayName = "Helicopter Pilot";
    uniform[] = {"vn_o_uniform_nva_air_01"};
    headgear[] = {"vn_o_helmet_zsh3_01"};
    vest[] = {"vn_o_vest_05"};
    backpack[] = {"vn_o_pack_01"};
    sidearmWeapon[] = {"vn_m1895"};
    magazines[] = {
        LIST_4("vn_m1895_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
};
class pcc : pp
{

    displayName = "Helicopter Copilot (Repair)";
    traits[] += {"engineer"};
    backpack[] = {"vn_o_pack_01"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Door Gunner";
    backpack[] = {"vn_o_pack_01"};
    primaryWeapon[] = {"vn_mat49_f"};
    sidearmWeapon[] = {};
    magazines[] = {
        LIST_4("vn_mat49_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"vn_o_uniform_nva_air_01"};
    vest[] = {"vn_o_vest_05"};
    backpack[] = {};
    headgear[] = {"vn_o_helmet_zsh3_02"};
    goggles[] = {"vn_o_acc_km32_01"};
    sidearmWeapon[] = {"vn_m1895"};
    magazines[] =
    {
        LIST_4("vn_m1895_mag")
    };
    linkedItems[] = {"ItemMap","vn_b_item_compass_sog","vn_b_item_watch"};
};
class eng : smg
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"vn_b_vest_sog_03"};
    backpack[] = {"vn_o_pack_05"};
    backpackItems[] = {
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : smg
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"vn_b_vest_sog_03"};
    backpack[] = {"vn_o_pack_05"};
    backpackItems[] = {
        "ToolKit",
        LIST_2("vn_mine_tm57_mag"),
        LIST_4("vn_mine_tripwire_f1_04_mag"),
        LIST_4("vn_mine_tripwire_f1_02_mag"),
        LIST_4("vn_mine_punji_01_mag"),
        LIST_4("vn_mine_punji_02_mag")
    };
};
class UAV_light : r
{
    displayName = "DISABLED - UAV Operator (no drone)";
};
class UAV : UAV_light
{
    displayName = "DISABLED - UAV Operator";
};