class G_Soldier_base_F;
class rof_o_taki_base: G_Soldier_base_F
{
    scope = 0;

    uniformClass = "U_lxWS_Djella_O_03_Green";

	class EventHandlers
    {
        init = "if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; };";
    };

    headgearList[] = {
            "lxWS_H_turban_01_black", 1,
            "lxWS_H_turban_02_black", 1,
            "lxWS_H_turban_03_black", 1,
            "lxWS_H_turban_04_black", 1,
            "", 1
    };
};