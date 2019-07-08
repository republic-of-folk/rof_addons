class Panama_Afghanistan;
class panama_afg : Panama_Afghanistan {
    scope = 1;
};
class Panama_Afghanistan1;
class panama_afg2 : Panama_Afghanistan1 {
    scope = 1;
};

class fieldcap_butan;
class fieldcap_pv : fieldcap_butan
{
    displayName = "Field Cap (PV)";
    descriptionShort = "Field cap for Border Troops of the Soviet Union";
    hiddenSelections[] = {"Camo1"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\kepka_pv.paa"};
};

class ssh68_camo_kzs;
class ssh68_camo_klmk: ssh68_camo_kzs
{
    displayName = "SSh-68 (KLMK)";
    descriptionShort = "Steel helmet model 1968 with KLMK cover";
    hiddenSelections[] = {"Camo2"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\ssh68_klmk_cover.paa"};
};
class ssh68_camo_mesh: ssh68_camo_kzs
{
    displayName = "SSh-68 (Sack)";
    descriptionShort = "Steel helmet model 1968 with sack cover";
    hiddenSelections[] = {"Camo2"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\ssh68_mesh_cover.paa"};
};

class ssh68_khaki;
class ssh68_net: ssh68_khaki
{
    displayName = "SSh-68 (Net)";
    descriptionShort = "Steel helmet model 1968 with net";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\ssh68_Set.paa"};
};
class ssh68_net_of: ssh68_net
{
    displayName = "SSh-68 (Net light)";
    descriptionShort = "Steel helmet model 1968 with net";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\rof_addons\rof_patch_soviet_armed_forces\data\ssh68_Set_od.paa"};
};