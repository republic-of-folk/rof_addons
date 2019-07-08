    class rof_taki_civ_base: Afghan_Civilian1
    {
        scope = 0;
        identityTypes[] = {"LanguagePER_F","Head_TK","G_IRAN_default"};
        linkedItems[] = {'ItemMap'};
        respawnLinkedItems[] = {'ItemMap'};
        faction = "rof_faction_civ_taki";
        side = 3;
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
    };



    class rof_taki_civ_villager1: rof_taki_civ_base
    {
        displayName = "Takistani Villager 1";
        scope = 2;
        linkedItems[] += {"Afghan_01Hat"};
        respawnLinkedItems[] += {"Afghan_01Hat"};
        uniformClass = "U_Afghan01NH";
    };

    class rof_taki_civ_villager1_nh: rof_taki_civ_base
    {
        displayName = "Takistani Villager 1 (no hat)";
        scope = 2;
        uniformClass = "U_Afghan01NH";
    };

    class rof_taki_civ_villager2: rof_taki_civ_base
    {
        displayName = "Takistani Villager 2";
        scope = 2;
        linkedItems[] += {"Afghan_02Hat"};
        respawnLinkedItems[] += {"Afghan_02Hat"};
        uniformClass = "U_Afghan02NH";
    };

    class rof_taki_civ_villager2_nh: rof_taki_civ_base
    {
        displayName = "Takistani Villager 2 (no hat)";
        scope = 2;
        uniformClass = "U_Afghan02NH";
    };

    class rof_taki_civ_villager3: rof_taki_civ_base
    {
        displayName = "Takistani Villager 3";
        scope = 2;
        linkedItems[] += {"Afghan_03Hat"};
        respawnLinkedItems[] += {"Afghan_03Hat"};
        uniformClass = "U_Afghan03NH";
    };

    class rof_taki_civ_villager3_nh: rof_taki_civ_base
    {
        displayName = "Takistani Villager 3 (no hat)";
        scope = 2;
        uniformClass = "U_Afghan03NH";
    };

    class rof_taki_civ_villager4: rof_taki_civ_base
    {
        displayName = "Takistani Villager 4";
        scope = 2;
        uniformClass = "U_Afghan04";
    };

    class rof_taki_civ_villager5: rof_taki_civ_base
    {
        displayName = "Takistani Villager 5";
        scope = 2;
        uniformClass = "U_Afghan05";
    };

    class rof_taki_civ_villager6: rof_taki_civ_base
    {
        displayName = "Takistani Villager 6";
        scope = 2;
        linkedItems[] += {"Afghan_06Hat"};
        respawnLinkedItems[] += {"Afghan_06Hat"};
        uniformClass = "U_Afghan06NH";
    };

    class rof_taki_civ_villager6_nh: rof_taki_civ_base
    {
        displayName = "Takistani Villager 6 (no hat)";
        scope = 2;
        uniformClass = "U_Afghan06NH";
    };

    class rof_taki_civ_town1 : rof_taki_civ_base
    {
        displayName = "Takistani Civilian 1";
        scope = 2;
        uniformClass = "rds_uniform_citizen1";
    };

    class rof_taki_civ_town2 : rof_taki_civ_base
    {
        displayName = "Takistani Civilian 2";
        scope = 2;
        uniformClass = "rds_uniform_citizen2";
    };

    class rof_taki_civ_town3 : rof_taki_civ_base
    {
        displayName = "Takistani Civilian 3";
        scope = 2;
        uniformClass = "rds_uniform_citizen3";
    };

    class rof_taki_civ_town4 : rof_taki_civ_base
    {
        displayName = "Takistani Civilian 4";
        scope = 2;
        uniformClass = "rds_uniform_citizen4";
    };

    class rof_taki_civ_doctor : rof_taki_civ_base
    {
        displayName = "Takistani Doctor";
        scope = 2;
        uniformClass = "rds_uniform_doctor";
    };

    class rof_taki_civ_assistant : rof_taki_civ_base
    {
        displayName = "Takistani Assistant";
        scope = 2;
        uniformClass = "rds_uniform_assistant";
    };

    class rof_taki_civ_schoolteacher : rof_taki_civ_base
    {
        displayName = "Takistani School teacher";
        scope = 2;
        uniformClass = "rds_uniform_schoolteacher";
    };

    class rof_taki_civ_functionary1 : rof_taki_civ_base
    {
        displayName = "Takistani Functionary 1";
        scope = 2;
        uniformClass = "rds_uniform_Functionary1";
    };

    class rof_taki_civ_functionary2 : rof_taki_civ_base
    {
        displayName = "Takistani Functionary 2";
        scope = 2;
        uniformClass = "rds_uniform_Functionary2";
    };

    class rof_taki_civ_policeman : rof_taki_civ_base
    {
        displayName = "Takistani Policeman";
        scope = 2;
        uniformClass = "rds_uniform_Policeman";
        linkedItems[] = {"rds_police_cap","rds_police_holster",'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
        respawnLinkedItems[] = {"rds_police_cap","rds_police_holster",'ItemMap','ItemCompass','ItemWatch','ItemRadio'};
    };
