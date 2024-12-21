class O_Soldier_base_F;
class rof_o_taki_base: O_Soldier_base_F
{
    scope = 0;

    uniformClass = "U_lxWS_Djella_O_02_Brown";

	class EventHandlers
    {
        init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
    };

    headgearList[] = {
            "lxWS_H_turban_01_sand", 1,
            "lxWS_H_turban_02_sand", 1,
            "lxWS_H_turban_03_sand", 1,
            "lxWS_H_turban_04_sand", 1,
            "", 1
    };
};