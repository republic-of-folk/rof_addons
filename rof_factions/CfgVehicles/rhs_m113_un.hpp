class APC_Tracked_02_base_F;
class rhsusf_m113tank_base : APC_Tracked_02_base_F
{
    class Attributes
    {
        class ObjectTexture;
        class rhs_hideIFFPanel;
        class rhs_openRamp;
    };
    class AnimationSources
    {
        class IFF_Panels_Hide;
        class ReloadAnim;
        class ReloadMagazine;
        class Revolving;
        class muzzle_rot_hmg;
        class smoke_revolving_source;
        class HatchD;
        class rear_hatch;
        class ramp;
    };
};
class rhsusf_m113_usarmy: rhsusf_m113tank_base {};
class rhsusf_m113_usarmy_M240: rhsusf_m113tank_base {};
class rhsusf_m113_usarmy_unarmed: rhsusf_m113tank_base {};
class rhsusf_m113_usarmy_medical: rhsusf_m113_usarmy_unarmed {};
class rhsusf_m113d_usarmy: rhsusf_m113_usarmy {};
class rhsusf_m113d_usarmy_M240: rhsusf_m113_usarmy_M240 {};
class rhsusf_m113d_usarmy_unarmed: rhsusf_m113_usarmy_unarmed {};
class rhsusf_m113d_usarmy_medical: rhsusf_m113_usarmy_medical {};

class rof_rhsusf_m113_un : rhsusf_m113d_usarmy
{
    // editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy.paa";
    side = 2;
    faction = "rhsgref_faction_un";
    vehicleClass = "rhs_vehclass_apc";
    crew = "rhsgref_cdf_un_crew";
    author = "Republic of Folk";
    hiddenSelectionsTextures[] = {
        "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_h_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_h_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
        "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m23_pintle_un_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_shield_un_co.paa"
    };
    class textureSources
    {
        class standard
        {
            displayName = "UN";
            author = "Republic of Folk";
            textures[] = {
                "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_h_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_h_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m23_pintle_un_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_shield_un_co.paa"
            };
            factions[] = { "rhsgref_faction_un" };
        };
    };
    class Attributes:Attributes
    {
        class ObjectTexture: ObjectTexture {};
        class rhs_openRamp: rhs_openRamp {};
    };
    class AnimationSources: AnimationSources
    {
        class IFF_Panels_Hide: IFF_Panels_Hide {
            initPhase = 1;
        };
        class ReloadAnim: ReloadAnim {};
        class ReloadMagazine: ReloadMagazine {};
        class Revolving: Revolving {};
        class muzzle_rot_hmg: muzzle_rot_hmg {};
        class smoke_revolving_source: smoke_revolving_source {};
        class HatchD: HatchD{};
        class rear_hatch: rear_hatch {};
        class ramp: ramp {};
    };
};
class rof_rhsusf_m113_un_unarmed : rhsusf_m113d_usarmy_unarmed
{
    // editorPreview =
    // "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_unarmed.paa";
    side = 2;
    faction = "rhsgref_faction_un";
    vehicleClass = "rhs_vehclass_apc";
    crew = "rhsgref_cdf_un_crew";
    author = "Republic of Folk";
    hiddenSelectionsTextures[] = {
        "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_l_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
        "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
    };
    class textureSources
    {
        class standard
        {
            displayName = "UN";
            author = "Republic of Folk";
            textures[] = {
                "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_l_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
            };
            factions[] = { "rhsgref_faction_un" };
        };
    };
    class Attributes:Attributes
    {
        class ObjectTexture: ObjectTexture {};
        class rhs_openRamp: rhs_openRamp {};
    };
    class AnimationSources: AnimationSources
    {
        class IFF_Panels_Hide: IFF_Panels_Hide {
            initPhase = 1;
        };
        class ReloadAnim: ReloadAnim {};
        class ReloadMagazine: ReloadMagazine {};
        class Revolving: Revolving {};
        class muzzle_rot_hmg: muzzle_rot_hmg {};
        class smoke_revolving_source: smoke_revolving_source {};
        class HatchD: HatchD{};
        class rear_hatch: rear_hatch {};
        class ramp: ramp {};
    };
};
class rof_rhsusf_m113_un_medical : rhsusf_m113d_usarmy_medical
{
    // editorPreview =
    // "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_medical.paa";
    side = 2;
    faction = "rhsgref_faction_un";
    vehicleClass = "rhs_vehclass_apc";
    crew = "rhsgref_cdf_un_crew";
    author = "Republic of Folk";
    hiddenSelectionsTextures[] = {
        "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_med_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
        "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
    };
    class textureSources
    {
        class standard
        {
            displayName = "UN";
            author = "Republic of Folk";
            textures[] = {
                "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_med_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"
            };
            factions[] = { "rhsgref_faction_un" };
        };
    };
    class Attributes:Attributes
    {
        class ObjectTexture: ObjectTexture {};
        class rhs_openRamp: rhs_openRamp {};
    };
    class AnimationSources: AnimationSources
    {
        class IFF_Panels_Hide: IFF_Panels_Hide {
            initPhase = 1;
        };
        class ReloadAnim: ReloadAnim {};
        class ReloadMagazine: ReloadMagazine {};
        class Revolving: Revolving {};
        class muzzle_rot_hmg: muzzle_rot_hmg {};
        class smoke_revolving_source: smoke_revolving_source {};
        class HatchD: HatchD{};
        class rear_hatch: rear_hatch {};
        class ramp: ramp {};
    };
};
class rof_rhsusf_m113_un_M240 : rhsusf_m113d_usarmy_M240
{
    // editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhsusf_m113d_usarmy_M240.paa";
    side = 2;
    faction = "rhsgref_faction_un";
    vehicleClass = "rhs_vehclass_apc";
    crew = "rhsgref_cdf_un_crew";
    author = "Republic of Folk";
    hiddenSelectionsTextures[] = {
        "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_l_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
        "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
        "rof_addons\rof_factions\data\textures\m113\m23_pintle_un_co.paa"
    };
    class textureSources
    {
        class standard
        {
            displayName = "UN";
            author = "Republic of Folk";
            textures[] = {
                "rof_addons\rof_factions\data\textures\m113\m113a3_01_un_l_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_02_un_l_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m113a3_03_un_co.paa",
                "rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
                "rof_addons\rof_factions\data\textures\m113\m23_pintle_un_co.paa"
            };
            factions[] = { "rhsgref_faction_un" };
        };
    };
    class Attributes:Attributes
    {
        class ObjectTexture: ObjectTexture {};
        class rhs_openRamp: rhs_openRamp {};
    };
    class AnimationSources: AnimationSources
    {
        class IFF_Panels_Hide: IFF_Panels_Hide {
            initPhase = 1;
        };
        class ReloadAnim: ReloadAnim {};
        class ReloadMagazine: ReloadMagazine {};
        class Revolving: Revolving {};
        class muzzle_rot_hmg: muzzle_rot_hmg {};
        class smoke_revolving_source: smoke_revolving_source {};
        class HatchD: HatchD{};
        class rear_hatch: rear_hatch {};
        class ramp: ramp {};
    };
};