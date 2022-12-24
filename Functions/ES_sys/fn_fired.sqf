if !(isclass (configFile >> "CfgPatches" >> "L_ES_ES_main")) exitWith {};
/*
  * Author: LAxemann and joko // Jonas
  * Handles Every Gun Shot and checks if L_ES jumps in
  *
  * Arguments:
  * FiredEH Args
  *
  * Return Value:
  * None
  *
  * EDIT: Aaren
*/

params ["_shooter", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if (toLower(_weapon) isEqualTo "put") exitWith {};
if (underwater _shooter) exitWith {}; // Fucking SDAR

_shooter = vehicle _shooter;
private _is_Air = _shooter isKindOf "Air";
if ((_is_Air) && ((_shooter getVariable ["TWAF_SoundScape", false]) or !("mg8_" in toLower(_mode)))) exitWith {};

private _cpos = positionCameraToWorld [0,0,0];    // Position of the current camera
private _sPos = getPos _shooter;
private _dist = _cpos distance _shooter;                // Distance from player to shooter

/*****************************************************************************************************************/
//-- Make exit checks
if (_dist <= 1500) then {    // No reason to do shit beyond 1500m!

  private _LIS = lineIntersectsSurfaces [eyePos _shooter, _shooter modelToWorld [0,0, (eyePos _shooter select 2) + 8],_shooter, vehicle _shooter];
  // if the Shooter is inside of a building exit the Code
  if (({(_x select 3) isKindOf "House"} count _LIS != 0)) exitWith {};

  private ["_config","_maxPlopp","_cachedVarName", "_isSuppressed"];
  //-- Get the prefix and check if the "weapon" equals the muzzle
  if (_muzzle == _weapon) then {
    _config = configFile >> "cfgWeapons" >> _weapon;
    _cachedVarName = format ["_%1", _weapon];
    _isSuppressed = [_shooter,_weapon] call l_es_es_sys_fnc_suppCheck;
  } else {
    _config = configFile >> "cfgWeapons" >> _weapon >> _muzzle;
    _cachedVarName = format ["_%1_%2", _weapon, _muzzle];
    _isSuppressed = false;
  };
  private _prefix = [(_config >> "L_ES_Prefix"), "L_ES_ES_sys_cached_Prefix" + _cachedVarName] call l_es_es_sys_fnc_readCacheValues;

  if (_prefix == "nosound") exitWith {};

  if (_prefix == "") then {
    if (_weapon == handGunWeapon _shooter) then {
      _prefix = "pistol";
      _maxPlopp = 1400;
    } else {
      _prefix = "rifle_1";
      _maxPlopp = 1600;
    };
  } else {
    _maxPlopp = [(_config >> "L_ES_maxPlopp"), "L_ES_ES_sys_cached_maxPlopp" + _cachedVarName] call l_es_es_sys_fnc_readCacheValues;
  };

  if (_is_Air) then {

    private _end = (getNumber (_config >> _mode >> "burst")) * (getNumber (_config >> _mode >> "multiplier"));
    private _burst_end = (_shooter ammo _weapon) - _end + (getNumber (_config >> _mode >> "multiplier"));
    _shooter setVariable ["TWAF_SoundScape", true];
    [{
      params["_paramMain","_weapon","_burst_end"];
      private _shooter = _paramMain # 0;

      ((_shooter ammo _weapon) <= _burst_end)
    },{
      params["_paramMain"];

      _paramMain call l_es_es_sys_fnc_checkEnviroment;
      (_paramMain # 0) setVariable ["TWAF_SoundScape", false];
    },[[_shooter, _maxPlopp, _dist, _prefix, _cPos, _sPos],_weapon,_burst_end]] call CBA_fnc_waitUntilAndExecute;

  } else {
    if !(_isSuppressed) then {
      [_shooter, _maxPlopp, _dist, _prefix, _cPos, _sPos] call l_es_es_sys_fnc_checkEnviroment;
    };
  };
};
