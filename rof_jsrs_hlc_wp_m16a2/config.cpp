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
                    soundSetShot[] = {"jsrs_sniper_shake_soundset", "jsrs_ugl_shot_soundset", "jsrs_12x7mm_reflector_1"};
                };
            };
        };
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
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
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
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
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
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
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
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
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
            };
        };
        class Burst: Mode_FullAuto
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
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
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType{};
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_5x56mm_sd_reflector_1"};
            };
        };
    };
};