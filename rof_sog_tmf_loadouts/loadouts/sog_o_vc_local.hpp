class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:asian"};
    // All randomized.
    uniform[] =
    {
        "vn_o_uniform_vc_01_03",
        "vn_o_uniform_vc_02_03",
        "vn_o_uniform_vc_03_03",
        "vn_o_uniform_vc_04_03",
        "vn_o_uniform_vc_01_05",
        "vn_o_uniform_vc_02_05",
        "vn_o_uniform_vc_03_05",
        "vn_o_uniform_vc_04_05",
        "vn_o_uniform_vc_01_06",
        "vn_o_uniform_vc_02_06",
        "vn_o_uniform_vc_03_06",
        "vn_o_uniform_vc_04_06"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "vn_o_boonie_vc_01_01",
        "vn_o_boonie_vc_01_01",
        "vn_o_boonie_vc_01_02",
        "vn_o_boonie_vc_01_02",
        "vn_c_headband_01",
        "vn_c_headband_02",
        "vn_c_headband_03",
        "vn_c_headband_04",
        ""
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
    displayName = "Rifleman (MAT-49)";
    vest[] = {
        "vn_o_vest_vc_01"
    };
    backpack[] = {
        "vn_o_pack_04"
    };
    primaryWeapon[] = {
        "vn_mat49_vc"
    };
    magazines[] =
    {
        LIST_7("vn_mat49_vc_mag"),
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
    displayName = "Rifleman (PPSh-41)";
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
};
class smg : car
{
    displayName = "Rifleman (M3A1)";
    primaryWeapon[] = {"vn_m3a1"};
    magazines[] = {
        LIST_6("vn_m3a1_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
    
};
class g : car
{
    displayName = "Grenadier (M38)";
    vest[] = {
        "vn_o_vest_vc_02"
    };
    primaryWeapon[] = {"vn_m38"};
    magazines[] = {
        LIST_10("vn_m38_mag"),
        LIST_2("SmokeShell"),
        LIST_4("vn_t67_grenade_mag"),
        LIST_4("vn_rkg3_grenade_mag")
    };
    items[] += {
        "vn_b_m38"
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
    headgear[] = {
        "vn_o_boonie_vc_02_01",
        "vn_o_boonie_vc_02_02"
    };
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
    displayName = "Automatic Rifleman (PPSh-41 Drum)";
    primaryWeapon[] = {
        "vn_ppsh41",
        "vn_k50m"
    };
    backpack[] = {
        "vn_o_pack_05"
    };
    magazines[] =
    {
        LIST_3("vn_ppsh41_71_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
    items[] += {
        "vn_b_type56"
    };

};
class aar : g
{
    displayName = "Ammo bearer (MAT-49)";

    magazines[] = {
        LIST_10("vn_m38_mag"),
        LIST_2("vn_f1_grenade_mag"),
        LIST_2("SmokeShell")
    };
    backpack[] = {"vn_o_pack_06"};
    backpackItems[] = {
        LIST_6("vn_ppsh41_71_mag"),
        LIST_8("vn_mat49_vc_mag"),
        LIST_8("vn_ppsh41_35_mag")
    };
};
class rat : smg
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
    primaryWeapon[] = {"vn_dp28"};
    vest[] = {
        "vn_o_vest_vc_03"
    };
    magazines[] =
    {
        LIST_4("vn_dp28_mag"),
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
        LIST_6("vn_dp28_mag")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_6("vn_dp28_mag")
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
    backpack[] = {"vn_o_pack_01"};
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
    backpack[] = {"vn_o_pack_01"};
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