#define HELMETS() "vn_b_helmet_m1_02_01", "vn_b_helmet_m1_03_01", "vn_b_helmet_m1_06_01", "vn_b_helmet_m1_07_01"

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:american"};
    // All randomized.
    uniform[] =
    {
        "vn_b_uniform_macv_01_01",
        "vn_b_uniform_macv_02_01",
        "vn_b_uniform_macv_03_01",
        "vn_b_uniform_macv_04_01",
        "vn_b_uniform_macv_05_01"
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
        ITEMS_MEDICAL_SMALL()
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
    code = "";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman (light)";
    headgear[] = {
        HELMETS(),
        "vn_b_helmet_m1_05_01"
    };
    vest[] = {
        "vn_b_vest_usarmy_02",
        "vn_b_vest_usarmy_03"
    };
    backpack[] = {
        "vn_b_pack_lw_01",
        "vn_b_pack_trp_02_02"
    };
    primaryWeapon[] = {"vn_m16"};
    magazines[] =
    {
        LIST_7("vn_m16_20_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
    items[] =
    {
        ITEMS_MEDICAL_FULL(),
        ITEMS_CIGS()
    };
};
class r : car
{
    displayName = "Rifleman";
    attachment[] = {"vn_b_m16"};
    magazines[] =
    {
        LIST_11("vn_m16_20_mag"),
        LIST_4("vn_m61_grenade_mag"),
        LIST_1("SmokeShell")
    };
};
class g : car
{
    displayName = "Grenadier";
    headgear[] = {
        "vn_b_helmet_m1_04_01"
    };
    vest[] = {
        "vn_b_vest_usarmy_05"
    };
    primaryWeapon[] = {"vn_m79"};
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
        LIST_4("vn_m1911_mag"),
        LIST_12("vn_40mm_m433_hedp_mag"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_4("vn_40mm_m397_ab_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"vn_m3a1"};
    vest[] = {"vn_b_vest_usarmy_04"};
    backpack[] = {};
    magazines[] =
    {
        LIST_6("vn_m3a1_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_1("SmokeShell")
    };
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"vn_b_vest_usarmy_07"};
    backpack[] = {"vn_b_pack_lw_07"};
    backpackItems[] = {
        BACKPACK_MEDICAL_FULL()
    };
    magazines[] += {
        LIST_1("SmokeShell")
    };
    items[] = {};
};
class ftl : car
{
    displayName = "Fireteam Leader";
    vest[] = {"vn_b_vest_usarmy_09"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] +=
    {
        LIST_4("vn_m1911_mag")
    };
};
class co : sl
{
    displayName = "Squad Leader (Radio)";
    backpack[] = {
        "vn_b_pack_prc77_01"
    };
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {
        "vn_b_pack_trp_04_02",
        "vn_b_pack_lw_06"
    };
};
class ar : car
{
    displayName = "Automatic Rifleman (M16)";
    magazines[] +=
    {
        LIST_10("vn_m16_20_mag")
    };

};
class aar : r
{
    displayName = "Assistant Automatic Rifleman (Ammo bearer)";
    magazines[] +=
    {
        LIST_11("vn_m16_20_mag")
    };
    linkedItems[] += {"Binocular"};
    backPack[] = {"vn_b_pack_lw_05"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"vn_m72"};
};
class dm : r
{
    displayName = "Designated Marksman";
    vest[] = {"vn_b_vest_usarmy_08"};
    primaryWeapon[] = {"vn_m14"};
    scope[] = {"vn_o_9x_m14"};
    magazines[] =
    {
        LIST_11("vn_m14_t_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
};
class mmgg : car
{
    displayName = "MMG Gunner";
    headgear[] = {
        "vn_b_helmet_m1_08_01"
    };
    primaryWeapon[] = {"vn_m60"};
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_4("vn_m1911_mag"),
        LIST_6("vn_m60_100_mag"),
        LIST_2("vn_m61_grenade_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
    backpack[]= {
        "vn_b_pack_lw_02",
        "vn_b_pack_lw_05",
        "vn_b_pack_trp_01_02"
    };
};
class mmgag : car
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"Binocular"};
    backpack[]= {
        "vn_b_pack_lw_05"
    };
    backpackItems[] =
    {
        LIST_6("vn_m60_100_mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[]= {
        "vn_b_pack_lw_05"
    };
    backpackItems[] =
    {
        LIST_6("vn_m60_100_mag")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (Legacy)";
    headgear[] = {
        HELMETS(),
        "vn_b_helmet_m1_08_01"
    };
    backPack[] = {"vn_b_pack_static_m1919a4_low_01"};

};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
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
    backPack[] = {"vn_b_pack_static_m1919a4_low_01"};
};
class matg : car
{
    displayName = "MAT Gunner (Placeholder weapon)";
    secondaryWeapon[] = {"launch_MRAWS_green_rail_F"};
    magazines[] += {
        LIST_2("MRAWS_HEAT55_F")
    };
    backPack[] = {"vn_b_pack_lw_05"};
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"Binocular"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT55_F")
    };
    backPack[] = {"vn_b_pack_lw_05"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT55_F")
    };
    backPack[] = {"vn_b_pack_lw_05"};
};
class hatg : car
{
    displayName = "HAT Gunner (Legacy)";
    backPack[] = {"vn_b_pack_static_tow"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner (Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier (CSW)";
    backPack[] = {"vn_b_pack_static_tow"};
};
class mtrg : car
{
    displayName = "Mortar Gunner (Legacy)";
    backPack[] = {"vn_b_pack_static_m2_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (Legacy)";
    backPack[] = {"vn_b_pack_static_m2_01"};
};
class samg : car
{
    displayName = "DISABLED - AA Missile Specialist";
};
class samag : car
{
    displayName = "DISABLED - AA Assistent Missile Specialist";
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    vest[] = {"vn_b_vest_usarmy_04"};
    backpack[] = {"vn_b_pack_04_02"};
    primaryWeapon[] = {"vn_m40a1_camo"};
    scope[] = {"vn_o_9x_m40a1"};
    bipod[] = {"vn_b_camo_m40a1"};
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_12("vn_m40a1_mag"),
        LIST_1("vn_m61_grenade_mag"),
        LIST_2("SmokeShell"),
        LIST_4("vn_m1911_mag")
    };
};
class sp : car
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    vest[] = {"vn_b_vest_usarmy_04"};
    backpack[] = {"vn_b_pack_04_02"};
    primaryWeapon[] = {"vn_m14_camo"};
    magazines[] = {
        LIST_8("vn_m14_mag"),
        LIST_1("vn_m61_grenade_mag"),
        LIST_2("SmokeShell")
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
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {
        "vn_b_helmet_t56_01_01",
        "vn_b_helmet_t56_01_02",
        "vn_b_helmet_t56_02_01",
        "vn_b_helmet_t56_02_02"
    };
    vest[] = {"vn_b_vest_usarmy_11"};
    backpack[] = {"vn_b_pack_01_02"};
    sidearmWeapon[] = {"vn_m1911"};
    linkedItems[] += {"Binocular"};
    magazines[] += {
        LIST_2("vn_m1911_mag")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    headgear[] = {
        "vn_b_helmet_t56_01_01",
        "vn_b_helmet_t56_01_02",
        "vn_b_helmet_t56_02_01",
        "vn_b_helmet_t56_02_02"
    };
    vest[] = {"vn_b_vest_usarmy_12"};
    backpack[] = {"vn_b_pack_01_02"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    headgear[] = {
        "vn_b_helmet_t56_01_01",
        "vn_b_helmet_t56_01_02",
        "vn_b_helmet_t56_02_01",
        "vn_b_helmet_t56_02_02"
    };
    vest[] = {"vn_b_vest_usarmy_12"};
    backpack[] = {"vn_b_pack_01_02"};
};
class pp : baseMan
{
    displayName = "Helicopter Pilot";
    uniform[] = {"vn_b_uniform_heli_01_01"};
    headgear[] = {"vn_b_helmet_svh4_02_01"};
    vest[] = {"vn_b_vest_aircrew_05"};
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] = {
        LIST_4("vn_m1911_mag"),
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
    backpack[] = {"vn_b_pack_01"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Door Gunner";
    vest[] = {"vn_b_vest_aircrew_01"};
    primaryWeapon[] = {"vn_m3a1"};
    sidearmWeapon[] = {};
    magazines[] = {
        LIST_4("vn_m3a1_mag"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellPurple"),
        LIST_1("SmokeShellYellow"),
        LIST_1("SmokeShellRed")
    };
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"vn_b_uniform_k2b_01_01"};
    vest[] = {"vn_b_vest_aircrew_04"};
    backpack[] = {};
    headgear[] = {"vn_b_helmet_svh4_01_03"};
    goggles[] = {"vn_b_acc_ms22001_02"};
    sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_4("vn_m1911_mag")
    };
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"vn_b_vest_usarmy_02"};
    backPack[] = {"vn_b_pack_lw_04"};
    backpackItems[] = {
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"vn_b_vest_usarmy_02"};
    backPack[] = {"vn_b_pack_lw_04"};
    backpackItems[] = {
        "ToolKit",
        LIST_4("APERSMine_Range_Mag"),
        LIST_1("ATMine_Range_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
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