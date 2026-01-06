////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 29 21:56:26 2025 : 'file' last modified on Thu Jan 01 01:00:00 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class jsrs2025_compat_niarms_ar15
	{
		name = "JSRS SOUNDMOD 2025 - NIArms AR-15";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS SOUNDMOD 2025 - NIArms AR-15";
		author = "LordJarhead";
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.2;
		requiredaddons[] = {
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"jsrs2025_config_c",
			"hlcweapons_core",
			"hlcweapons_ar15"
		};
		skipWhenMissingDependencies = 1;
		version = "4.0.0.5";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModeType;
class cfgweapons
{
	class Pistol_Base_F;
	class Rifle_Base_F;
	
	class hlc_ar15_base: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_ru556: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_m4: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_colt727: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m4a1_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_bushmaster300: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_vendimus: hlc_rifle_bushmaster300
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_honeybase: hlc_rifle_bushmaster300
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_mk20_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_bcmjack: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_tavor_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_rifle_samr: hlc_ar15_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
};
