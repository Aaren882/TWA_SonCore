params ["_logic","_units","_activated","_trigger_range"];

_Set_PitchBank = {
	if !(_casType == 3) then {
		[_plane,-90 + atan (_dis / _alt),0] call bis_fnc_setpitchbank;
	} else {
		//[_plane,0,0] call bis_fnc_setpitchbank;
		_vectorDir = [_planePos,[_pos # 0, _pos # 1, _planePos # 2]] call bis_fnc_vectorFromXtoY;
		_awayDis = 1000;
		_awayPos = [_pos,_dis,_dir+45] call bis_fnc_relpos;
	};
};
missionnamespace setvariable ["RscATtributeCAS_TWA_selected",""];
if (_activated) then {
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
	_logic hideobject false;

	_planeCfg = configfile >> "cfgvehicles" >> _planeClass;

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
							(_weapon_info isKindOf ["Mk82BombLauncher", _cfgweapon_path])
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
	_fireNull = true;
	_time = time;
	_offset = if (_casType == 3) then {35} else {0};

	//WayPoints
	_posATL = _logic modelToWorld _target_offset;
	_pos =+ _posATL;
	_pos set [2,(_pos # 2) + getTerrainHeightASL _pos];
	_dir = direction _logic;

	_awayPos = [_pos,_dis,_dir+90] call bis_fnc_relpos;

	//Vehicle Setups
	_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
	_planePos set [2,(_pos # 2) + _alt];

	//Spawn the Aircraft
	_planeSide = (getnumber (_planeCfg >> "side")) call bis_fnc_sideType;
	_planeArray = [_planePos,_dir,_planeClass,_planeSide] call bis_fnc_spawnVehicle;
	_plane = _planeArray # 0;

	_vectorUp = vectorup _plane;
	_plane setPosASL _planePos;
	//_plane disableAI "move";
	_plane disableAI "target";
	_plane disableAI "autotarget";
	_plane setcombatmode "blue";
	group _plane setSpeedMode "FULL";

	_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
	_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
	_plane setvectordir _vectorDir;

	//Burst Mode
	if (_casType == 1) then {
		_plane setVariable ["Module_Burst_mode","MG8_autoHi"];
	};

	//CM
	{
		_weapon = _x;
		_modes = getarray (_cfgweapon_path >> _weapon >> "modes");
		_mode = _modes # 0;
	 if (("counter" in toLower(_weapon)) or ("cmlauncher" in toLower(_weapon)) or ("CMDispenser" in toLower(_weapon))) then {
	    _plane setVariable ["CAS_CounterMeasure",[_weapon,_mode]];
	 };
	} forEach _All_weapons;

	//Radio
	[_plane,"CuratorModuleCAS"] call bis_fnc_curatorSayMessage;

	//Apply custom direction
	_logic setdir _logic_Dir;

	//Loop
	waituntil {

		_fireProgress = _plane getvariable ["fireProgress",0];
		_done = _plane getVariable ["Fire_Progress_Done",false];

		//Restore custom direction
		missionnamespace setvariable ["TWAF_fnc_CAS_Dir",direction _logic];

		//Set the plane approach vector
		_awayDis = _trigger_range;
		call _Set_PitchBank;

		//Delete Vehicle
		if !(alive _logic) then {
		  deletevehicle _plane;
		};

		//Update plane with the module
		if (((getposatl _logic distance _posATL > 0) or (direction _logic != _dir)) and _fireProgress == 0) then {
			_posATL = _logic modelToWorld _target_offset;
			_pos =+ _posATL;
			_pos set [2,(_pos # 2) + getTerrainHeightASL _pos];
			_dir = direction _logic;

			_awayPos = [_pos,_dis,_dir+90] call bis_fnc_relpos;
			_vectorDir = [_planePos,_pos] call bis_fnc_vectorFromXtoY;
			_velocity = [_vectorDir,_speed] call bis_fnc_vectorMultiply;
			_plane setPosASL _planePos;
			_plane setVectorDir _vectorDir;
			_vectorUp = vectorup _plane;

			call _Set_PitchBank;

			//Vehicle Setups
			_planePos = [_pos,_dis,_dir + 180] call bis_fnc_relpos;
			_planePos set [2,(_pos # 2) + _alt];
		};

		_plane setVelocityTransformation [
			_planePos, [_pos # 0, _pos # 1, (_pos # 2) + _offset + _fireProgress * 12],
			_velocity, _velocity,
			_vectorDir,_vectorDir,
			_vectorUp, _vectorUp,
			(time - _time) / _duration
		];

		_plane setvelocity (velocity _plane);

		//Firing Handler
		if ((getposasl _plane) distance _pos < _awayDis && _fireNull) then {
			_target = _logic;

			_fireNull = false;
			terminate _fire;

			_fire = [_plane, _weapons, _target, _casType] spawn {
				params ["_plane", "_weapons", "_target", "_casType"];
				_planeDriver = driver _plane;
				_pos = getPos _target;

				_duration = 2;
				_sleep = if (_casType == 3) then {0.3} else {0.05};
				_time = time + _duration;

				{
					//if with gun
					_Burst_mode = _plane getVariable ["Module_Burst_mode","MG8_autoLo"];

					if ((_casType == 0) or (_casType == 1)) then {
						_planeDriver forceWeaponFire [(_x # 0), _Burst_mode];
					} else {
						//Rocket run and Bombing run
						waituntil {
							{
								_planeDriver forceWeaponFire [(_x # 0),(_x # 1)];
							} foreach _weapons;
							_plane setvariable ["fireProgress",(1 - ((_time - time) / _duration)) max 0 min 1];
							sleep _sleep;
							time > _time or isnull _plane
						};
					};
				} foreach _weapons;
			};
		};
		if (scriptdone _fire) then {
			_plane spawn {
				sleep 1;
				_this setVariable ["Fire_Progress_Done",true];
			};
		};

		_done or isnull _plane
	};

	//Delete the module
	deletevehicle _logic;

	//--- Fire CM
	for "_i" from 0 to 10 do {
		driver _plane forceweaponfire (_plane getVariable ["CAS_CounterMeasure",["CMFlareLauncher","Burst"]]);
		_time = time + 0.2;
		waituntil {time > _time or ! (alive _plane)};
	};

	_plane setvelocity (velocity _plane);
	if (_casType < 3) then {
	  _plane flyInHeight _alt/3;
	};
	_plane enableAI "move";
	_plane moveTo _awayPos;

	//Sound Handler
	_plane setVariable ["Module_CAS_Sound",false];

	waituntil {(_plane distance _pos > 3000) or !(alive driver _plane)};

	//Delete plane
	if (alive _plane) then {
		_group = group _plane;
		_crew = crew _plane;
		deletevehicle _plane;
		{deletevehicle _x} foreach _crew;
		deletegroup _group;
	};
};
