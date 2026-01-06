class CfgPatches
{
	class jsrs_soundmod_2025_Beta_niarms_arsenal_weapons
	{
		name="JSRS Soundmod 2025 Beta - NIArms V14 Compat";
		url="https://www.arma3.com";
		projectname="Arma 3: JSRS Soundmod 2025 Beta - NIArms V14 Compat";
		author="LordJarhead";
		units[]={};
		weapons[]={};
		requiredversion=0.1;
		requiredaddons[]=
		{
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"jsrs_soundmod_2025_Beta",
			"hlcweapons_core",
			"hlcweapons_SG550",
			"hlcweapons_SCAR",
			"hlcweapons_acr",
			"niarms_416",
			"hlcweapons_aks",
			"hlcweapons_M16A2",
			"hlcweapons_ar15",
			"hlcweapons_aug",
			"hlcweapons_falpocalypse",
			"hlcweapons_g3",
			"hlcweapons_g36",
			"niaweapons_226",
			"hlcweapons_m14",
			"hlcweapons_saw",
			"hlcweapons_mp5",
			"hlcweapons_stgw57",
			"hlcweapons_springfield1903",
			"hlcweapons_m60e4",
			"hlcweapons_fhawcovert",
			"hlcweapons_fn3011"
		};
		version="1";
		skipWhenMissingDependencies=1;
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
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_soundset",
					"jsrs_2025_9mm_tails_soundset",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_p226r_combat: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_soundset",
					"jsrs_2025_9mm_tails_soundset",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_mk25tr: hlc_pistol_p226r_combat
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_soundset",
					"jsrs_2025_9mm_tails_soundset",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_mk25rx: hlc_pistol_mk25tr
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_soundset",
					"jsrs_2025_9mm_tails_soundset",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_rook_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_p22640_base: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_p226357_base: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_p228_base: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_p22840_base: hlc_p228_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_p228357_base: hlc_p228_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_zubr_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_p239: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_acpc_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_p239_40: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_pistol_p239_357: hlc_p226_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_zubr_shot_soundset",
					"jsrs_2025_cal45_tails_soundset",
					"jsrs_2025_cal45_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_4five_shot_silenced_soundset",
					"jsrs_2025_cal45_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_acr_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_acr68_sbr_tan: hlc_acr_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_acr556_base: hlc_acr_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class apologysound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_acr_sbr_tan: hlc_acr556_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_ak_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74u_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74u_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_ak12: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_rpk12: hlc_rifle_ak12
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: SilencedSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_ak47: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74u_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74u_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_saiga12k: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_auto_shotgun_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak12_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ak74_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_rk62: hlc_ak_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_akm_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_ar15_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_ru556: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_m4: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_colt727: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_M16Base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_m16a2;
	class hlc_wp_M16A1: hlc_M16Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class Burst: mode_fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_XM177E2: hlc_M16Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_XM177E1: hlc_wp_XM177E2
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_mod653: hlc_wp_XM177E2
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_mod723: hlc_wp_mod653
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_mod723_delta: hlc_wp_mod723
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_mod727: hlc_M16Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_mod733: hlc_wp_mod653
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_M4: hlc_M16Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_C8: hlc_wp_mod723
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m4a1_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_C7: hlc_wp_m16a2
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class Burst: mode_fullauto
		{
			class BaseSoundModeType;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_HK416_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_416D145: hlc_HK416_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_416D10: hlc_rifle_416D145
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_416C: hlc_rifle_416D10
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_BAB: hlc_rifle_416C
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_M27IAR: hlc_rifle_416D145
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_416D165: hlc_rifle_416D145
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_416D20: hlc_rifle_416D145
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_g36_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g36a1: hlc_g36_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_G36KA1: hlc_rifle_g36a1
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_rifle_g36c: hlc_g36_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g36mlic: hlc_g36_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g36kmlic: hlc_rifle_g36mlic
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g36cmlic: hlc_rifle_g36mlic
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_G36V: hlc_g36_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_rifle_G36KV: hlc_rifle_G36V
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_rifle_G36CV: hlc_rifle_G36V
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_g36_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_SCARH_Base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_SCARL_Base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_SCARH_STD: hlc_SCARH_Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SCARH_CQC: hlc_wp_SCARH_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SCARH_DMR: hlc_wp_SCARH_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_MK17IUR_556: hlc_SCARL_Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_MK17IUR_300: hlc_wp_MK17IUR_556
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_MK17IUR_762R: hlc_wp_MK17IUR_300
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SSR: hlc_wp_SCARH_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_SCARL_STD: hlc_SCARL_Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SCARL_CQC: hlc_wp_SCARL_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SCARL_DMR: hlc_wp_SCARL_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_SCAR_PDW: hlc_SCARL_Base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_spar_shot_silenced_soundset",
					"jsrs_2025_56mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_wp_SCARL_STD_300AAC: hlc_wp_SCARL_STD
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_WP_SCARL_CQC_300AAC: hlc_wp_SCARL_STD_300AAC
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: mode_burst
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: mode_fullauto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_scar17_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_bushmaster300: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_vendimus: hlc_rifle_bushmaster300
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_honeybase: hlc_rifle_bushmaster300
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_bcmjack: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ar15_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_tavor_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_samr: hlc_ar15_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_aug_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_aug: hlc_aug_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_auga1carb: hlc_rifle_aug
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_rifle_aughbar: hlc_rifle_aug
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_rifle_augpara: hlc_aug_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_soundset",
					"jsrs_2025_57mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_silenced_soundset",
					"jsrs_2025_57mm_silenced_tails_soundset"
				};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_soundset",
					"jsrs_2025_57mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_silenced_soundset",
					"jsrs_2025_57mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_auga2para: hlc_aug_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_soundset",
					"jsrs_2025_57mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_silenced_soundset",
					"jsrs_2025_57mm_silenced_tails_soundset"
				};
			};
		};
		class single: mode_semiauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_soundset",
					"jsrs_2025_57mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_ad97_shot_silenced_soundset",
					"jsrs_2025_57mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_auga2: hlc_rifle_aug
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_auga2carb: hlc_rifle_auga2
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_car95_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
		};
	};
	class hlc_fal_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_falosw: hlc_fal_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_slr: hlc_fal_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_fal5061: hlc_fal_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_lar: hlc_rifle_fal5061
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Fullauto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_slrchopmod: hlc_rifle_fal5061
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class Fullauto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_fnfal_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_g3_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_psg1: hlc_g3_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g3sg1: hlc_g3_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_dmr_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g3a3: hlc_rifle_g3sg1
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_g3ka4: hlc_rifle_g3a3
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: FullAuto
		{
			class standardsound: StandardSound
			{
				soundsetshot[]=
				{
					"jsrs_2025_g3_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_hk51: hlc_rifle_g3sg1
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_hk53_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_hk53_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_hk53: hlc_g3_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_hk33a2: hlc_g3_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_vector_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_emr_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_m14_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m14_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m14_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m14_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m14_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_saw_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_lim85_shot_soundset",
					"jsrs_2025_556mm_lmg_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_lim85_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_lmg_mk48: hlc_saw_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk200_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk200_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_m60e4_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_m60_shot_soundset",
					"jsrs_2025_762mm_lmg_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
	};
	class hlc_mp5_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_smg_mp5k_pdw: hlc_mp5_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_smg_mp5n: hlc_mp5_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_smg_9mmar: hlc_smg_mp5n
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_smg_mp510: hlc_smg_mp5n
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_soundset",
					"jsrs_2025_9mm_smg_tails_soundset",
					"",
					"jsrs_2025_9mm_echo_soundset"
				};
			};
			class SilencedSound: silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_smg_mp5sd5: hlc_mp5_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class FullAuto: fullauto
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class single: single
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
		class Burst: burst
		{
			class StandardSound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_protector_shot_silenced_soundset",
					"jsrs_2025_9mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_sg550_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_SG551SB: hlc_sg550_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_SG551LB: hlc_rifle_SG551SB
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_SG553SB: hlc_sg550_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_SG553LB: hlc_rifle_SG551SB
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_SG550Sniper: hlc_sg550_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_sg553RSB: hlc_rifle_SG553SB
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_sg553RLB: hlc_rifle_sg553RSB
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class burst: burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_mk20_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_stgw_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_cmr76_shot_silenced_soundset",
					"jsrs_2025_762mm_silenced_tails_soundset"
				};
			};
		};
	};
	class DMR_06_base_f;
	class srifle_DMR_06_F: DMR_06_base_f
	{
		class Single;
		class single_close_optics1;
		class single_far_optics1;
		class single_medium_optics1;
		class fullauto_medium;
		class FullAuto;
	};
	class sp_fwa_sig510_base: srifle_DMR_06_F
	{
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
		class single_close_optics1: single_close_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
		class single_far_optics1: single_far_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
		class single_medium_optics1: single_medium_optics1
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_galil_shot_soundset",
					"jsrs_2025_762mm_tails_soundset",
					"jsrs_2025_762mm_echo_soundset"
				};
			};
		};
	};
	class hlc_springfield_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_small_shot_soundset",
					"jsrs_2025_boltaction_tails_soundset",
					"jsrs_2025_338_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_small_shot_silenced_soundset",
					"jsrs_2025_boltaction_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_awc_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_big_shot_soundset",
					"jsrs_2025_boltaction_tails_soundset",
					"jsrs_2025_338_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_big_shot_silenced_soundset",
					"jsrs_2025_boltaction_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_rifle_awcovert: hlc_awc_base
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: single
		{
			class standardsound: standardsound
			{
				soundsetshot[]=
				{
					"jsrs_2025_cyrus_shot_silenced_soundset",
					"jsrs_2025_93mm_silenced_tails_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_cyrus_shot_silenced_soundset",
					"jsrs_2025_93mm_silenced_tails_soundset"
				};
			};
		};
	};
	class hlc_fn3011_base: rifle_base_f
	{
		nullbullet[]=
		{
			"jsrs_2025\sounds_f_jsrs2025\null.ogg",
			0,
			1,
			0
		};
		soundbullet[]=
		{
			"nullbullet",
			1
		};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_small_shot_soundset",
					"jsrs_2025_boltaction_tails_soundset",
					"jsrs_2025_338_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_2025_boltaction_small_shot_silenced_soundset",
					"jsrs_2025_boltaction_silenced_tails_soundset"
				};
			};
		};
	};
};
