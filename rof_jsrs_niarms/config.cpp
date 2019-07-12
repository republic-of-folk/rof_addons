////////////////////////////////////////////////////////////////////
//DeRap: JSRS_Soundmod_Cfg_NIArms_Arsenal_Weapons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jul 02 15:50:38 2019 : 'file' last modified on Wed Jan 16 11:05:18 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgpatches
{
	class rof_jsrs_niarms
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs_soundmod_framework","jsrs_soundmod_weapons","hlcweapons_falpocalypse","hlcweapons_m14","hlcweapons_mp5","hlcweapons_m60e4"};
		version = "1";
		projectname = "jsrs - soundmod";
		author = "lordjarhead";
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class basesoundmodetype;
class cfgweapons
{
	class pistol_base_f;
	class rifle_short_base_f;
	class rifle_base_f;
	class rifle_long_base_f;
	class grenadelauncher;
	class hlc_p226_base: pistol_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_p226r_combat: hlc_p226_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_mk25tr: hlc_pistol_p226r_combat
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_mk25rx: hlc_pistol_mk25tr
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_p22640_base: hlc_p226_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_p226357_base: hlc_p226_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_soundset","jsrs_p226_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p226_shot_silenced_soundset","jsrs_p226_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_p228_base: hlc_p226_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_soundset","jsrs_p228_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_silenced_soundset","jsrs_p228_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_p22840_base: hlc_p228_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_soundset","jsrs_p228_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_silenced_soundset","jsrs_p228_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_p228357_base: hlc_p228_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_soundset","jsrs_p228_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p228_shot_silenced_soundset","jsrs_p228_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_p239: hlc_p226_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_soundset","jsrs_p227_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_silenced_soundset","jsrs_p227_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_p239_40: hlc_p226_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_soundset","jsrs_p227_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_silenced_soundset","jsrs_p227_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_pistol_p239_357: hlc_p226_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_soundset","jsrs_p227_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_p227_shot_silenced_soundset","jsrs_p227_shell_soundset","jsrs_frame_caliber_9mm_silenced"};
			};
		};
	};
	class hlc_acr_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
	};
	class hlc_rifle_acr68_sbr_tan: hlc_acr_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
	};
	class hlc_acr556_base: hlc_acr_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound","apologysound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115arx_shot_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_9x3mm"};
			};
		};
	};
	class hlc_rifle_acr_sbr_tan: hlc_acr556_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_soundset","jsrs_akm_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_type115_shot_silenced_soundset","jsrs_akm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_ak_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_ak12: hlc_ak_base
	{
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_rpk12: hlc_rifle_ak12
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_soundset","jsrs_ak12_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		class fullauto: fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_silenced_soundset","jsrs_ak74_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_silenced_soundset","jsrs_ak74_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_ak47: hlc_ak_base
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_saiga12k: hlc_ak_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_saiga12_shot_soundset","jsrs_frame_caliber_9x3mm"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_cmr76_shot_silenced_soundset","jsrs_cmr76_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ctar_shot_soundset","jsrs_ctar_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ctar_shot_silenced_soundset","jsrs_ctar_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ctar_shot_soundset","jsrs_ctar_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ctar_shot_silenced_soundset","jsrs_ctar_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_rk62: hlc_ak_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ad97_shot_soundset","jsrs_ad97_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ad97_shot_silenced_soundset","jsrs_ad97_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ad97_shot_soundset","jsrs_ad97_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ad97_shot_silenced_soundset","jsrs_ad97_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_ar15_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant5","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant5","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_ru556: hlc_ar15_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant1","jsrs_spar_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_silenced_soundset","jsrs_spar_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant1","jsrs_spar_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_silenced_soundset","jsrs_spar_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_m4: hlc_ar15_base
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_soundset","jsrs_m4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_colt727: hlc_ar15_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_soundset_variant2","jsrs_m4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m4_shot_silenced_soundset","jsrs_m4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_bushmaster300: hlc_ar15_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_vendimus: hlc_rifle_bushmaster300
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_soundset","jsrs_m16a4_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m16a4_shot_silenced_soundset","jsrs_m16a4_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_honeybase: hlc_rifle_bushmaster300
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_asval_shot_soundset","jsrs_asval_shell_soundset","jsrs_frame_caliber_9x3mm_silenced"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_asval_shot_soundset","jsrs_asval_shell_soundset","jsrs_frame_caliber_9x3mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_asval_shot_soundset","jsrs_asval_shell_soundset","jsrs_frame_caliber_9x3mm_silenced"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_asval_shot_soundset","jsrs_asval_shell_soundset","jsrs_frame_caliber_9x3mm_silenced"};
			};
		};
	};
	class hlc_rifle_bcmjack: hlc_ar15_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_soundset","jsrs_m21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_silenced_soundset","jsrs_m21_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_soundset","jsrs_m21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_silenced_soundset","jsrs_m21_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_soundset","jsrs_m21_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_silenced_soundset","jsrs_m21_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_soundset","jsrs_m21_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m21_shot_silenced_soundset","jsrs_m21_shell_soundset","jsrs_frame_caliber_5x56mm_silenced"};
			};
		};
	};
	class hlc_rifle_samr: hlc_ar15_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar17_shot_soundset","jsrs_spar_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_silenced_soundset","jsrs_spar_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar17_shot_soundset","jsrs_spar_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_spar_shot_silenced_soundset","jsrs_spar_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_aug_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_aug: hlc_aug_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_auga1carb: hlc_rifle_aug
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_aughbar: hlc_rifle_aug
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_augpara: hlc_aug_base
	{
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_soundset","jsrs_aug_smg_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_silenced_soundset","jsrs_aug_smg_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_soundset","jsrs_aug_smg_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_silenced_soundset","jsrs_aug_smg_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_auga2para: hlc_aug_base
	{
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_soundset","jsrs_aug_smg_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_silenced_soundset","jsrs_aug_smg_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_soundset","jsrs_aug_smg_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_smg_shot_silenced_soundset","jsrs_aug_smg_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_auga2: hlc_rifle_aug
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_silenced_soundset","jsrs_aug_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_auga2carb: hlc_rifle_auga2
	{
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_aug_shot_soundset","jsrs_aug_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class hlc_fal_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_falosw: hlc_fal_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_slr: hlc_fal_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_fal5061: hlc_fal_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_silenced_soundset","jsrs_fnfal_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_lar: hlc_rifle_fal5061
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_slrchopmod: hlc_rifle_fal5061
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fnfal_shot_soundset","jsrs_fnfal_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class hlc_g3_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_psg1: hlc_g3_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_g3sg1: hlc_g3_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_g3a3: hlc_rifle_g3sg1
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_g3ka4: hlc_rifle_g3a3
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_hk51: hlc_rifle_g3sg1
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_hk53: hlc_g3_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_hk33a2: hlc_g3_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_g36_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_g36a1: hlc_g36_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_g36ka1: hlc_rifle_g36a1
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class burst: burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_g36c: hlc_g36_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_g36mlic: hlc_g36_base
	{
		class single: single
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_silenced_soundset","jsrs_g36_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_g36kmlic: hlc_rifle_g36mlic
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class burst: burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};
	class hlc_rifle_g36cmlic: hlc_rifle_g36mlic
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class burst: burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g36_shot_soundset","jsrs_g36_shell_soundset","jsrs_6x5mm_reflector_1"};
			};
		};
	};
	class hlc_m14_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_soundset","jsrs_mk14_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk14_shot_silenced_soundset","jsrs_mk14_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_saw_base: rifle_base_f
	{
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m249_shot_soundset","jsrs_m249_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m249_shot_silenced_soundset","jsrs_m249_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_lmg_mk48: hlc_saw_base
	{
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk200_shot_soundset","jsrs_m249_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_mk200_shot_silenced_soundset","jsrs_m249_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_m60e4_base: rifle_base_f
	{
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m60e4_shot_soundset","jsrs_m60e4_shell_soundset","jsrs_9x3mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_m60e4_shot_silenced_soundset","jsrs_m60e4_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_mp5_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_smg_mp5k_pdw: hlc_mp5_base
	{
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class burst: burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class hlc_smg_mp5n: hlc_mp5_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_smg_9mmar: hlc_smg_mp5n
	{
		class single: single
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class burst: burst
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class hlc_smg_mp510: hlc_smg_mp5n
	{
		class single: single
		{
			class basesoundmodetype;
            class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class burst: burst
		{
            class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
            class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_soundset","jsrs_protc_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};
	class hlc_smg_mp5sd5: hlc_mp5_base
	{
		class single: single
		{
			class basesoundmodetype;
            class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
            class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
            class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_protc_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_sg550_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_SG551SB: hlc_sg550_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_SG551LB: hlc_rifle_SG551SB
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_SG553SB: hlc_sg550_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_SG553LB: hlc_rifle_SG551SB
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_SG550Sniper: hlc_sg550_base
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_sg553RSB: hlc_rifle_SG553SB
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_sg553RLB: hlc_rifle_sg553RSB
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class burst: mode_burst
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_soundset","jsrs_protc_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_emr_shot_silenced_soundset","jsrs_protc_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_stgw_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_soundset","jsrs_trg21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_silenced_soundset","jsrs_trg21_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class fullauto: mode_fullauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_soundset","jsrs_trg21_shell_soundset","jsrs_5x56mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_trg21_shot_silenced_soundset","jsrs_trg21_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_springfield_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_1903_shot_soundset","jsrs_1903_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
		};
	};
	class hlc_awc_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_awm_shot_soundset","jsrs_awm_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_awm_shot_silenced_soundset","jsrs_awm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_rifle_awcovert: hlc_awc_base
	{
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_awm_shot_silenced_soundset","jsrs_awm_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
	class hlc_fn3011_base: rifle_base_f
	{
		class single: mode_semiauto
		{
			sounds[] = {"standardsound","silencedsound"};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_soundset","jsrs_fn3011_shell_soundset","jsrs_12x7mm_reflector_1"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_fn3011_shot_silenced_soundset","jsrs_fn3011_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};
};
