class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_B_GEN_Soldier_F"
    };
    vest[] = {
        "rhsgref_6b23_khaki"
    };
    backpack[] = {};
    headgear[] = {
        "rhsgref_helmet_M1_bare",
        "rhsgref_helmet_M1_bare_alt01"
    };
    goggles[] = {
        "default",
        "default",
        "G_Aviator",
        "murshun_cigs_cig1",
        "murshun_cigs_cig2"
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
        LIST_1("ACE_salineIV_500"),
        LIST_1("ACE_splint"),
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
    code = "";
    traits[] = {};
};
class r : baseMan
{
    displayName = "Shotgunner";
    primaryWeapon[] = {"rhs_weap_M590_5RD"};
    scope[] = {};
    magazines[] =
    {
        LIST_10("rhsusf_5Rnd_Slug"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class smg : baseMan
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"hlc_smg_mp5a2"};
    scope[] = {};
    attachment[] = {"hlc_acc_Surefiregrip"};
    magazines[] =
    {
        LIST_8("hlc_30Rnd_9x19_GD_MP5"),
        LIST_1("rhs_mag_m67"),
        LIST_1("rhs_mag_an_m8hc")
    };
};
class r_light : baseMan
{
    displayName = "Pistolman";
    sidearmWeapon[] = {"hgun_P07_khk_F"};
    magazines[] =
    {
        LIST_7("16Rnd_9x21_Mag")
    };
};
class ftl : smg
{
    displayName = "Officer (pistol)";
    headgear[] = {"rds_police_cap"};
    vest[] = {"rhsgref_6b23_khaki_officer"};
    magazines[] += {
        LIST_2("rhs_mag_m67"),
        LIST_2("rhs_mag_an_m8hc")
    };
    backpack[] = {"usm_pack_200rnd_556_bandoliers"};
};

// Defaulted:
class g : r {};
class car : r {};
class m : r  {};
class sl : ftl {};
class co : ftl {};
class fac : r {};
class ar : smg {};
class aar : smg {};
class rat : r {};
class dm : r {};
class mmgg : smg {};
class mmgac : smg {};
class mmgag : smg {};
class hmgg : smg {};
class hmgac : smg {};
class hmgag : smg {};
class matg : r {};
class matac : r {};
class matag : r {};
class hatg : r {};
class hatac : r {};
class hatag : r {};
class mtrg : r {};
class mtrac : r {};
class mtrag : r {};
class samg : r {};
class samag : r {};
class sn : r {};
class sp : r {};
class vc : r_light {};
class vd : r_light {};
class vg : r_light {};
class pp : r_light {};
class pcc : r_light {};
class pc : r_light {};
class jp : r_light {};
class eng : r {};
class engm : r {};
class UAV_light : r {};
class UAV : r {};