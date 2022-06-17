params ["_logic","_trigger_range"];

_Set_PitchBank = {
	if (_casType == 3) then {
		//[_plane,0,0] call bis_fnc_setpitchbank;
		_vectorDir = [_planePos,[_pos # 0, _pos # 1, _planePos # 2]] call bis_fnc_vectorFromXtoY;
		_awayDis = 1000;
		_plane setVariable ["CAS_AwayPOS",[_pos,_dis,_dir+45] call bis_fnc_relpos];
	} else {
		_plane setVariable ["CAS_AwayPOS",[_pos,_dis,_dir+90] call bis_fnc_relpos];
		[_plane,-90 + atan (_dis / _alt),0] call bis_fnc_setpitchbank;
	};
};
//missionnamespace setvariable ["RscATtributeCAS_TWA_selected",""];

//Basic Definition
_casType = _logic getvariable "type";

_dis = 4000;
_alt = if (_casType == 3) then {500} else {2000};
_speed = 800 / 3.6;
_duration = ([0,0] distance [_dis,_alt]) / _speed;
_weapons = [];
_planeClass = _logic getvariable ["vehicle","B_Plane_CAS_01_dynamicLoadout_F"];
_All_weapons = _planeClass call bis_fnc_weaponsEntityType;
_logic_Dir = missionnamespace getvariable ["TWAF_fnc_CAS_Dir",0];
_logic hideObject false;
_planeCfg = configfile >> "cfgvehicles" >> _planeClass;
_fireNull = true;

_weapon_classes = getarray (_planeCfg >> "weapons");

_offset_Cfg = getArray (_planeCfg >> "Bombing_Offset");
if (_offset_Cfg isequalto []) then {
	_offset_Cfg = [0,0,0];
};

_target_offset = _offset_Cfg vectorAdd [0,30,0];;

//Weapons
_weaponTypes = switch _casType do {
	case 0: {["machinegun","CannonCore"]};
	case 1: {["machinegun","CannonCore"]};
	case 2: {["RocketPods"]};
	case 3: {["bomblauncher","weapon_lgblauncherbase","mk82bomblauncher","USAF_BombLauncherBase"]};
	default {[]};
};
_cfgweapon_path = configFile >> "CfgWeapons";
{
	_weapon_info = _x;
	{
		_type = _x;
		if !("safe" in (toLower _weapon_info)) then {
			//Bomb
			_condition = if (_casType == 2) then
			{
				(_weapon_info isKindOf [_type, _cfgweapon_path]) and
				!(
					(_weapon_info isKindOf ["USAF_BombLauncherBase", _cfgweapon_path]) or
					(_weapon_info isKindOf ["weapon_lgblauncherbase", _cfgweapon_path]) or
					(_weapon_info isKindOf ["Missile_AA_04_Plane_CAS_01_F", _cfgweapon_path]) or
					(_weapon_info isKindOf ["Mk82BombLauncher", _cfgweapon_path]) or
					(_weapon_info isKindOf ["missiles_SCALPEL",_cfgweapon_path])
				)
			} else {
				(_weapon_info isKindOf [_type, _cfgweapon_path])
			};

			if _condition then {
				_modes = getarray (_cfgweapon_path >> _weapon_info >> "modes");
				if (count _modes > 0) then {
					_mode = _modes # 0;
					if (_mode == "this") then {_mode = _weapon_info;};
					_weapons set [count _weapons,[_weapon_info,_mode]];
				};
			};
		};
	} forEach _weaponTypes;
} foreach _All_weapons;

//Approach
_fire = [] spawn {waituntil {false}};

_time = time;
_offset = if (_casType == 3) then {35} else {0};

//WayPoints
_posATL = _logic modelToWorld _target_offset;
_pos =+ _posATL;
_pos set [2,(_pos # 2) + getTerrainHeightASL _pos];
_dir = direction _logic;

_awayPos = _plane getVariable ["CAS_AwayPOS",[_pos,_dis,_dir+90] call bis_fnc_relpos];

//Vehicle Setups
_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
_planePos set [2,(_pos # 2) + _alt];

//Spawn the Aircraft
_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
/* _planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
_plane = _planeArray # 0; */
_plane = createVehicle [_planeClass, _planePos, [], 0, "FLY"];
createVehicleCrew _plane;
_plane setdir _dir;

[_plane,_logic] spawn {
	params ["_plane","_logic"];
	uisleep 1;
	if !(_plane getVariable ["VCN_Actived", false]) then {
	  hint "CAS module is not ready yet.";
		deletevehicle _logic;
	};
};

_vectorUp = vectorup _plane;
_plane setPosASL _planePos;
_plane move ([_pos,_dis,_dir] call bis_fnc_relpos);

_plane disableAI "TARGET";
_plane disableAI "AUTOTARGET";
_plane setCombatMode "BLUE";
_plane setBehaviour "CARELESS";

_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
_plane setvectordir _vectorDir;

//Burst Mode - A-10-tastic (Compatibility)
_burst_mode_Lo = "MG8_autoLo";
_burst_mode_Hi = "MG8_autoHi";
_other_Mod = "A10tastic_GAU8" in ((_weapons # 0) # 1);

if (_other_Mod) then {
	_burst_mode_Lo = "A10tastic_GAU8_1secburstx";
  _burst_mode_Hi = "A10tastic_GAU8_2secburstx";
};

if (_casType == 0) then {
	_plane setVariable ["Module_Burst_mode",_burst_mode_Lo];
} else {
	_plane setVariable ["Module_Burst_mode",_burst_mode_Hi];
};

//Sound Handler
_plane setVariable ["Module_CAS_Sound",true];

//CM
{
	_weapon = _x;
	_modes = getArray (_cfgweapon_path >> _weapon >> "modes");
	_mode = _modes # 0;
 if (("counter" in toLower(_weapon)) or ("cmlauncher" in toLower(_weapon)) or ("cmdispenser" in toLower(_weapon))) then {
		_plane setVariable ["CAS_CounterMeasure",[_weapon,_mode]];
 };
} forEach _All_weapons;

//Radio
[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

//Apply custom direction
_logic setdir _logic_Dir;

//Loop
[{
	params [
		"_logic","_casType","_pos","_posATL","_dis","_dir","_alt","_speed","_target_offset",
		"_duration","_time",
		"_plane","_planePos","_weapons","_vectorDir","_vectorUp","_velocity","_offset",
		"_trigger_range","_fire","_fireNull","_Set_PitchBank"
	];
	_fireProgress = _plane getvariable ["fireProgress",0];

	//Set the plane approach vector
	_awayDis = _trigger_range;
	call _Set_PitchBank;

	//Delete Vehicle
	if !(alive _logic) then {
		deletevehicle _plane;
	};

	//Update plane with the module
	if (((getPosATL _logic distance _posATL > 0.01) or (direction _logic != _dir)) and _fireProgress == 0) then {
		_posATL = _logic modelToWorld _target_offset;
		_pos =+ _posATL;
		_pos set [2,(_pos # 2) + getTerrainHeightASL _pos];
		_dir = direction _logic;

		//Restore custom direction
		missionnamespace setvariable ["TWAF_fnc_CAS_Dir",direction _logic];

		//Vehicle Setups
		_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
		_planePos set [2,(_pos # 2) + _alt];

		_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
		_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
		_plane setPosASL _planePos;
		_plane setVectorDir _vectorDir;
		_vectorUp = vectorup _plane;

		call _Set_PitchBank;

		_awayPos = _plane getVariable "CAS_AwayPOS";
	};

	_plane setVelocityTransformation [
		_planePos, [_pos # 0, _pos # 1, (_pos # 2) + _offset],
		_velocity, _velocity,
		_vectorDir,_vectorDir,
		_vectorUp, _vectorUp,
		(time - _time) / _duration
	];

	_plane setvelocity (velocity _plane);

	//Firing Handler
	if ((getPosASL _plane) distance _pos < _awayDis and (_this # 20)) then {
		_target = _logic;

		_this set [20, false];
		terminate _fire;

		[_plane,_weapons,_target,_casType] spawn {
			params ["_plane","_weapons","_target","_casType"];

			_fire = [_plane, _weapons, _target, _casType] spawn {
				params ["_plane","_weapons","_target","_casType"];

				_shooter = if ((gunner _plane) isEqualTo objNull) then {
					driver _plane
				} else {
					gunner _plane
				};
				_pos = getPos _target;

				_duration = 2;
				if ((_casType == 0) or (_casType == 1)) then {
					_duration = 0.5;
					if (_casType == 1) then {
					  _duration = 1;
					};
				};

				_sleep = if (_casType == 3) then {0.3} else {0.02};

				_time = time + _duration;

				//if with gun
				if ((_casType == 0) or (_casType == 1)) then {
					while {!(time > _time or isnull _plane)} do {
						{
							_shooter forceWeaponFire [(_x # 0), (_plane getVariable "Module_Burst_mode")];
						} foreach _weapons;
					};
				} else {
					//Rocket run and Bombing run
					while {!(time > _time or isnull _plane)} do {
						{
							_shooter forceWeaponFire [(_x # 0),(_x # 1)];
						} foreach _weapons;
						//_plane setvariable ["fireProgress",(1 - ((_time - time) / _duration)) max 0 min 1];
						uisleep _sleep;
					};
				};
			};
			[{
					params ["_plane", "_fire"];
					scriptdone _fire
				}, {
					params ["_plane"];

					_plane spawn {
						uisleep 0.1;
						_this setVariable ["Fire_Progress_Done",true];
					};
				}, [_plane,_fire]
			] call CBA_fnc_waitUntilAndExecute;
		};
	};

	(_plane getVariable ["Fire_Progress_Done",false]) or (isnull _plane) or !(alive _plane)
}, {
	params [
			"_logic","_casType","_pos","_posATL","_dis","_dir","_alt","_speed","_target_offset",
			"_duration","_time",
			"_plane","_planePos","_weapons","_vectorDir","_vectorUp","_velocity","_offset",
			"_trigger_range","_fire","_fireNull","_Set_PitchBank"
		];

		_awayPos = _plane getVariable "CAS_AwayPOS";
		_plane move _awayPos;

		//Delete the module
		deletevehicle _logic;

		//--- Fire CM
		_plane spawn {
			for "_i" from 0 to 10 do {
				driver _this forceweaponfire (_this getVariable ["CAS_CounterMeasure",["CMFlareLauncher","Burst"]]);
				uisleep 0.2;
			};
		};

		_plane setvelocity (velocity _plane);

		if (_casType < 3) then {
			_plane flyInHeight _alt/3;
		};

		//Sound Handler
		_plane setVariable ["Module_CAS_Sound",false];

		//waituntil {(_plane distance _pos > 3000) or !(alive driver _plane)};

		[{
				params ["_plane", "_awayPos"];

				(_plane distance _awayPos < 1000) or !(alive _plane)
			}, {
				params ["_plane"];

				//Delete plane
				if (alive _plane) then {
					_group = group _plane;
					_crew = crew _plane;
					deletevehicle _plane;
					{deletevehicle _x} foreach _crew;
					deletegroup _group;
				};
			}, [_plane,_awayPos]
		] call CBA_fnc_waitUntilAndExecute;
},[
		_logic,_casType,_pos,_posATL,_dis,_dir,_alt,_speed,_target_offset,
		_duration,_time,
		_plane,_planePos,_weapons,_vectorDir,_vectorUp,_velocity,_offset,
		_trigger_range,_fire,_fireNull,_Set_PitchBank
	]
] call CBA_fnc_waitUntilAndExecute;
