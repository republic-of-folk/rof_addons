class Tank_F;
class LT_01_base_F: Tank_F {
    class TextureSources {
        class ROF_Indep_Desert {
            displayName = "AAF Desert";
            author = "Anthrax";
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_scout.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa"};
            factions[] = {"IND_F"};
        };
        class ROF_Indep_Desert_GreenNet {
            displayName = "AAF Desert (Green Net)";
            author = "Anthrax";
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_scout.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
            factions[] = {"IND_F"};
        };
    };
};

class LT_01_AT_base_F: LT_01_base_F {
    class TextureSources: TextureSources {
        class ROF_Indep_Desert : ROF_Indep_Desert {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_at.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa"};
        };
        class ROF_Indep_Desert_GreenNet : ROF_Indep_Desert_GreenNet {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_at.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
        };
    };
};
// class LT_01_scout_base_F: LT_01_base_F {};
class LT_01_AA_base_F: LT_01_base_F {
    class TextureSources: TextureSources {
        class ROF_Indep_Desert : ROF_Indep_Desert {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_at.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa"};
        };
        class ROF_Indep_Desert_GreenNet : ROF_Indep_Desert_GreenNet {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_at.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
        };
    };
};
class LT_01_cannon_base_F: LT_01_base_F {
    class TextureSources: TextureSources {
        class ROF_Indep_Desert : ROF_Indep_Desert {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_cannon.paa","A3\Armor_F\Data\camonet_AAF_Digi_Desert_CO.paa","A3\armor_f\data\cage_sand_CO.paa"};
        };
        class ROF_Indep_Desert_GreenNet : ROF_Indep_Desert_GreenNet {
            textures[] = {"rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_main.paa","rof_addons\rof_factions\data\textures\LT_01\lt_01_desert_cannon.paa","A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa","A3\armor_f\data\cage_aaf_co.paa"};
        };
    };
};