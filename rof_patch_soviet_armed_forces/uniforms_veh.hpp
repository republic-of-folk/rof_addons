class oksv_rifleman;
class M88_Afghanka : oksv_rifleman {
    scope = 1;
};
class oksv_reg;
class M88_Afghanka_reg : oksv_reg {
    scope = 1;
};
class ttsko_rifleman;
class M88_Butan : ttsko_rifleman {
    scope = 1;
};
class M88_Butan_vdv : ttsko_rifleman {
    scope = 1;
};

class M88_Pogratsovka: oksv_rifleman
{
    displayName = "Pogratsovka";
    descriptionShort = "Field uniform for Border Troops of the Soviet Union";
    uniformClass = "Pograntsovka_M88";
    hiddenSelections[] = {"camo1","camo2","camob","insignia"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\pograntsovka.paa","","","\rof_addons\rof_patch_soviet_armed_forces\data\PV.paa"};
};