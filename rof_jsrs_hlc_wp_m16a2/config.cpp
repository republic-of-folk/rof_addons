class CfgPatches
{
    class rof_jsrs_hlc_wp_m16a2
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "hlcweapons_M16A2",
            "jsrs_soundmod_framework",
            "jsrs_soundmod_weapons"
        };
        name = "Republic of Folk compatibility fixes";
        author = "Republic of Folk";
        url = "";
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class UGL_F;
    class hlc_wp_m16a2: Rifle_Base_F
    {
        class hlc_M203_M16a2: UGL_F
        {
            class Single: Mode_SemiAuto
            {
                class StandardSound
                {
                    soundClosure[] = {};
                    begin1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\Shot\UGL\Close_1.ogg",1.8,1,800};
                    begin2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\Shot\UGL\Close_2.ogg",1.8,1,800};
                    begin3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\Shot\UGL\Close_3.ogg",1.8,1,800};
                    begin4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\Shot\UGL\Close_4.ogg",1.8,1,800};
                    soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
                    soundsetshot[] = {"jsrs_m32_shot_soundset","jsrs_12x7mm_reverb_soundset"};
                };
            };
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
    class hlc_wp_XM177E2: Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
    class hlc_wp_mod727: Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
    class hlc_wp_mod733: Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
    class hlc_wp_m16A1: hlc_wp_m16a2
    {
        class Single: Single
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m16a4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
    class hlc_wp_xm4: Rifle_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_soundset","jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_m4_shot_silenced_soundset","jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
};