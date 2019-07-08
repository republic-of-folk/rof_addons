////////////////////////////////////////////////////////////////////
//DeRap: JSRS_Soundmod_Cfg_NIArms_Arsenal_Weapons\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Jul 02 15:50:38 2019 : 'file' last modified on Wed Jan 16 11:05:18 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class cfgPatches
{
	class rof_jsrs_gm
	{
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {"a3_sounds_f","a3_weapons_f","a3_sounds_f_exp","a3_weapons_f_exp","jsrs_soundmod_framework","jsrs_soundmod_weapons","gm_weapons_ammoboxes","gm_weapons_attachments_muzzle","gm_weapons_attachments_optics","gm_weapons_attachments_optics_feroz24","gm_weapons_attachments_optics_feroz2x17","gm_weapons_attachments_optics_pgo7","gm_weapons_attachments_side","gm_weapons_equipment_binoculars_df7x40","gm_weapons_equipment_binoculars_edf7x40","gm_weapons_equipment_binoculars_fero51","gm_weapons_equipment_binoculars_ferod12","gm_weapons_equipment_binoculars_ferod16","gm_weapons_items","gm_weapons_items_gc_items","gm_weapons_items_ge_items","gm_weapons_launchers_milan","gm_weapons_optics","gm_weapons_ammo","gm_weapons_cannons_100mm_d10t","gm_weapons_cannons_105mm_l7","gm_weapons_cannons_145mm_kpvt","gm_weapons_cannons_23mm_2a7","gm_weapons_cannons_35mm_l90","gm_weapons_cannons_73mm_2a28","gm_weapons_cannons_76mm_d56t","gm_weapons_countermeasures","gm_weapons_launchers_carlgustaf","gm_weapons_launchers_fagot","gm_weapons_launchers_maljutka","gm_weapons_launchers_pzf44_2","gm_weapons_launchers_rpg7","gm_weapons_machineguns_mg3","gm_weapons_machineguns_pk","gm_weapons_machinepistols_gm_mp2","gm_weapons_pistols_lp1","gm_weapons_pistols_p1","gm_weapons_pistols_p2a1","gm_weapons_pistols_pm","gm_weapons_put","gm_weapons_rifles_ak47","gm_weapons_rifles_ak74","gm_weapons_rifles_g3","gm_weapons_throw","gm_weapons_launchers_fagot_gm_gc_army_fagot","gm_weapons_launchers_milan_gm_ge_army_milan","gm_weapons_ammoboxes","gm_weapons_attachments_muzzle","gm_weapons_attachments_optics","gm_weapons_attachments_optics_feroz24","gm_weapons_attachments_optics_feroz2x17","gm_weapons_attachments_optics_pgo7","gm_weapons_attachments_side","gm_weapons_equipment_binoculars_df7x40","gm_weapons_equipment_binoculars_edf7x40","gm_weapons_equipment_binoculars_fero51","gm_weapons_equipment_binoculars_ferod12","gm_weapons_equipment_binoculars_ferod16","gm_weapons_items","gm_weapons_items_gc_items","gm_weapons_items_ge_items","gm_weapons_launchers_milan","gm_weapons_optics","gm_weapons_ammo","gm_weapons_cannons_100mm_d10t","gm_weapons_cannons_105mm_l7","gm_weapons_cannons_145mm_kpvt","gm_weapons_cannons_23mm_2a7","gm_weapons_cannons_35mm_l90","gm_weapons_cannons_73mm_2a28","gm_weapons_cannons_76mm_d56t","gm_weapons_countermeasures","gm_weapons_launchers_carlgustaf","gm_weapons_launchers_fagot","gm_weapons_launchers_maljutka","gm_weapons_launchers_pzf44_2","gm_weapons_launchers_rpg7","gm_weapons_machineguns_mg3","gm_weapons_machineguns_pk","gm_weapons_machinepistols_gm_mp2","gm_weapons_pistols_lp1","gm_weapons_pistols_p1","gm_weapons_pistols_p2a1","gm_weapons_pistols_pm","gm_weapons_put","gm_weapons_rifles_ak47","gm_weapons_rifles_ak74","gm_weapons_rifles_g3","gm_weapons_throw","gm_weapons_launchers_fagot_gm_gc_army_fagot","gm_weapons_launchers_milan_gm_ge_army_milan"};
		version = "1";
		projectname = "jsrs - soundmod";
		author = "lordjarhead, boberro";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class gm_SemiAuto: Mode_SemiAuto{};
class gm_FullAuto: Mode_FullAuto{};

class cfgWeapons
{
	class gm_rifle_base;
	class gm_machineGun_base;
	class gm_aks74n_base;
	class gm_pistol_base;
	class gm_launcher_base;

	class gm_g3_base: gm_rifle_base
	{
		class SemiAuto: gm_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: gm_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_soundset","jsrs_g3_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_g3_shot_silenced_soundset","jsrs_g3_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};

	class gm_pk_base: gm_machineGun_base
	{
		class FullAuto: gm_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_pkm_shot_soundset","jsrs_pkm_shell_soundset","jsrs_762mm_echo_soundset","jsrs_7x62mm_reflector_1"};
			};
		};
	};

	class gm_ak47_base: gm_rifle_base
	{
		class SemiAuto: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: gm_FullAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};

	class gm_ak74_base: gm_rifle_base
	{
		class SemiAuto: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_silenced_soundset","jsrs_ak74_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: gm_FullAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_silenced_soundset","jsrs_ak74_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};

	class gm_aks74nk_base: gm_aks74n_base
	{
		class SemiAuto: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
		class FullAuto: gm_FullAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_soundset","jsrs_ak74u_shell_soundset","jsrs_7x62mm_reflector_1"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74u_shot_silenced_soundset","jsrs_ak74u_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
			};
		};
	};

	class gm_rpk74_base: gm_ak74_base
	{
		class FullAuto: gm_FullAuto
        {
            class BaseSoundModeType{};
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class silencedsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
            };
        };
        class SemiAuto: gm_SemiAuto
        {
        	class BaseSoundModeType{};
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak74_shot_soundset","jsrs_ak74_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class silencedsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
            };
        };
	};

	class gm_rpk_base: gm_ak47_base
	{
		class FullAuto: gm_FullAuto
        {
            class BaseSoundModeType{};
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class silencedsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
            };
        };
        class SemiAuto: gm_SemiAuto
        {
            class BaseSoundModeType{};
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_akm_shot_soundset","jsrs_akm_shell_soundset","jsrs_7x62mm_reflector_1"};
            };
            class silencedsound: BaseSoundModeType
            {
                soundsetshot[] = {"jsrs_rifle_shake_soundset","jsrs_ak12_shot_silenced_soundset","jsrs_ak12_shell_soundset","jsrs_frame_caliber_7x62mm_silenced"};
            };
        };
	};

	class gm_mg3_base: gm_machineGun_base
	{
		class FullAuto: gm_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"gm_mg3_internalShot_SoundSet", "jsrs_mg42_shot_soundset", "jsrs_m60e4_shell_soundset", "jsrs_7x62mm_reflector_1"};
			};
		};
	};

	class gm_mp2_base: gm_rifle_base
	{
		class SemiAuto: gm_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_smg45_shot_soundset","jsrs_smg45_shell_soundset","jsrs_small_echo_soundset","jsrs_cal45_reflector_1"};
			};
		};
		class Fullauto: gm_FullAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_smg45_shot_soundset","jsrs_smg45_shell_soundset","jsrs_small_echo_soundset","jsrs_cal45_reflector_1"};
			};
		};
	};

	class gm_p1_base: gm_pistol_base
	{
		class manual: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_pm9m_shot_soundset","jsrs_pm9m_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};

	class gm_pm_base: gm_pistol_base
	{
		class manual: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_pistol_shake_soundset","jsrs_pm9m_shot_soundset","jsrs_pm9m_shell_soundset","jsrs_9mm_reflector_1"};
			};
		};
	};

	class gm_pzf44_2_base: gm_launcher_base
	{
		class Single: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_sniper_shake_soundset","jsrs_rpg7v_shot_soundset","jsrs_warhead_reflector_1"};
			};
		};
	};

	class gm_carlgustaf_m2_base: gm_launcher_base
	{
		class Single: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_sniper_shake_soundset","jsrs_smaw_shot_soundset","jsrs_warhead_reflector_1"};
			};
		};
	};

	class gm_rpg7_base: gm_launcher_base
	{
		class Single: gm_SemiAuto
		{
			class BaseSoundModeType {};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_sniper_shake_soundset","jsrs_rpg7v_shot_soundset","jsrs_warhead_reflector_1"};
			};
		};
	};
};
