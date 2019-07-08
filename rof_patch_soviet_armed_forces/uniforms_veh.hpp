class vdv_desert_M88;
class M88_Afghanka : vdv_desert_M88 {
    scope = 1;
};
class mp_desert_M88;
class M88_Afghanka_reg : mp_desert_M88 {
    scope = 1;
};
class vdv_ttsko_m88;
class M88_Butan : vdv_ttsko_m88 {
    scope = 1;
};
class M88_Butan_vdv : vdv_ttsko_m88 {
    scope = 1;
};

class M88_Pogratsovka: vdv_desert_M88
{
    displayName = "Pogratsovka";
    descriptionShort = "Field uniform for Border Troops of the Soviet Union";
    uniformClass = "Pograntsovka_M88";
    hiddenSelections[] = {"camo1","camo2","camob","insignia"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\pograntsovka.paa","","","\rof_addons\rof_patch_soviet_armed_forces\data\PV.paa"};
};