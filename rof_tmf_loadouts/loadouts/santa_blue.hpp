class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "xmas_santa_blufor_uniform",
    };
    vest[] = {
        "V_HarnessO_brn",
    };
    backpack[] = {};
    headgear[] = {};
    goggles[] = {""};
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
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifle Santa";
    primaryWeapon[] = {"rhs_weap_kar98k"};
    magazines[] = {
        LIST_20("rhsgref_5Rnd_792x57_kar98k"),
        LIST_1("xmas_explosive_present"),
    };
};
class r_light : baseMan {
    displayName = "Pistol Santa";
    sidearmWeapon[] = {"rhs_weap_makarov_pm"};
    magazines[] = {
        LIST_20("rhs_mag_9x18_8_57N181S"),
        LIST_2("xmas_explosive_present"),
    };
};
class g : r_light {};
class car : r_light {};
class m : r_light {};
class smg : r_light {};
class ftl : baseMan {
    displayName = "SMG Santa";
    primaryWeapon[] = {"rhs_weap_m3a1"};
    magazines[] = {
        LIST_10("rhsgref_30rnd_1143x23_M1T_SMG"),
        LIST_2("SmokeShell"),
    };
};
class sl : ftl {};
class co : ftl {};
class fac : r_light {};
class ar : baseMan {
    displayName = "Nazi Santa (must die!)";
    primaryWeapon[] = {"rhs_weap_mg42"};
    magazines[] = {
        LIST_8("rhsgref_50Rnd_792x57_SmK_alltracers_drum"),
    };
};
class aar : r_light {
};
class rat : r_light {
    displayName = "Panzerfaustsanta";
    secondaryWeapon[] = {"rhs_weap_panzerfaust60"};
    secondaryMagazine[] = {"rhs_panzerfaust60_mag"};
};
class dm : baseMan {
    displayName = "Airsoft Santa";
    primaryWeapon[] = {"rof_weap_airsoft_p90_black"};
    magazines[] = {
        LIST_10("rof_50rnd_6mm_lethal_airsoft_p90"),
        LIST_1("SmokeShell"),
    };
};
class mmgg : r_light {};
class mmgac : r_light {};
class mmgag : r_light {};
class hmgg : r_light {};
class hmgac : r_light {};
class hmgag : r_light {};
class matg : r_light {};
class matac : r_light {};
class matag : r_light {};
class hatg : r_light {};
class hatac : r_light {};
class hatag : r_light {};
class mtrg : r_light {};
class mtrac : r_light {};
class mtrag : r_light {};
class samg : r_light {};
class samag : r_light {};
class sn : r_light {};
class sp : r_light {};
class vc : r_light {};
class vd : r_light {};
class vg : r_light {};
class pp : r_light {};
class pcc : r_light {};
class pc : r_light {};
class jp : r_light {};
class eng : r_light {};
class engm : r_light {};
class UAV_light : r_light {};
class UAV : r_light {};