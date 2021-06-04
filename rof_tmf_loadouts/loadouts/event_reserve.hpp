class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "rhs_uniform_flora_patchless"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "rhs_fieldcap_digi",
        "rhs_fieldcap_digi2",
    };
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
    code = "_this addItem 'murshun_cigs_cigpack'; if (random 1 < 0.5) then { _this addItem 'murshun_cigs_lighter'; } else { _this addItem 'murshun_cigs_matches'; };";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class car : baseMan
{
    displayName = "Rifleman Light (Carabinier)";
    vest[] = {"rhs_6b23_engineer"};
    headgear[] = {
        "rhs_6b26",
    };
    primaryWeapon[] = {
        "rhs_weap_ak74m",
        "rhs_weap_ak74m_fullplum"
    };
    silencer[] = {"rhs_acc_dtk"};
    magazines[] =
    {
        LIST_5("rhs_30Rnd_545x39_7N22_plum_AK"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_rgd5")
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
    vest[] = {"rhs_6b23_rifleman"};
    magazines[] +=
    {
        LIST_5("rhs_30Rnd_545x39_7N22_plum_AK"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_rgd5")
    };
    backpack[] = {"rhs_sidor"};
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class g : r
{
    displayName = "Grenadier";
    vest[] = {
        "rhs_6b23_6sh116_vog_flora",
        "rhs_6b23_6sh116_vog_od"
    };
    primaryWeapon[] = {
        "rhs_weap_ak74m_gp25",
        "rhs_weap_ak74m_fullplum_gp25"
    };
    magazines[] +=
    {
        LIST_2("rhs_GDM40"),
        LIST_2("rhs_VG40TB"),
        LIST_6("rhs_VOG25")
    };
    backpack[] = {"rhs_sidor"};
};
class m : car 
{
    displayName = "Medic";
    traits[] += {"medic"};
    headgear[] = {"rhs_fieldcap_helm"};
    vest[] = {"rhs_6b23_medic"};
    backpack[] = {"rhs_sidor"};
    items[] += {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
        "rhs_6b26"
    };
};
class rfa : car 
{
    displayName = "Rifleman (First aid)";
    backpack[] = {"rhs_medic_bag"};
    items[] += {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_salineIV_500"),
    };
};
class smg : car
{
    displayName = "Submachinegunner";
    vest[] = {"rhs_6b23_vydra_3m"};
    primaryWeapon[] = {"rhs_weap_aks74u"};
    silencer[] = {"rhs_acc_pgs64_74u"};
};
class ftl : g
{
    displayName = "Fireteam Leader";
    vest[] = {"rhs_6b13_EMR_6sh92_radio"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class sl : car
{
    displayName = "Squad Leader";
    vest[] = {"rhs_6b23_6sh92_headset_mapcase"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] +=
    {
        LIST_2("rhs_mag_9x19_17")
    };
    linkedItems[] +=
    {
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"rhs_fieldcap_helm"};
    items[] += {"rhs_6b26"};
};
class fac : car
{
    displayName = "Radioman";
    backpack[] = {"B_RadioBag_01_tropic_F"};
};
class ar : car
{
    displayName = "Automatic Rifleman";
    backpack[] = {"rhs_sidor"};
    primaryWeapon[] = {"rhs_weap_pkm"};
    silencer[] = {};
    magazines[] =
    {
        LIST_3("rhs_100Rnd_762x54mmR_7N26"),
        LIST_1("SmokeShell"),
        LIST_1("rhs_mag_rgd5")
    };
};
class aar : g
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_7N26")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_rpg26"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_svds"};
    scope[] = {"rhs_acc_pso1m21"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_11("rhs_10Rnd_762x54mmR_7N14"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("SmokeShell"),
        LIST_2("rhs_mag_9x19_17")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    };
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_100Rnd_762x54mmR_7N26")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_kord_carry"};

};
class hmgag : car
{
    displayName = "HMG Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_kordCarryTripod"};
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
};
class hmgac : car
{
    displayName = "HMG Ammo Carrier (CSW)";
    vest[] = {"rhs_6b23_rifleman"};
    backpack[] = {"B_Bergen_tna_F"};
    backpackItems[] = {
        LIST_6("ace_csw_50Rnd_127x108_mag"),
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_rpg7"};
    secondaryMagazine[] = {"rhs_rpg7_PG7VL_mag"};
    secondaryAttachments[] = {"rhs_acc_pgo7v3"};
    backPack[] = {"rhs_rpg_empty"};
    magazines[] +=
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        LIST_1("rhs_rpg7_PG7VR_mag")
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    vest[] = {"rhs_6b23_rifleman"};
    backPack[] = {"rhs_rpg_empty"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        LIST_1("rhs_rpg7_TBG7V_mag")
    };
    linkedItems[] += {"Rangefinder"};
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("rhs_rpg7_PG7VL_mag"),
        LIST_1("rhs_rpg7_PG7VR_mag")
    };
};
class hatg : car
{
    displayName = "HAT Gunner (CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_afrf3_kornet_carry"};
};
class hatag : car
{
    displayName = "HAT Assistant Gunner (CSW)";
    vest[] = {"rhs_6b23_rifleman"};
    linkedItems[] +=
    {
        "Binocular",
        "ItemGPS"
    };
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {
        LIST_4("ace_compat_rhs_afrf3_mag_9m133m2")
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class hatac : car
{
    displayName = "HAT Ammo Carrier (CSW)";
    vest[] = {"rhs_6b23_rifleman"};
    backpack[] = {"B_Bergen_tna_F"};
    backpackItems[] = {
        LIST_6("ace_compat_rhs_afrf3_mag_9m133m2")
    };
    items[] += {
        "ACE_EntrenchingTool"
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
    backpack[] = {"B_Carryall_oli"};
};
class mtrac : car
{
    displayName = "Mortar Ammo Carrier (CSW)";
    vest[] = {"rhs_6b23_rifleman"};
    backpack[] = {"B_Bergen_tna_F"};
    backpackItems[] = {
        LIST_6("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_igla"};
    backPack[] = {"B_Carryall_oli"};
    magazines[] +=
    {
        LIST_2("Titan_AA")
    };
};
class samag : car
{
    displayName = "AA Assistent Missile Specialist";
    linkedItems[] += {"Binocular"};
    backPack[] = {"B_Bergen_tna_F"};
    backpackItems[] =
    {
        LIST_4("Titan_AA")
    };
};
class sn : car
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    uniform[] = {"U_I_FullGhillie_sard"};
    vest[] = {"rhs_6b23_sniper"};
    goggles[] = {"rhs_balaclava1_olive"};
    primaryWeapon[] = {"rhs_weap_t5000"};
    scope[] = {"rhs_acc_dh520x56"};
    bipod[] = {"rhs_acc_harris_swivel"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] =
    {
        LIST_12("rhs_5Rnd_338lapua_t5000"),
        LIST_2("rhs_mag_rgd5"),
        LIST_2("rhs_mag_9x19_17")
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
    uniform[] = {"U_I_FullGhillie_sard"};
    goggles[] = {"rhs_balaclava1_olive"};
    scope[] = {"rhs_acc_1p29"};
    linkedItems[] =
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
class vg : smg
{
    displayName = "Vehicle Gunner";
    vest[] = {"rhs_6b23_crew"};
    headgear[] = {"rhs_tsh4"};
    backpack[] = {"rhs_sidor"};
};
class vc : vg
{
    displayName = "Vehicle Commander";
    vest[] = {"rhs_6b23_crewOfficer"};
    secondaryWeapon[] = {"rhs_weap_pya"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("rhs_mag_9x19_17")
    };
};
class vd : vg
{
    displayName = "Vehicle Driver";
    traits[] += {"engineer"};
    backpack[] = {"rhs_sidor"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : baseMan
{
    displayName = "Helicopter Crew";
    uniform[] = {"rhs_uniform_df15_tan"};
    headgear[] = {
        "rhs_zsh7a_mike_green",
        "rhs_zsh7a_mike_green_alt",
    };
    vest[] = {"rhs_vydra_3m"};
    backpack[] = {"rhs_sidor"};
    sidearmWeapon[] = {"rhs_weap_pya"};
    magazines[] = {
        LIST_2("rhs_mag_9x19_17"),
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
    linkedItems[] += {"ItemGPS"};
};
class jp : pc
{
    displayName = "Jet pilot";
    backpack[] = {"ACE_NonSteerableParachute"};
    vest[] = {"rhs_vest_commander"};
    headgear[] = {
        "rhs_zsh7a",
        "rhs_zsh7a_alt"
    };
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {
        "engineer ",
        "explosiveSpecialist"
    };
    headgear[] = {"rhs_altyn"};
    backPack[] = {"rhs_assault_umbts_engineer_empty"};
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
    backPack[] = {"B_Carryall_oli"};
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
class UAV_light : car
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"O_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
    backpack[] = {"O_UAV_01_backpack_F"};
};