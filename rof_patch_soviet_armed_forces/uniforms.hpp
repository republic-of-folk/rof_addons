class m88_desert_vdv;
class Afghanka_M88 : m88_desert_vdv {
    scope = 1;
};
class m88_desert_mp;
class Afghanka_M88_reg : m88_desert_mp {
    scope = 1;
};
class m88_ttsko_vdv;
class Butan_M88 : m88_ttsko_vdv {
    scope = 1;
};
class Butan_M88_vdv : m88_ttsko_vdv {
    scope = 1;
};
class UniformItem;
class Pograntsovka_M88 : m88_desert_vdv {
        displayName = "$STR_pilot_suit_ttsko";
        model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
        hiddenSelections[] = {"camo1","camo2","camob","insignia"};
        hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\pograntsovka.paa","","","\rof_addons\rof_patch_soviet_armed_forces\data\PV.paa"};
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "M88_Pogratsovka";
            containerClass = "Supply40";
            mass = 60;
        };
};