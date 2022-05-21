#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"
#include "\A3\ui_f\hpp\defineCommonGrids.inc"

params ["_mode", "_params", "_unit"];

_call_Display = {
	_lnbAdd = _ctrlValue lnbaddrow ["","",gettext (_planeCfg >> "displayName")];
	_ctrlValue lnbSetValue [[_lnbAdd,0],_weaponTypesID];
	_ctrlValue lnbSetData [[_lnbAdd,0],_planeClass];
	_ctrlValue lnbSetValue  [[_lnbAdd,1],_forEachIndex];
	_ctrlValue lnbsetpicture [[_lnbAdd,0],gettext (configfile >> "cfgfactionclasses" >> gettext (_planeCfg >> "faction") >> "icon")];
	_ctrlValue lnbsetpicture [[_lnbAdd,1],gettext (_planeCfg >> "picture")];
};
switch _mode do {
	case "onLoad": {
		_display = _params select 0;
		_ctrlValue = _display displayctrl IDC_RSCATTRIBUTECAS_VALUE;
		_ctrlValue ctrlsetfontheight GUI_GRID_H;

		_selected = missionnamespace getvariable ["RscATtributeCAS_TWA_selected",""];
		_unit setvariable ["type",getnumber (configfile >> "cfgvehicles" >> typeof _unit >> "Zeus_CAStype")];
		_weaponTypesID = _unit getvariable "type";

		if (isNil "CAS_PlaneInfoCache") then
		{
			CAS_PlaneInfoCache = [[],[],[],[]];
			_Children = (configfile >> "cfgvehicles") call bis_fnc_returnchildren;
			_weapon_types_list = [["machinegun","cannon"], ["machinegun","cannon"], ["rocketlauncher","USAF_FFARLauncher_unguided"], ["bomblauncher","weapon_LGBLauncherBase"]];

			{
				//--- Show planes
				_planeCfg = _x;
				_vehicle = configName (_planeCfg);

				if (
						!(_vehicle isKindOf "VTOL_Base_F") and
						!(_vehicle isKindOf "UAV") and
						(_vehicle isKindOf "Plane") and
						(_vehicle != "I_Plane_Fighter_03_CAS_F") and
						((getNumber (_planeCfg >> "scope") == 2) or (getNumber (_planeCfg >> "scopeCurator") == 2))
					) then {

					_cfg = configfile >> "cfgvehicles" >> _vehicle;

					_weapon_classes = getarray (_planeCfg >> "weapons");
					if (isClass (_planeCfg >> "Components" >> "TransportPylonsComponent")) then
					{
						_pylon_cfgs = (_planeCfg >> "Components" >> "TransportPylonsComponent" >> "pylons") call BIS_fnc_returnChildren;
						{
							_pylon_mag = getText (_x >> "attachment");
							_weapon_classes pushBack getText (configFile >> "cfgMagazines" >> _pylon_mag >> "pylonWeapon");
							if (count getArray (configFile >> "cfgMagazines" >> _pylon_mag >> "turret") > 0) then {_gunner_is_driver = false};
						} forEach _pylon_cfgs;
					};
					{
						_weaponTypes = _x;
						_weapons = [];
						_gunner_is_driver = true;
						{
							_modes = getarray (configfile >> "cfgweapons" >> _x >> "modes");
							if (count _modes > 0) then
							{

								_mode = _modes select 0;
								if (_mode == "this") then {_mode = _x;};
								_weapons pushBack [_x,_mode];
							};
							/* if (tolower ((_x call bis_fnc_itemType) select 1) in _weaponTypes) then
							{

							}; */
						} foreach _weapon_classes;

						if (_weapons isEqualTo []) then
						{
							_turret_cfgs = (_planeCfg >> "Turrets" >> "GunnerTurret") call BIS_fnc_returnChildren;
							_turret_cfgs = _turret_cfgs select {getNumber (_x >> "primaryGunner") == 1};
							if (_turret_cfgs isEqualTo []) exitWith {};
							_weapon_classes = getarray (_turret_cfgs select 0 >> "weapons");
							{
								_modes = getarray (configfile >> "cfgweapons" >> _x >> "modes");
								if (count _modes > 0) then
								{
									_mode = _modes select 0;
									if (_mode == "this") then {_mode = _x;};
									_weapons pushBack [_x,_mode];
								};
								/* if (tolower ((_x call bis_fnc_itemType) select 1) in _weaponTypes) then
								{

								}; */
							} foreach _weapon_classes;
							_gunner_is_driver = false;
						};

						if !(_weapons isEqualTo []) then
						{
							_cas_info_list = CAS_PlaneInfoCache select _forEachIndex;
							_cas_info_list pushBack [_vehicle,_weapons,_gunner_is_driver];
						};
					} forEach _weapon_types_list;
				};
			} foreach _Children;
		};
		missionNamespace setVariable ["TWAF_weapon_types_list",CAS_PlaneInfoCache];
		_cas_info_list = CAS_PlaneInfoCache # _weaponTypesID;
		_cfgweapon_path = configFile >> "CfgWeapons";

		if (_weaponTypesID < 2) then {
			{
				_planeClass = _x # 0;
				_planeCfg = (configfile >> "cfgvehicles" >> _planeClass);
				_weapons_info = _x # 1;
				{
					_weapon = _x # 0;
					_weapon_mode = _x # 1;

					if ("autoLo" in _weapon_mode) then {
						call _call_Display;
					};

				} foreach _weapons_info;
			} foreach _cas_info_list;
		} else {
			{
				_planeClass = _x # 0;
				_planeCfg = (configfile >> "cfgvehicles" >> _planeClass);
				_weapons_info = _x # 1;

				_weapons_Num = {
					((_x # 0) isKindOf ["bomblauncher",_cfgweapon_path]) or
					((_x # 0) isKindOf ["weapon_LGBLauncherBase",_cfgweapon_path]) or
					((_x # 0) isKindOf ["Mk82BombLauncher",_cfgweapon_path]) or
					((_x # 0) isKindOf ["USAF_BombLauncherBase",_cfgweapon_path])
				} count _weapons_info;

				if (_weaponTypesID == 2) then {
					_weapons_Num = {
						((_x # 0) isKindOf ["RocketPods",_cfgweapon_path]) and
						!(
							((_x # 0) isKindOf ["weapon_AGM_65Launcher",_cfgweapon_path]) or
							((_x # 0) isKindOf ["USAF_BombLauncherBase",_cfgweapon_path]) or
							((_x # 0) isKindOf ["Mk82BombLauncher",_cfgweapon_path]) or
							((_x # 0) isKindOf ["Missile_AA_04_Plane_CAS_01_F",_cfgweapon_path]) or
							((_x # 0) isKindOf ["weapon_LGBLauncherBase",_cfgweapon_path])
						)
					} count _weapons_info;
				};

				if (_weapons_Num > 0) then {
					call _call_Display;
				};

			} foreach _cas_info_list;
		};

		_ctrlValue lnbsort [2,false];
		for "_i" from 0 to ((lnbsize _ctrlValue select 0) - 1) do {
			if ((_ctrlValue lnbdata [_i,0]) == _selected) exitwith {_ctrlValue lnbsetcurselrow _i;};
		};
		if (lnbcurselrow _ctrlValue < 0) then {
			_ctrlValue lnbsetcurselrow 0;
		};
	};
	case "confirmed": {

		_display = _params select 0;
		_ctrlValue = _display displayctrl IDC_RSCATTRIBUTECAS_VALUE;
		_vehicle = _ctrlValue lnbdata [lnbcurselrow _ctrlValue,0];

		_unit setvariable ["vehicle",_vehicle,true];
		_unit setvariable ["BIS_fnc_curatorAttributes",[],true];
		missionnamespace setvariable ["RscATtributeCAS_TWA_selected",_vehicle];
    [_unit,(missionnamespace getvariable "RscATtributeCAS_TWA_selected"),true,(missionnamespace getvariable ["RscATtributeCAS_TWA_Attack_Range",2000])] spawn TWAF_fnc_CAS;
	};
	case "onUnload": {
		if (!isnil "RscAttributePostProcess_default") then {
			[nil,0,false] call bis_fnc_setPPeffectTemplate;
		};
		RscAttributePostProcess_default = nil;
		if ((missionnamespace getvariable ["RscATtributeCAS_TWA_selected",""]) isEqualTo "") then
		{
			deleteVehicle _unit;
		};
	};
};
