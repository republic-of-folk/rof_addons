class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "rhs_uniform_acu_ocp"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "rhsusf_patrolcap_ocp"
    };
    goggles[] = {};
    hmd[] = {
        "","","","",
        "murshun_cigs_cig1_nv","murshun_cigs_cig2_nv","murshun_cigs_cig3_nv","murshun_cigs_cig4_nv"
    };
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
    code = "_this addItem 'murshun_cigs_cigpack'; if (random 1 < 0.5) then { _this addItem 'murshun_cigs_lighter'; } else { _this addItem 'murshun_cigs_matches'; };";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman Light (Carabinier)";
    vest[] = {"rhsusf_iotv_ocp_Rifleman"};
    headgear[] = {
        "rhsusf_ach_helmet_ocp"
    };
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    primaryWeapon[] = {"rhs_weap_m4a1_blockII_bk"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk", "rhsusf_acc_anpeq15_bk_top"};
    bipod[] = {"rhsusf_acc_tdstubby_blk"};
    scope[] = {"rhsusf_acc_compm4"};
    magazines[] =
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_m67")
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
    magazines[] +=
    {
        LIST_5("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_m67")
    };
    items[] += {};
};
class smg : car
{
    displayName = "Submachinegunner";
    vest[] = {"rhsusf_spcs_ocp_rifleman_alt"};
    primaryWeapon[] = {"SMG_02_F"};
    scope[] = {"rhsusf_acc_T1_low"};
    silencer[] = {};
    bipod[] = {};
    attachment[] = {};
    magazines[] = {
        LIST_6("30Rnd_9x21_Mag_SMG_02"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_m67")
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {"rhsusf_iotv_ocp_Grenadier"};
    primaryWeapon[] = {"rhs_weap_m4a1_blockII_M203_bk"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] +=
    {
        LIST_2("rhs_GDM40"),
        LIST_2("rhs_VG40TB"),
        LIST_6("rhs_VOG25")
    };
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"rhsusf_iotv_ocp_Medic"};
    items[] += {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
        "rhs_6b27m_digi"
    };
};
class rfa : car 
{
    displayName = "Rifleman (First aid)";
    items[] += {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    headgear[] = {
        "rhsusf_ach_helmet_headset_ocp",
        "rhsusf_ach_helmet_headset_ocp_alt"
    };
    vest[] = {"rhsusf_iotv_ocp_Teamleader"};
    scope[] = {
        "rhsusf_acc_ACOG_USMC",
        "rhsusf_acc_ACOG2_USMC",
        "rhsusf_acc_ACOG3_USMC"
    };
    linkedItems[] += {
        "Rangefinder",
        "ItemGPS"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    vest[] = {"rhsusf_iotv_ocp_Squadleader"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] += {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class co : sl
{
    displayName = "Platoon Leader";
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {"B_RadioBag_01_tropic_F"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"rhsusf_iotv_ocp_SAW"};
    primaryWeapon[] = {"rhs_weap_m249_pip_S"};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    scope[] = {"rhsusf_acc_ELCAN"};
    bipod[] = {"rhsusf_acc_kac_grip_saw_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_3("rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_m67"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class aar : g
{
    displayName = "Assistant Automatic Rifleman";
    linkedItems[] += {"Binocular"};
    backpackItems[] =
    {
        LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote")
    };
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svds"};
    scope[] = {"rhs_acc_pso1m21"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_11("rhs_10Rnd_762x54mmR_7N14"),
        LIST_2("rhs_mag_m67"),
        LIST_2("SmokeShell"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"rhs_weap_m240G"};
    scope[] = {"rhsusf_acc_ELCAN_ard"};
    bipod[] = {};
    silencer[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_6("rhsusf_100Rnd_762x51_m80a1epr"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_1("SmokeShell")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    backpackItems[] = {
        LIST_4("rhsusf_100Rnd_762x51_m80a1epr"),
        "ACE_Tripod"
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_6("rhsusf_100Rnd_762x51_m80a1epr")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_m2_carry"};

};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] = {
        LIST_3("ace_csw_100Rnd_127x99_mag_yellow"),
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw", "rhs_weap_smaw_green"};
    secondaryMagazine[] = {"rhs_mag_smaw_HEAA"};
    secondaryAttachments[] = {"acc_pointer_IR", "rhs_weap_optic_smaw"};
    backpackItems[] +=
    {
        LIST_1("rhs_mag_smaw_HEAA")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
    };
    linkedItems[] += {"Rangefinder"};
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEAA")
    };
};
class hatg : car
{
    displayName = "HAT Gunner (Javelin)";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    secondaryMagazine[] = {"rhs_fgm148_magazine_AT"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner (Javelin)";
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
    backpack[] = {"B_Carryall_mcamo"};
    backpackItems[] = {
        LIST_1("rhs_fgm148_magazine_AT")
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier (Javelin)";
    backpack[] = {"B_Carryall_mcamo"};
    backpackItems[] = {
        LIST_1("rhs_fgm148_magazine_AT")
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_DAGR",
        "ACE_MapTools"
    };
    backpack[] = {"B_Carryall_mcamo"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] = {
        LIST_6("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    backPack[] = {"B_Carryall_mcamo"};
    magazines[] +=
    {
        LIST_2("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] += {"Binocular"};
    backPack[] = {"B_Bergen_mcamo_F"};
    backpackItems[] =
    {
        LIST_4("Titan_AA")
    };
};
class sn : car
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_GhillieSuit"};
    primaryWeapon[] = {"rhs_weap_m24sws_wd_leu"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_wd"};
    bipod[] = {"rhsusf_acc_harris_swivel"};
    attachment[] = {};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_12("rhsusf_5Rnd_762x51_m993_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] += {
        "ACE_MapTools",
        "ACE_RangeCard"
    };
};
class sp : g
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_B_GhillieSuit"};
    scope[] = {
        "rhsusf_acc_ACOG_USMC",
        "rhsusf_acc_ACOG2_USMC",
        "rhsusf_acc_ACOG3_USMC"
    };
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {
        "ACE_EntrenchingTool",
        "ACE_MapTools",
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vg : car
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhsusf_spcs_ocp_crewman"};
    headgear[] = {
        "rhsusf_cvc_green_helmet",
        "rhsusf_cvc_green_alt_helmet",
        "rhsusf_cvc_green_ess"
    };
};
class vc : vg
{
    displayName = "Vehicle Commander";
    secondaryWeapon[] = {"rhsusf_weap_m9"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vd : vg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    headgear[] = {
        "rhsusf_hgu56p_tan"
    };
    vest[] = {"rhsusf_spcs_ocp_crewman"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] += {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : pc
{

    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    backpackItems[] = {"ToolKit"};
};
class pp : pc
{
    displayName = "Helicopter Pilot";
    hmd[] = {"ACE_NVG_Gen4"};
    linkedItems[] += {"ItemGPS"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    headgear[] = {"RHS_jetpilot_usaf"};
    secondaryWeapon[] = {};
    magazines[] = {
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    traits[] += {
        "engineer ",
        "explosiveSpecialist"
    };
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_1("SatchelCharge_Remote_Mag")
    };
};
class engm : eng
{
    displayName = "Combat Engineer (Mines)";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] = {
        "MineDetector",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_4("APERSMine_Range_Mag"),
        LIST_1("ATMine_Range_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag"),
        LIST_2("ClaymoreDirectionalMine_Remote_Mag")
    };
};
class UAV : car
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"B_UavTerminal"};
};