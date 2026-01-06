////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 10.13
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 29 21:56:26 2025 : 'file' last modified on Thu Jan 01 01:00:00 1970
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class jsrs2025_compat_niarms_m60
	{
		name = "JSRS SOUNDMOD 2025 - NIArms M60 Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS SOUNDMOD 2025 - NIArms M60 Compat";
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
			"hlcweapons_m60e4"
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
	
	class hlc_m60e4_base: Rifle_Base_F
	{
		nullbullet[] = {"z\jsrs2025\addons\data\null.wss",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_m60_shot_soundset","jsrs_2025_tailsystem_762mm_lmg_soundset"};
			};
		};
	};
};
