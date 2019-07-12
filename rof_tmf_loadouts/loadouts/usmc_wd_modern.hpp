// in case of fire, tell Bear


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"rhs_uniform_FROG01_wd"};
    vest[] = {};
    backpack[] = {"rhsusf_falconii_coy"};
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

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"rhsusf_lwh_helmet_marpatwd","rhsusf_lwh_helmet_marpatwd_ess","rhsusf_lwh_helmet_marpatwd_headset"};
    vest[] = {"rhsusf_spc_rifleman"};
    primaryWeapon[] = 
    {
        "rhs_weap_m16a4_carryhandle",
        "rhs_weap_m16a4_carryhandle_pmag"
    };
    bipod[] = 
    { /* weighted 4/1/3 */
        "","","","",
        "rhsusf_acc_grip1",
        "rhsusf_acc_grip3","rhsusf_acc_grip3","rhsusf_acc_grip3"
    };
    scope[] = {};
    attachment[] = {"rhsusf_acc_anpeq15side_bk"};
    magazines[] =
    {
        LIST_11("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class r_light : r
{
    magazines[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class g : r_light
{
    displayName = "Grenadier";
    vest[] = {"rhsusf_spc_teamleader"};
    primaryWeapon[] = {"rhs_weap_m16a4_carryhandle_M203"};
    bipod[] = {};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell")
    };
};
class car : r_light
{
    displayName = "Carabinier";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_7("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"rhsusf_spc_corpsman"};
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
    vest[] = {"rhsusf_spc_light"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : r
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    vest[] = {"rhsusf_spc_squadleader"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_2("rhs_mag_m18_green"),
        LIST_2("rhs_mag_m18_red"),
        LIST_2("rhs_mag_m18_yellow")
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
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "Rangefinder"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman (M27 IAR)";
    primaryWeapon[] = {"rhs_weap_m27iar"};
    bipod[] = {"rhsusf_acc_harris_bipod", "rhsusf_acc_grip3"};
    vest[] = {"rhsusf_spc_iar"};
    magazines[] +=
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_9("rhs_mag_30Rnd_556x45_M855A1_Stanag")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_sr25_ec"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_7("ACE_20Rnd_762x51_Mag_Tracer_Dim"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    vest[] = {"rhsusf_spc_mg"};
    primaryWeapon[] = {"rhs_weap_m240B"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_100Rnd_762x51_m80a1epr"),
        "rhs_mag_m67",
        "rhs_mag_an_m8hc",
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    vest[] = {"rhsusf_spc_mg"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    vest[] = {"rhsusf_spc_teamleader"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("rhsusf_100Rnd_762x51")
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
    vest[] = {"rhsusf_spc_squadleader"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : r_light
{
    displayName = "MAT Gunner";
    backpack[] = {"B_Carryall_khk"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    vest[] = {"rhsusf_spc_squadleader"};
    backpack[] = {"B_Carryall_khk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP"
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpack[] = {"B_Carryall_khk"};
    magazines[] += {
        "rhs_fgm148_magazine_AT"
    };
    // code = "_this addItemToBackpack ""rhs_fgm148_magazine_AT"";";
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    vest[] = {"rhsusf_spc_squadleader"};
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        "rhs_fgm148_magazine_AT"
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
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"rhs_M252_Bipod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    vest[] = {"rhsusf_spc_squadleader"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    backpack[] = {"B_Carryall_oli"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"B_Carryall_oli"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    vest[] = {"rhsusf_spc_corpsman"};
    headgear[] = {"rhs_booniehat2_marpatwd","rhsusf_bowman_cap","rhsusf_Bowman"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_sr25"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_2("rhsusf_20Rnd_762x51_SR25_m993_Mag"),
        LIST_3("rhsusf_20Rnd_762x51_SR25_m118_special_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    backpack[] = {};
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    vest[] = {"rhsusf_spc_squadleader"};
    scope[] = {"rhsusf_acc_ACOG3"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_pmag"};
    silencer[] = {"rhsusf_acc_SF3P556"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_10("30Rnd_556x45_Stanag"),
        LIST_3("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
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
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"B_LegStrapBag_olive_F"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    attachment[] = {};
    bipod[] = {};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    vest[] = {"rhsusf_spc_crewman"};
    backpack[] = {"rhsusf_assault_eagleaiii_coy"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    attachment[] = {};
    bipod[] = {};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    backpackItems[] = {"ToolKit"};
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
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"rhsusf_spc_rifleman"};
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SatchelCharge_Remote_Mag"),
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backpack[] = {"B_Carryall_khk"};
    vest[] = {"rhsusf_spc_rifleman"};
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
class UAV_light : car
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