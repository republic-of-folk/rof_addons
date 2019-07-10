    class rof_taki_civ_base: Afghan_Civilian1
    {
        scope = 0;
        faction = "rof_faction_civ_taki";
        side = 3;
        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
    };

    class rof_taki_civ_villager: rof_taki_civ_base
    {
        displayName = "Takistani Villager";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_villager.jpg";
        scope = 2;
        uniformClass = "U_Afghan01NH";

        class EventHandlers
        {
            init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; _this call rds_fnc_randomUniform; };";
        };

        headgearList[] = {
            "Afghan_01Hat_civ", 1,
            "Afghan_02Hat_civ", 1,
            "Afghan_04Hat_civ", 1,
            "Afghan_05Hat_civ", 1,
            "", 1
        };
        rds_randomCloths[] = {
            "U_Afghan01NH", 1,
            "U_Afghan02NH", 1,
            "U_Afghan03NH", 1,
            "U_Afghan06NH", 1
        };
    };

    class rof_taki_civ_town : rof_taki_civ_base
    {
        displayName = "Takistani Civilian";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_town.jpg";
        scope = 2;
        uniformClass = "rds_uniform_citizen1";

        class EventHandlers
        {
            init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; _this call rds_fnc_randomUniform; };";
        };

        headgearList[] = {
            "rds_worker_cap1", 0.5,
            "rds_worker_cap2", 0.5,
            "rds_worker_cap3", 0.5,
            "rds_worker_cap4", 0.5,
            "Afghan_01Hat_civ", 0.5,
            "Afghan_02Hat_civ", 0.5,
            "Afghan_06Hat_civ", 0.5,
            "H_Cap_red", 0.25,
            "", 1
        };

        rds_randomCloths[] = {
            "rds_uniform_citizen1", 1,
            "rds_uniform_citizen2", 1,
            "rds_uniform_citizen3", 1,
            "rds_uniform_citizen4", 1
        };
    };

    class rof_taki_civ_functionary : rof_taki_civ_base
    {
        displayName = "Takistani Functionary";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_functionary.jpg";
        scope = 2;
        uniformClass = "rds_uniform_Functionary1";

        class EventHandlers
        {
            init = "if (local (_this select 0)) then { _this call rds_fnc_randomUniform; };";
        };

        rds_randomCloths[] = {
            "rds_uniform_Functionary1", 1,
            "rds_uniform_Functionary2", 1
        };
    };

    class rof_taki_civ_doctor : rof_taki_civ_base
    {
        displayName = "Takistani Doctor";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_doctor.jpg";
        scope = 2;
        uniformClass = "rds_uniform_doctor";
    };

    class rof_taki_civ_assistant : rof_taki_civ_base
    {
        displayName = "Takistani Assistant";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_assistant.jpg";
        scope = 2;
        uniformClass = "rds_uniform_assistant";
    };

    class rof_taki_civ_schoolteacher : rof_taki_civ_base
    {
        displayName = "Takistani School teacher";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_schoolteacher.jpg";
        scope = 2;
        uniformClass = "rds_uniform_schoolteacher";
    };

    class rof_taki_civ_policeman : rof_taki_civ_base
    {
        displayName = "Takistani Policeman";
        editorPreview = "\rof_addons\rof_patch_taliban_fighters\data\ui\editorPreview\rof_taki_civ_policeman.jpg";
        scope = 2;
        uniformClass = "rds_uniform_Policeman";
        linkedItems[] = {"rds_police_cap","rds_police_holster",'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
        respawnLinkedItems[] = {"rds_police_cap","rds_police_holster",'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
    };
