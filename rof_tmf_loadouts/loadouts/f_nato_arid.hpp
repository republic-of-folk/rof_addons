class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_B_CombatUniform_mcam","U_B_CombatUniform_mcam",
        "U_B_CombatUniform_mcam_tshirt"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","","",
        "H_Booniehat_mcamo","H_Cap_usblack","H_Cap_tan_specops_US"
    };
    goggles[] = 
    {
        "","","","","","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted","G_Combat","G_Lowprofile","G_Combat","G_Lowprofile",
        "G_Tactical_Clear","G_Tactical_Clear","G_Tactical_Clear","G_Tactical_Black","G_Tactical_Black","G_Tactical_Black"
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
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_2("ACE_CableTie")
    };
    // These are added directly into their respective slots
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] =
    {
        "H_HelmetB",
        "H_HelmetB_desert",
        "H_HelmetB_grass",
        "H_HelmetB_sand",
        "H_HelmetB_snakeskin"
    };
    hmd[] = {"NVGoggles"};
    vest[] = {"V_PlateCarrier2_rgr"};
    backpack[] = {"B_AssaultPack_rgr"};
    primaryWeapon[] =
    {
        "arifle_MX_F"
    };
    scope[] = {"optic_aco"};
    attachment[] = {"acc_pointer_ir"};
    sidearmWeapon[] = {"hgun_P07_f"};
    magazines[] =
    {
        LIST_8("30Rnd_65x39_caseless_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    vest[] = {"V_Chestrig_rgr"};
    sidearmWeapon[] = {};
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84")
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_MX_GL_F"};
    vest[] = 
    {
        "V_PlateCarrierGL_mtp"
    };
    backpack[] = {"B_AssaultPack_mcamo"};
    scope[] = {"optic_aco"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_mag"),
        LIST_2("HandGrenade"),
        LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_4("3Rnd_HE_Grenade_shell"),
        LIST_2("3Rnd_Smoke_Grenade_shell"),
        LIST_1("3Rnd_UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    vest[] = {"V_PlateCarrier1_rgr"};
    primaryWeapon[] = {"arifle_MXC_F"};
};
class m : r 
{
    displayName = "Medic";
    vest[] = {"V_PlateCarrierSpec_mtp"};
    scope[] = {};
    backpack[] = {"B_AssaultPack_mcamo"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_4("ACE_bloodIV_250"),
        LIST_2("ACE_bloodIV_500"),
        LIST_1("ACE_bloodIV")
    };
    items[] += {LIST_2("SmokeShell")};
};
class smg : car
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_TR_khaki"};
    magazines[] =
    {
        LIST_7("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"arifle_MX_GL_F"};
    headgear[] = {
        "H_HelmetSpecB",
        "H_HelmetSpecB_blk",
        "H_HelmetSpecB_paint2",
        "H_HelmetSpecB_paint1",
        "H_HelmetSpecB_sand",
        "H_HelmetSpecB_snakeskin"
    };
    vest[] = {"V_PlateCarrierGL_rgr"};
    scope[] = {"optic_hamr"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_mag"),
        LIST_2("30Rnd_65x39_caseless_mag_tracer"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("B_IR_Grenade"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell"),
        LIST_1("1Rnd_SmokeGreen_Grenade_Shell"),
        LIST_1("UGL_FlareCIR_F"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class sl : r
{
    displayName = "Squad Leader";
    vest[] = 
    {
        "V_PlateCarrierSpec_rgr",
        "V_PlateCarrierSpec_mtp"
    };
    headgear[] = {
        "H_HelmetSpecB",
        "H_HelmetSpecB_blk",
        "H_HelmetSpecB_paint2",
        "H_HelmetSpecB_paint1",
        "H_HelmetSpecB_sand",
        "H_HelmetSpecB_snakeskin"
    };
    primaryWeapon[] = {"arifle_MX_F"};
    scope[] = {"optic_hamr"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_6("30Rnd_65x39_caseless_mag"),
        LIST_2("30Rnd_65x39_caseless_mag_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("B_IR_Grenade"),
        LIST_3("11Rnd_45ACP_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_mtp_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_mcamo"};
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_mtp_F"};
    primaryWeapon[] = {"arifle_MX_GL_F"};
    scope[] = {};
    attachment[] = {"acc_pointer_ir"};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_mag"),
        LIST_2("30Rnd_65x39_caseless_mag_tracer"),
        LIST_1("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"arifle_MX_SW_F"};
    scope[] = {};
    bipod[] = {"bipod_01_f_snd"};
    magazines[] =
    {
        LIST_5("100Rnd_65x39_caseless_mag"),
        LIST_1("100Rnd_65x39_caseless_mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_5("100Rnd_65x39_caseless_mag"),
        LIST_1("100Rnd_65x39_caseless_mag_Tracer")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    headgear[] = {"H_HelmetB_camo"};
    primaryWeapon[] = {"arifle_MXM_F"};
    scope[] = {"optic_sos"};
    bipod[] = {"bipod_01_f_snd"};
    magazines[] =
    {
        LIST_7("30Rnd_65x39_caseless_mag"),
        LIST_1("30Rnd_65x39_caseless_mag_tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    primaryWeapon[] = {"MMG_02_camo_F"};
    scope[] = {"optic_hamr"};
    bipod[] = {"bipod_01_f_mtp"};
    magazines[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class mmgac : car
{
    displayName = "MMG Ammo Carrier";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    backPack[] = {"B_Carryall_cbr"};
    backpackItems[] =
    {
        LIST_4("130Rnd_338_Mag"),
        LIST_1("ACE_Tripod")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    vest[] = {"V_Chestrig_rgr"};
    scope[] = {"optic_holosight"};
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_high_weapon_F"};
};
class gmgg : hmgg
{
    displayName = "GMG Gunner";
    backPack[] = {"B_GMG_01_weapon_F"};
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier";
    backPack[] = {"B_GMG_01_high_weapon_F"};
};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
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
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    secondaryWeapon[] = {"launch_MRAWS_sand_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_cbr"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    backPack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    backPack[] = {"B_Kitbag_rgr"};
    scope[] = {"optic_holosight"};
    secondaryWeapon[] = {"launch_B_Titan_short_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_Kitbag_mcamo"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
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
    backPack[] = {"B_Mortar_01_weapon_F"};
    primaryWeapon[] = {"arifle_MXC_F"};
    scope[] = {"optic_holosight"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    headgear[] = 
    {
        "H_HelmetB_light",
        "H_HelmetB_light_black",
        "H_HelmetB_light_desert",
        "H_HelmetB_light_grass",
        "H_HelmetB_light_sand",
        "H_HelmetB_light_snakeskin"
    };
    scope[] = {"optic_holosight"};
    secondaryWeapon[] = {"launch_B_Titan_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_cbr"};
    magazines[] += {"Titan_AA"};
    backpackItems[] = {"Titan_AA"};
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_mcamo"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper";
    uniform[] = {"U_B_FullGhillie_ard"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_LRR_camo_F"};
    scope[] = {"optic_lrps"};
    magazines[] =
    {
        LIST_10("7Rnd_408_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class sp : sn
{
    displayName = "Spotter [DLC]";
    headgear[] = {};
    primaryWeapon[] = 
    {
        "srifle_DMR_03_multicam_F",
        "srifle_DMR_03_tan_F",
        "srifle_EBR_F"
    };
    scope[] = {"optic_hamr"};
    bipod[] = {"bipod_01_f_snd"};
    magazines[] =
    {
        LIST_8("ACE_20Rnd_762x51_Mag_Tracer_Dim"),
        LIST_2("ACE_20Rnd_762x51_Mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
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
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_rgr"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_rgr"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {};
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_6("30Rnd_45ACP_Mag_SMG_01_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {"B_AssaultPack_sgg"};
    headgear[] = {"H_CrewHelmetHeli_B"};
    scope[] = {"optic_holosight"};
    goggles[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_B_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    backPack[] = {};
    headgear[] = {"H_CrewHelmetHeli_B"};
    goggles[] = {};
    scope[] = {"optic_holosight"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_65x39_caseless_mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    scope[] = {"optic_holosight"};
    vest[] = {"V_PlateCarrierGL_mtp"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    attachment[] = {"acc_flashlight"};
    backPack[] = {"B_Carryall_mcamo"};
    Items[] += {
        "MineDetector",
        "ACE_DefusalKit",
        "ACE_M26_Clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    scope[] = {"optic_holosight"};
    vest[] = {"V_PlateCarrierGL_mtp"};
    attachment[] = {"acc_flashlight"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backPack[] = {"B_Carryall_mcamo"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_B"};
    hmd[] = {};
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("30Rnd_45ACP_Mag_SMG_01"),
        "SmokeShell",
        "SmokeShellBlue",
        "Chemlight_Green"
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class UAV : r
{
    displayName = "UAV Operator [BLUFOR]";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};