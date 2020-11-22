/*
Replace unit's gear from GM to ACE compatible
*/

params ["_unit"];

if (!local _unit) exitWith {};

// COMPASS
{
    if (_x in assignedItems _unit) then {
        _unit unlinkItem _x;
        _unit linkItem "ItemCompass";
    };
} forEach ["gm_ge_army_conat2", "gm_gc_compass_f73"];

// FAK
{
    private _type = _x;
    while {({_x == _type} count items _unit) > 0} do {
        _unit removeItem _type;
        _unit addItem "ACE_fieldDressing";
        _unit addItem "ACE_fieldDressing";
        _unit addItem "ACE_morphine";
    };
} forEach ["gm_ge_army_burnBandage", "gm_ge_army_gauzeBandage", "gm_gc_army_gauzeBandage", "gm_ge_army_gauzeCompress"];

// MEDKIT
{
    private _type = _x;
    while {({_x == _type} count items _unit) > 0} do {
        _unit removeItem _type;
        _unit addItem "ACE_epinephrine";
        _unit addItem "ACE_epinephrine";
        _unit addItem "ACE_epinephrine";
        _unit addItem "ACE_epinephrine";
        _unit addItem "ACE_bloodIV";
        _unit addItem "ACE_bloodIV";
    };
} forEach ["gm_gc_army_medkit", "gm_ge_army_medkit_80"];

// TOOLKIT
{
    private _type = _x;
    while {({_x == _type} count items _unit) > 0} do {
        _unit removeItem _type;
        _unit addItem "ToolKit";
    };
} forEach ["gm_repairkit_01"];