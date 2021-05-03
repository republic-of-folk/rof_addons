class CfgWeapons {
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class gm_milan_launcher;
    class GVAR(gm_milan_launcher): Launcher_Base_F {
        class ACE_CSW {
            type = "mount";
            deployTime = 4;
            pickupTime = 4;
            deploy = "gm_ge_army_milan_launcher_tripod";
        };
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
            mass = 300;
        };
        scope = 2;
        author = "Boberro, Republic of Folk";
        displayName = "LATGM - Tripod";
        modes[] = {};
		model = "\gm\gm_weapons\gm_launchers\gm_milan\gm_milan_launcher_weaponBag";
		picture = "\gm\gm_weapons\gm_launchers\gm_milan\data\ui\picture_gm_milan_launcher_tripod_ca";
    };

    class GVAR(gm_milan_launcher_proxy): gm_milan_launcher {
        magazineReloadTime = 0.5;
    }
};