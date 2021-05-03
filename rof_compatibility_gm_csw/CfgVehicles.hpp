class CfgVehicles {
    class LandVehicle;
    class StaticWeapon: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions;
        };
    };
    class gm_staticWeapon_base: StaticWeapon {};
	class gm_staticATGM_base: gm_staticWeapon_base {};

	class gm_milan_launcher_tripod_base : gm_staticATGM_base {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {
                position = "[0.0134998,-0.205584,-1.15746]";
            };
        };
		class ace_csw {
            enabled = 1; // whether or not the weapon is affected by CSW                
            proxyWeapon = QGVAR(gm_milan_launcher_proxy); // The weapon that will be added to the CSW on initialization. Used to ensure lower ammo-reload time when using Ammo Handling
            magazineLocation = "_target selectionPosition 'mainturret_elev'"; // The location of the magazine. Where the action for ammo-handling will appear on the weapon
            disassembleWeapon = QGVAR(gm_milan_launcher); // What the weapon will disassemble to
            disassembleTurret = ""; // Which tripod will appear when weapon has been disassembled
            ammoLoadTime = 7; // How long it takes in seconds to load ammo into the weapon           
            ammoUnloadTime = 5; // How long it takes in seconds to unload ammo from the weapon
            desiredAmmo = 1; // When the weapon is reloaded it will try and reload to this ammo capacity
            // disassembleFunc = "myCoolFunction.sqf"; // A callback function for when the CSW gets disassembled. Arguments: [tripod, staticWeapon]
        };
	};
};