if !(isclass (configFile >> "CfgPatches" >> "L_ES_ES_main")) exitWith {};
/*
* Author: LAxemann
* Checks for intersections with nearby hills/mountains
*
* Arguments:
* 0: shooter <Object>
* 1: scan range in m <Number>
*
* Return Value:
* Type of Surrounding Area<Number>
*
* EDIT: Aaren
*/
params [
  "_shooter",
  "_maxPlopp"
];

private _sPos =  eyePos _shooter;
private _hits = [];

for "_i" from 0 to 360 step 4 do {
  private _Z_dir = if ((_shooter isKindOf "Air") && !(isTouchingGround _shooter)) then {
    (sin -70)
  } else {
    (sin 4.048)
  };
  private _checkPos = [(_sPos # 0) + ((sin _i) * _maxPlopp), (_sPos # 1) + ((cos _i) * _maxPlopp), (_sPos # 2) + (_Z_dir * _maxPlopp)];
  private _intersec = lineIntersectsSurfaces [_sPos, _checkPos, _shooter, _shooter,true,1,"NONE","NONE"];

  if ((count _intersec) >= 1) then {
    _checkPos = _intersec # 0 # 0;
    private _dist = _sPos distance _checkPos;
    if (_dist < 100) exitWith {
      _i = _i + 45;
    };
    if (_dist >= 100) exitWith {
      _hits pushBack [_dist, _checkPos];
      if (_dist >= 300) then {
          _i = _i + 35;
      } else {
          _i = _i + 50;
      };
    };
  };
};

private "_result";
if ((count _hits) >= 2) then {
  _result = 2;    // Hilly
  _hits sort true;
  _shooter setVariable ["L_ES_Hits", _hits];
} else {
  _result = 1;    // Flat
  _shooter setVariable ["L_ES_Hits", []];
};
_result
