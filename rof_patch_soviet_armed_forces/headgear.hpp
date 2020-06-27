class m55_panama_khaki_1;
class panama_afg : m55_panama_khaki_1 {
    scope = 1;
};
class m55_panama_khaki_2;
class panama_afg2 : m55_panama_khaki_2 {
    scope = 1;
};

class m88_fieldcap_ttsko;
class fieldcap_pv : m88_fieldcap_ttsko
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

class ssh68_dark_green;
class ssh68_net: ssh68_dark_green
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