////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 29 21:56:26 2025 : 'file' last modified on Thu Jan 01 01:00:00 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class jsrs2025_compat_niarms_mp5
	{
		name = "JSRS SOUNDMOD 2025 - NIArms MP5 Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS SOUNDMOD 2025 - NIArms MP5 Compat";
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
			"hlcweapons_mp5"
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
	
	class hlc_mp5_base: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class hlc_smg_mp5k_pdw: hlc_mp5_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class hlc_smg_mp5n: hlc_mp5_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Burst: Mode_Burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class hlc_smg_9mmar: hlc_smg_mp5n
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class hlc_smg_mp510: hlc_smg_mp5n
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_soundset","jsrs_2025_tailsystem_9mm_SMG_sonic_soundset",""};
			};
			class SilencedSound: SilencedSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sonic_soundset"};
			};
		};
	};
	class hlc_smg_mp5sd5: hlc_mp5_base
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sub_soundset"};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sub_soundset"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[] = {"jsrs_2025_protector_shot_silenced_soundset","jsrs_2025_tailsystem_9mm_SMG_silenced_sub_soundset"};
			};
		};
	};
};
