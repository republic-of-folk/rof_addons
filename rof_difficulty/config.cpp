class CfgPatches {
    class rof_difficulty {
        name = "Republic of Folk difficulty settings";
        author = "Republic of Folk";
        authors[] = {"Republic of Folk"};
        authorUrl = "https://republicoffolk.org";
        url = "https://republicoffolk.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.98;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder"};
    };
};

class CfgAILevelPresets {
    class AILevelLow {
        displayName = "Fuck the Mainland!";
        precisionAI = 0.3;
        skillAI = 1;
    };
};


// class CfgAISkill {
//     aimingAccuracy[] = {0,0, 1,0.6};  // {0,0,1,1};   v1.26 defaults
//     aimingShake[]    = {0,0, 1,0.9};  // {0,0,1,1};
//     aimingSpeed[]    = {0,0, 1,0.8};  // {0,0.5,1,1};
//     commanding[]     = {0,0, 1,0.8};  // {0,0,1,1};
//     courage[]        = {0,0, 1,0.9};  // {0,0,1,1};
//     endurance[]      = {0,0, 1,0.8};  // {0,0,1,1};
//     general[]        = {0,0, 1,0.9};  // {0,0,1,1};
//     spotDistance[]   = {0,0, 1,0.9};  // {0,0.2,1,0.4};
//     spotTime[]       = {0,0, 1,0.7};  // {0,0,1,0.7};
// };

class CfgDifficultyPresets {
    defaultPreset = "Regular";
    class Regular {
        description = "Overruled difficulty settings";
        levelAI = "AILevelLow";
        displayName = "Fuck the Mainland!";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 1;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 1;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Recruit {
        description = "Overruled difficulty settings";
        levelAI = "AILevelLow";
        displayName = "Fuck the Mainland!";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 1;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 1;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Veteran {
        description = "Overruled difficulty settings";
        levelAI = "AILevelLow";
        displayName = "Fuck the Mainland!";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 1;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 1;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
    class Custom {
        description = "Overruled difficulty settings";
        levelAI = "AILevelLow";
        displayName = "Fuck the Mainland!";
        class Options {
            autoReport = 0;
            cameraShake = 1;
            commands = 0;
            deathMessages = 0;
            detectedMines = 0;
            enemyTags = 0;
            friendlyTags = 0;
            groupIndicators = 0;
            mapContent = 0;
            multipleSaves = 0;
            reducedDamage = 0;
            scoreTable = 0;
            staminaBar = 1;
            stanceIndicator = 1;
            tacticalPing = 0;
            thirdPersonView = 0;
            visionAid = 0;
            vonID = 0;
            waypoints = 1;
            weaponCrosshair = 0;
            weaponInfo = 1;
        };
    };
};
