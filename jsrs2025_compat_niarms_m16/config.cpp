////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 29 21:56:26 2025 : 'file' last modified on Thu Jan 01 01:00:00 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class jsrs2025_compat_niarms_m16
	{
		name = "JSRS SOUNDMOD 2025 - NIArms M16 Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS SOUNDMOD 2025 - NIArms M16 Compat";
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
			"hlcweapons_M16A2",
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
	class Rifle_Base_F;
	
	class hlc_M16Base: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_wp_m16a2;
	class hlc_wp_M16A1: hlc_M16Base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Burst: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
	class hlc_wp_XM177E2: hlc_M16Base
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
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_FullAuto
		{
			class BaseSoundModeType;
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
	class hlc_wp_XM177E1: hlc_wp_XM177E2
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
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_FullAuto
		{
			class BaseSoundModeType;
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
	class hlc_wp_mod653: hlc_wp_XM177E2
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
		class Burst: Mode_FullAuto
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
	class hlc_wp_mod723: hlc_wp_mod653
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
		class Burst: Mode_FullAuto
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
	class hlc_wp_mod723_delta: hlc_wp_mod723
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
		class Burst: Mode_FullAuto
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
	class hlc_wp_mod727: hlc_M16Base
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
		class Burst: Mode_FullAuto
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
	class hlc_wp_mod733: hlc_wp_mod653
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
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
		class Burst: Mode_FullAuto
		{
			class BaseSoundModeType;
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
	class hlc_wp_M4: hlc_M16Base
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
		class Burst: Mode_Burst
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
	class hlc_wp_C8: hlc_wp_mod723
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
		class Burst: Mode_FullAuto
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
	class hlc_wp_C7: hlc_wp_m16a2
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Burst: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_soundset","jsrs_2025_tailsystem_556mm_rifle_soundset"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m16_shot_silenced_soundset","jsrs_2025_tailsystem_556mm_rifle_silenced_soundset"};
			};
		};
	};
};
