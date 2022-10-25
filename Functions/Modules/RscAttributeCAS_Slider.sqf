#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"

params ["_mode", "_params", "_unit"];

switch _mode do {
	case "onLoad": {
		_display = _params select 0;
		_ctrlSlider = _display displayctrl 15153;
		_ctrlStext = _display displayctrl 15152;
		_var_range = missionnamespace getvariable ["Attack_Range",2000];

		_ctrlSlider slidersetposition _var_range;
		_ctrlSlider ctrlenable alive _unit;

		_weaponTypesID = _unit getvariable "type";

		if (_weaponTypesID != 3) then {
			_ctrlStext ctrlSetText (format ['Attacking Range: %1m', _var_range]);
		 	_EH_id = _ctrlSlider ctrlAddEventHandler ["SliderPosChanged", "ctrlSetText [15152,(format ['Attacking Range: %1m', _this # 1])];"];
			_unit setVariable ["RscATtributeCAS_TWA_Ctrl_EH",_EH_id];
		} else {
			_ctrlStext ctrlSetText "Unavailable (Ripple Bombing)";
		};

		//-Speed
		_ctrlSlider = _display displayctrl 15150;
		_ctrlStext = _display displayctrl 15149;
		_var_range = missionnamespace getvariable ["Fly_Speed",800];

		_ctrlSlider slidersetposition _var_range;
		_ctrlSlider ctrlenable alive _unit;

		_ctrlStext ctrlSetText (format ['Speed: %1km/h', _var_range]);
		_EH_id = _ctrlSlider ctrlAddEventHandler ["SliderPosChanged", "ctrlSetText [15149,(format ['Speed: %1km/h', _this # 1])];"];
		_unit setVariable ["RscATtributeCAS_TWA_SpeedCtrl_EH",_EH_id];
	};
	case "confirmed": {
		_display = _params # 0;

		_ctrlSlider = _display displayctrl 15150;
		_range = sliderposition _ctrlSlider;
		missionnamespace setvariable ["Fly_Speed",_range];
		_ctrlSlider ctrlRemoveEventHandler ["SliderPosChanged",(_unit getVariable ["RscATtributeCAS_TWA_SpeedCtrl_EH",-1])];

		_ctrlSlider = _display displayctrl 15153;
		_range = sliderposition _ctrlSlider;
		missionnamespace setvariable ["Attack_Range",_range];
		_ctrlSlider ctrlRemoveEventHandler ["SliderPosChanged",(_unit getVariable ["RscATtributeCAS_TWA_Ctrl_EH",-1])];
	};
	case "onUnload": {
		_ctrlSlider = _display displayctrl 15150;
		_ctrlSlider ctrlRemoveEventHandler ["SliderPosChanged",(_unit getVariable ["RscATtributeCAS_TWA_SpeedCtrl_EH",-1])];
		_ctrlSlider = _display displayctrl 15153;
		_ctrlSlider ctrlRemoveEventHandler ["SliderPosChanged",(_unit getVariable ["RscATtributeCAS_TWA_Ctrl_EH",-1])];
	};
};
