#define _ARMA_

class cfgPatches
{
	class rof_weapons_airsoft
	{
		units[] = {
			"rof_weapon_airsoft_p90_black",
			"rof_weapon_airsoft_p90_camo",
			"rof_weapon_airsoft_p90_khaki",
			"rof_weapon_airsoft_p90_hex",
			"rof_weapon_deadly_airsoft_p90_black",
			"rof_weapon_deadly_airsoft_p90_camo",
			"rof_weapon_deadly_airsoft_p90_khaki",
			"rof_weapon_deadly_airsoft_p90_hex"};
		weapons[] = {
			"rof_weap_airsoft_p90_black",
			"rof_weap_airsoft_p90_camo",
			"rof_weap_airsoft_p90_khaki",
			"rof_weap_airsoft_p90_hex"};
		magazines[] = {
			"rof_50rnd_6mm_bb_airsoft_p90",
			"rof_100rnd_6mm_bb_airsoft_p90",
			"rof_300rnd_6mm_bb_airsoft_p90",
			"rof_50rnd_6mm_deadly_airsoft_p90",
			"rof_100rnd_6mm_deadly_airsoft_p90",
			"rof_300rnd_6mm_deadly_airsoft_p90"};
		requiredversion = 0.1;
		requiredaddons[] = {
			"A3_Weapons_F_Mod_SMGs_SMG_03"};
		version = "1.0";
		author = "Boberro (Republic of Folk)";
	};
};

class CfgRecoils
{
	class recoil_default;
	class rof_recoil_aeg : recoil_default
	{
		permanent = 0;
		temporary = 0.0033;
	};
};

class cfgAmmo
{
	class BulletBase;
	class rof_B_6mm_020g_bb : BulletBase
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		cartridge = "";

		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 100;
		typicalSpeed = 380;
		airFriction = -0.0016;
		caliber = 1.2;
		deflecting = -1;
		airLock = 1;
		tracerScale = 0.5;
		tracerStartTime = 0.01;
		tracerEndTime = 20;
		nvgOnly = 0;

		audibleFire = 30;
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = 8;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
	};
	class rof_B_6mm_020g_deadly : rof_B_6mm_020g_bb
	{
		hit = 9;
	}
};

class CfgMagazines
{
	class 50Rnd_570x28_SMG_03;

	// P90
	class rof_50rnd_6mm_bb_airsoft_p90 : 50Rnd_570x28_SMG_03
	{
		scope = 2;
		displayName = "6mm airsoft 50rnd P90 magazine";
		ammo = "rof_B_6mm_020g_bb";
		count = 50;
		initSpeed = 107;
		tracersEvery = 1;
		descriptionShort = "Real-capacity magazine for airsoft replica of P90";
	};
	class rof_100rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
	{
		displayName = "6mm airsoft 100rnd P90 magazine";
		count = 100;
		descriptionShort = "Mid-capacity magazine for airsoft replica of P90";
	};
	class rof_300rnd_6mm_bb_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
	{
		displayName = "6mm airsoft 300rnd P90 magazine";
		count = 300;
		descriptionShort = "High-capacity magazine for airsoft replica of P90";
	};
	class rof_50rnd_6mm_deadly_airsoft_p90 : rof_50rnd_6mm_bb_airsoft_p90
	{
		displayName = "6mm airsoft (deadly) 50rnd P90 magazine";
		ammo = "rof_B_6mm_020g_deadly";
	};
	class rof_100rnd_6mm_deadly_airsoft_p90 : rof_100rnd_6mm_bb_airsoft_p90
	{
		displayName = "6mm airsoft (deadly) 100rnd P90 magazine";
		ammo = "rof_B_6mm_020g_deadly";
	};
	class rof_300rnd_6mm_deadly_airsoft_p90 : rof_300rnd_6mm_bb_airsoft_p90
	{
		displayName = "6mm airsoft (deadly) 300rnd P90 magazine";
		ammo = "rof_B_6mm_020g_deadly";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgWeapons
{
	class Rifle_Base_F;
	class SMG_03_TR_BASE : Rifle_Base_F
	{
		class OpticsModes
		{
			class Kolimator
			{
			};
		};
		class Single : Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto : Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class SMG_03_black : SMG_03_TR_BASE
	{
		class OpticsModes : OpticsModes
		{
			class Kolimator : Kolimator
			{
			};
			class IronSight : Kolimator
			{
			};
		};
		class Single : Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
			};
			class SilencedSound : BaseSoundModeType
			{
			};
		};
		class FullAuto : Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
			};
			class SilencedSound : BaseSoundModeType
			{
			};
		};
	};
	class rof_weap_airsoft_p90_black : SMG_03_black
	{
		author = "Bohemia Interactive / Republic of Folk";
		displayName = "Replica P90 (Black)";
		descriptionShort = "Most popular beginners' airsoft SMG";
		magazines[] = {"rof_50rnd_6mm_bb_airsoft_p90", "rof_100rnd_6mm_bb_airsoft_p90", "rof_300rnd_6mm_bb_airsoft_p90", "rof_50rnd_6mm_deadly_airsoft_p90", "rof_100rnd_6mm_deadly_airsoft_p90", "rof_300rnd_6mm_deadly_airsoft_p90"};
		maxZeroing = 100;
		modes[] = {"Single", "FullAuto"};
		recoil = "rof_recoil_aeg";

		class OpticsModes : OpticsModes
		{
			class Kolimator : Kolimator
			{
				distanceZoomMin = 25;
				distanceZoomMax = 25;
			};
			class IronSight : IronSight
			{
				distanceZoomMin = 25;
				distanceZoomMax = 25;
			};
		};
		class Single : Mode_SemiAuto
		{
			dispersion = 0.0072;

			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
		class FullAuto : Mode_FullAuto
		{
			dispersion = 0.0072;

			class BaseSoundModeType
			{
			};
			class StandardSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundsetshot[] = {"ADR_97_silencerShot_SoundSet", "ADR_97_silencerTail_SoundSet", "ADR_97_silencerInteriorTail_SoundSet"};
			};
		};
	};
	class rof_weap_airsoft_p90_camo : rof_weap_airsoft_p90_black
	{
		displayName = "Replica P90 (Camo)";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_camo_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_camo_co.paa"};
	};
	class rof_weap_airsoft_p90_khaki : rof_weap_airsoft_p90_black
	{
		displayName = "Replica P90 (Khaki)";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_khaki_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_khaki_co.paa"};
	};
	class rof_weap_airsoft_p90_hex : rof_weap_airsoft_p90_black
	{
		displayName = "Replica P90 (Hex)";
		picture = "\A3\Weapons_F_Mod\SMGs\SMG_03\data\UI\gear_adr97_hex_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Mod\SMGs\SMG_03\data\body_hex_co.paa"};
	};
};

class cfgVehicles
{
	class Weapon_Base_F;

	class rof_weapon_airsoft_p90_base : Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Bohemia Interactive / Republic of Folk";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportMagazines
		{
			class rof_50rnd_6mm_bb_airsoft_p90
			{
				magazine = "rof_50rnd_6mm_bb_airsoft_p90";
				count = 1;
			};
		};
	};
	class rof_weapon_deadly_airsoft_p90_base : Weapon_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Bohemia Interactive / Republic of Folk";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportMagazines
		{
			class rof_50rnd_6mm_deadly_airsoft_p90
			{
				magazine = "rof_50rnd_6mm_deadly_airsoft_p90";
				count = 1;
			};
		};
	};
	class rof_weapon_airsoft_p90_black : rof_weapon_airsoft_p90_base
	{
		displayName = "Airsoft replica P90 (Black)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_black
			{
				weapon = "rof_weap_airsoft_p90_black";
				count = 1;
			};
		};
	};
	class rof_weapon_airsoft_p90_camo : rof_weapon_airsoft_p90_base
	{
		displayName = "Airsoft replica P90 (Camo)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_camo
			{
				weapon = "rof_weap_airsoft_p90_camo";
				count = 1;
			};
		};
	};
	class rof_weapon_airsoft_p90_khaki : rof_weapon_airsoft_p90_base
	{
		displayName = "Airsoft replica P90 (Khaki)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_khaki
			{
				weapon = "rof_weap_airsoft_p90_khaki";
				count = 1;
			};
		};
	};
	class rof_weapon_airsoft_p90_hex : rof_weapon_airsoft_p90_base
	{
		displayName = "Airsoft replica P90 (Hex)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_hex
			{
				weapon = "rof_weap_airsoft_p90_hex";
				count = 1;
			};
		};
	};
	class rof_weapon_deadly_airsoft_p90_black : rof_weapon_deadly_airsoft_p90_base
	{
		displayName = "Airsoft replica (deadly) P90 (Black)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_black
			{
				weapon = "rof_weap_airsoft_p90_black";
				count = 1;
			};
		};
	};
	class rof_weapon_deadly_airsoft_p90_camo : rof_weapon_deadly_airsoft_p90_base
	{
		displayName = "Airsoft replica (deadly) P90 (Camo)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_camo
			{
				weapon = "rof_weap_airsoft_p90_camo";
				count = 1;
			};
		};
	};
	class rof_weapon_deadly_airsoft_p90_khaki : rof_weapon_deadly_airsoft_p90_base
	{
		displayName = "Airsoft replica (deadly) P90 (Khaki)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_khaki
			{
				weapon = "rof_weap_airsoft_p90_khaki";
				count = 1;
			};
		};
	};
	class rof_weapon_deadly_airsoft_p90_hex : rof_weapon_deadly_airsoft_p90_base
	{
		displayName = "Airsoft replica (deadly) P90 (Hex)";
		class TransportWeapons
		{
			class rof_weap_airsoft_p90_hex
			{
				weapon = "rof_weap_airsoft_p90_hex";
				count = 1;
			};
		};
	};
};