// in case of fire, tell Bear


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {
        "usm_bdu_des_m",
        "usm_bdu_des_m",
        "usm_bdu_des_m",
        "usm_bdu_btisrl_des_m",
        "usm_bdu_bti_des_m",
        "usm_bdu_srl_des_m",
        "usm_bdu_srh_des_m"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {"usm_bdu_cap_des"};
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
class car : baseMan
{
    displayName = "Carabinier";
    headgear[] = {"usm_helmet_pasgt_rm_des"};
    vest[] = {"usm_vest_pasgtdes_lbv_rm_m"};
    backpack[] = {};
    primaryWeapon[] = 
    {
        "mbg_m16a2"
    };
    bipod[] = {};
    scope[] = {};
    attachment[] = {};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
    };
};
class r : car {
    displayName = "Rifleman";
    magazines[] +=
    {
        LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_2("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
    items[] += {
        LIST_1("ACE_EntrenchingTool")
    };
}
class g : car
{
    displayName = "Grenadier";
    vest[] = {"usm_vest_pasgtdes_lbv_gr_m"};
    primaryWeapon[] = {"hlc_rifle_m203"};
    bipod[] = {};
    magazines[] +=
    {
        LIST_6("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell")
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle"};
    magazines[] =
    {
        LIST_6("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        "rhs_mag_m67",
        LIST_2("rhs_mag_an_m8hc")
    };
};
class m : car
{
    displayName = "Medic";
    traits[] += {"medic"};
    backpack[] = {"usm_pack_m5_medic"};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
    items[] = {};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("rhs_mag_m18_green")
    };
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sl : car
{
    displayName = "Squad Leader";
    vest[] = {"usm_vest_pasgtdes_lbv_rmp_m"};
    backpack[] = {"usm_pack_st138_prc77"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
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
class fac : car
{
    displayName = "Forward Air Controller / Radioman";
    backpack[] = {"usm_pack_st138_prc77"};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "Rangefinder"
    };
};
class ar : car
{
    displayName = "Automatic Rifleman";
    vest[] = {"usm_vest_pasgtdes_lbv_mg_m"};
    primaryWeapon[] = {"rhs_weap_m249"};
    sidearmWeapon[] = {};
    backpack[] = {};
    magazines[] =
    {
        LIST_4("rhsusf_200Rnd_556x45_box")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_2("rhsusf_200Rnd_556x45_box")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (M72A7 LAW)";
    secondaryWeapon[] = {"rhs_weap_m72a7"};
};
class dm : car
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"hlc_rifle_M21"};
    scope[] = {"hlc_optic_artel_m14"};
    bipod[] = {};
    magazines[] =
    {
        LIST_7("hlc_20Rnd_762x51_B_M14"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"hlc_lmg_m60"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    scope[] = {};
    magazines[] =
    {
        LIST_3("rhsusf_100Rnd_762x51"),
        LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    backPack[] = {"usm_pack_762x51_ammobelts_empty"};
    backpackItems[] = {
        LIST_1("rhsusf_100Rnd_762x51")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"rhssaf_alice_smb"};
    backpackItems[] =
    {
        LIST_4("rhsusf_100Rnd_762x51")
    };
};
class mmgag : car
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
    backpack[] = {
        "B_simc_USMC65_M41"
    };
    backpackItems[] = {
        LIST_2("rhsusf_100Rnd_762x51")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
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
class matg : car
{
    displayName = "MAT Gunner";
    backpack[] = {"B_Carryall_khk"};
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    secondaryMagazine[] = {"rhs_mag_smaw_HEAA"};
    magazines[] +=
    {
        "rhs_mag_smaw_HEAA",
        "rhs_mag_smaw_HEDP",
        LIST_5("rhs_mag_smaw_SR")
    };
};
class matac : r
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
class matag : car
{
    displayName = "MAT Assistant Gunner";
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
class hatg : car
{
    displayName = "HAT Gunner";
    backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"rhs_Tow_Gun_Bag"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"rhs_TOW_Tripod_Bag"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
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
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"rhs_M252_Gun_Bag"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"B_Carryall_khk"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
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
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {"usm_bdu_boonie_des"};
    goggles[] = {};
    primaryWeapon[] = {"rhs_weap_m24sws_ghillie"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_6("rhsusf_5Rnd_762x51_m118_special_Mag"),
        LIST_5("rhsusf_5Rnd_762x51_m993_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    backpack[] = {"B_LegStrapBag_coyote_F"};
    linkedItems[] += {"Rangefinder","ItemGPS"};
};
class sp : sn
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    scope[] = {"rhsusf_acc_ACOG_wd"};
    primaryWeapon[] = {"srifle_DMR_06_camo_F"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_8("20Rnd_762x51_Mag"),
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    vest[] = {"usm_vest_pasgtdes"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"rhsusf_cvc_green_ess","rhsusf_cvc_green_helmet"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] = {
        LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_an_m8hc"),
        LIST_1("1Rnd_SmokeGreen_Grenade_shell")
    };
    hmd[]={"rhsusf_ANPVS_15"};
};
class vc : vd
{
    displayName = "Vehicle Commander";
    linkedItems[] += {"Binocular"};
    backpackItems[] = {};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    vest[] = {"usm_vest_pasgtdes"};
    backpack[] = {"B_AssaultPack_cbr"};
    headgear[] = {"rhsusf_hgu56p"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    attachment[] = {};
    bipod[] = {};
    magazines[] = {
        LIST_4("rhs_mag_30Rnd_556x45_M855A1_Stanag"),
        LIST_1("rhs_mag_an_m8hc"),
        LIST_1("1Rnd_SmokeGreen_Grenade_shell")
    };
    hmd[]={"rhsusf_ANPVS_15"};
};
class pcc : pp
{
    displayName = "Helicopter Crew Chief";
    traits[] += {"engineer"};
    backpackItems[] = {"ToolKit"};
};
class pc : pp
{
    displayName = "Helicopter Crew";
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
    vest[] = {"usm_vest_rba_lbv_rm"};
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
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"usm_vest_rba_lbv_rm"};
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
class r_light : car
{
    displayName = "Rifleman (light)";
};