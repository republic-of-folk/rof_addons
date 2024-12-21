class B_Soldier_base_F;
class rof_o_taki_base: B_Soldier_base_F
{
    scope = 0;

    uniformClass = "U_lxWS_Djella_O_02_Grey";

	class EventHandlers
    {
        init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
    };

    headgearList[] = {
            "lxWS_H_turban_01_green", 1,
            "lxWS_H_turban_02_green", 1,
            "lxWS_H_turban_03_green", 1,
            "lxWS_H_turban_04_green", 1,
            "", 1
    };
};