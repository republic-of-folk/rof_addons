class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"U_B_CTRG_Soldier_F"};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {"G_Balaclava_TI_tna_F"};
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
        LIST_2("ACE_CableTie"),
        LIST_1("ACE_Earplugs"),
        LIST_1("ACE_IR_Strobe_Item")
    };
    // These are added directly into their respective slots
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
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
    headgear[] = {"H_HelmetB_TI_tna_F"};
    goggles[] = {"G_Balaclava_TI_tna_F"};
    hmd[] = {"NVGogglesB_grn_F"};
    vest[] = {"V_PlateCarrier2_rgr_noflag_F"};
    backpack[] = {"B_AssaultPack_sgg"};
    primaryWeapon[] = {"arifle_SPAR_02_khk_F"};
    scope[] = {"optic_erco_khk_f"};
    attachment[] = {"acc_pointer_ir"};
    silencer[] =
    {
        "muzzle_snds_m",
        "muzzle_snds_m_khk_f"
    };
    sidearmWeapon[] = {"hgun_P07_khk_f"};
    magazines[] =
    {
        LIST_10("30Rnd_556x45_Stanag_red"),
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
    primaryWeapon[] = {"arifle_SPAR_01_khk_F"};
    headgear[] = {};
    vest[] = {"V_TacVest_oli"};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_SPAR_01_GL_khk_F"};
    magazines[] =
    {
        LIST_8("30Rnd_556x45_Stanag_red"),
        LIST_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim"),
        LIST_1("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_2("HandGrenade"),
        LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_2("UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    vest[] = {"V_PlateCarrier1_rgr_noflag_F"};
    primaryWeapon[] = {"arifle_SPAR_01_khk_F"};
    headgear[] = {};
};
class m : r 
{
    displayName = "Medic";
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_4("ACE_bloodIV_250"),
        LIST_2("ACE_bloodIV_500"),
        LIST_1("ACE_bloodIV")
    };
    items[] += {LIST_3("SmokeShell")};
};
class smg : r_light
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_TR_black"};
    scope[] = {"optic_aco_smg"};
    silencer[] = {"muzzle_snds_570"};
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
    primaryWeapon[] = {"arifle_SPAR_01_GL_khk_F"};
    scope[] = {"optic_erco_khk_f"};
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag_red"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_1("ACE_30Rnd_556x45_Stanag_Tracer_dim"),
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
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class sl : ftl
{
    displayName = "Squad Leader";
    primaryWeapon[] = {"arifle_SPAR_02_blk_F"};
    scope[] = {"optic_erco_blk_f"};
    silencer[] = {"muzzle_snds_m"};
    sidearmWeapon[] = {"hgun_Pistol_heavy_01_F"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_8("30Rnd_556x45_Stanag_red"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim"),
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
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_eaf_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"rhssaf_beret_red"};
    uniform[] = {"U_B_CTRG_Soldier_3_F"};
    goggles[] = {};
    hmd[] = {};
};
class fac : car
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_eaf_F"};
    primaryWeapon[] =
    {
        "arifle_SPAR_01_GL_khk_F",
        "arifle_SPAR_01_GL_blk_F"
    };
    scope[] = {};
    silencer[] =
    {
        "muzzle_snds_m",
        "muzzle_snds_m_khk_f"
    };
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag_red"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_red"),
        LIST_1("HandGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("ACE_M84"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"arifle_SPAR_02_khk_F"};
    scope[] = {"optic_erco_khk_f"};
    bipod[] = {"bipod_01_f_khk"};
    magazines[] =
    {
        LIST_3("150Rnd_556x45_Drum_Mag_F"),
        LIST_1("150Rnd_556x45_Drum_Mag_Tracer_F"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("16Rnd_9x21_red_Mag")
    };
};
class aar : car
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_3("150Rnd_556x45_Drum_Mag_F"),
        LIST_1("150Rnd_556x45_Drum_Mag_Tracer_F")
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
    primaryWeapon[] = {"arifle_SPAR_03_khk_F"};
    scope[] = {"optic_sos_khk_f"};
    silencer[] = 
    {
        "muzzle_snds_b_khk_f",
        "muzzle_snds_b"
    };
    bipod[] = {"bipod_01_f_khk"};
    magazines[] =
    {
        LIST_8("20Rnd_762x51_Mag"),
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
    primaryWeapon[] = {"MMG_02_black_F"};
    scope[] = {"optic_erco_blk_f"};
    bipod[] = {"bipod_01_F_blk"};
    silencer[] = {"muzzle_snds_338_black"};
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
class mmgac : r_light
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_4("130Rnd_338_Mag"),
        LIST_1("ACE_Tripod")
    };
};
class mmgag : aar
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
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_3("130Rnd_338_Mag"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"B_HMG_01_weapon_F"};

};
class hmgac : car
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"B_HMG_01_weapon_F"};
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
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
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_olive_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
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
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    backPack[] = {"B_Kitbag_sgg"};
    secondaryWeapon[] = {"launch_B_Titan_short_tna_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
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
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"B_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_B_Titan_tna_F"};
    secondaryAttachments[] = {"acc_pointer_ir"};
    backPack[] = {"B_FieldPack_oli"};
    magazines[] += {"Titan_AA"};
    backpackItems[] += {"Titan_AA"};
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper [DLC]";
    uniform[] = {"U_B_T_FullGhillie_tna_F"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"srifle_DMR_02_camo_F"};
    scope[] = {"optic_ams_khk"};
    attachment[] = {"acc_pointer_ir"};
    silencer[] = {"muzzle_snds_338_green"};
    bipod[] = {"bipod_01_F_khk"};
    magazines[] =
    {
        LIST_8("10Rnd_338_Mag"),
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
    displayName = "Spotter";
    headgear[] = {};
    primaryWeapon[] = {"arifle_SPAR_03_khk_F"};
    scope[] = {"optic_erco_khk_f"};
    bipod[] = {"bipod_01_f_khk"};
    silencer[] = {"muzzle_snds_b_khk_f"};
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
        "ItemRadio",
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
class vc : smg
{
    displayName = "Vehicle Commander";
    headgear[] = {"H_HelmetCrew_B"};
    uniform[] = {"U_B_CTRG_Soldier_2_F"};
    goggles[] = {"default"};
    silencer[] = {};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    silencer[] = {};
    uniform[] = {"U_B_CTRG_Soldier_2_F"};
    goggles[] = {"default"};
    backpack[] = {"B_AssaultPack_rgr"};
    headgear[] = {"H_HelmetCrew_B"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    silencer[] = {};
    uniform[] = {"U_B_CTRG_Soldier_2_F"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_B"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    silencer[] = {};
    hmd[] = {"NVGogglesB_blk_F"};
    uniform[] = {"U_B_CTRG_Soldier_3_F"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
};
class pcc : smg
{

    displayName = "Helicopter Crew Chief";
    backpack[] = {"B_AssaultPack_rgr"};
    uniform[] = {"U_B_CTRG_Soldier_3_F"};
    silencer[] = {};
    hmd[] = {"NVGogglesB_blk_F"};
    headgear[] = {"H_CrewHelmetHeli_B"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    silencer[] = {};
    hmd[] = {"NVGogglesB_blk_F"};
    uniform[] = {"U_B_CTRG_Soldier_3_F"};
    headgear[] = {"H_CrewHelmetHeli_B"};
    goggles[] = {};
    linkedItems[] += {"ItemGPS"};
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backPack[] = {"B_Carryall_oli"};
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
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backPack[] = {"B_Carryall_oli"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_B"};
    uniform[] = {"U_B_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"SMG_01_F"};
    scope[] = {"optic_holosight_smg"};
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
class UAV : car
{
    displayName = "UAV Operator [BLUFOR]";
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_UavTerminal"};
};