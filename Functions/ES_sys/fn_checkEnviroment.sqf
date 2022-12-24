if !(isclass (configFile >> "CfgPatches" >> "L_ES_ES_main")) exitWith {};
/*
 * Author: LAxemann and joko // Jonas
 * Handles the Types of Enviroment and Pushes them back to the Handle Sound Queue
 *
 * Arguments:
 * 0: shooter <Object>
 * 1: max Plopp Distance <Number>
 * 2: Distance <Number>
 *
 * Return Value:
 * None
 */

params ["_shooter", "_maxPlopp", "_dist", "_prefix", "_cPos", "_sPos"];
private _env = [_shooter, _maxPlopp] call l_es_es_sys_fnc_detectEnvironment;
private _is_Air = _shooter isKindOf "Air";

{
  private _currentEnv = _x;
  switch (_currentEnv) do {

    // Hilly
    case 2 : {
      if (_dist <= 60) then {
          {
            _x params [
                "_dist",
                "_pos"
            ];
            private _time = time + ((_dist + (_cPos distance _pos)) / L_ES_ES_sys_SoS);
            [_time, _currentEnv,[_pos,_prefix]] call l_es_es_sys_fnc_addToSoundHandler;
            nil
          } count (_shooter getVariable "L_ES_Hits");
      } else {
        if ((_dist <= 500) && !(_is_Air)) then {
          (_shooter getVariable "L_ES_Hits") params ["_array"];
          _array params ["_dist","_pos"];
          [time + ((_dist + (_cPos distance _pos)) / L_ES_ES_sys_SoS), _currentEnv,[_pos,_prefix]] call l_es_es_sys_fnc_addToSoundHandler;
        };

        if ((_is_Air) && (_dist <= 3000)) then {
          {
            _x params [
                "_dist",
                "_pos"
            ];
            private _time = time + ((_dist + (_cPos distance _pos)) / L_ES_ES_sys_SoS);
            [_time, _currentEnv,[_pos,_prefix]] call l_es_es_sys_fnc_addToSoundHandler;
            nil
          } count (_shooter getVariable "L_ES_Hits");
        };
      };
    };

    // Urban
    case 3 : {
        [time + (_dist / L_ES_ES_sys_SoS), _currentEnv, [_shooter, _prefix, _dist, _sPos]] call l_es_es_sys_fnc_addToSoundHandler;
    };

    // Forest
    case 4 : {
        [time + (_dist / L_ES_ES_sys_SoS), _currentEnv, [_shooter, _prefix, _dist, _sPos]] call l_es_es_sys_fnc_addToSoundHandler;
    };
  };
  nil
} count _env;
