//steam_boot.sqf
if (!hasInterface) exitWith {}; // Don't run on HC/Dedicated server.

private _res = "ACRE2Steam" callExtension format["0"];
if(_res == "1") then {
    private _version = getText (configFile >> "CfgPatches" >> "acre_main" >> "version");
    _res = "ACRE2Steam" callExtension format["2VER%1", _version];
    diag_log text format["ACRE Steam Initialization Result: %1", _res];
};