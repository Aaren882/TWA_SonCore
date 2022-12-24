#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"

params["_mode","_params","_class"];

switch _mode do {
	case "onLoad": {

		_display = _params # 0;
		_displayConfig = configfile >> _class;

		_ctrlBackground = _display displayctrl IDC_RSCDISPLAYATTRIBUTES_BACKGROUND;
		_ctrlTitle = _display displayctrl IDC_RSCDISPLAYATTRIBUTES_TITLE;
		_ctrlContent = _display displayctrl IDC_RSCDISPLAYATTRIBUTES_CONTENT;
		_ctrlSliders = _display displayctrl 15154;
		_ctrlSliderDis_Title = _ctrlSliders controlsGroupCtrl 15152;
		_ctrlSlider_Dis = _ctrlSliders controlsGroupCtrl 15153;
		_ctrlSliderSpeed_Title = _ctrlSliders controlsGroupCtrl 15149;
		_ctrlSlider_Speed = _ctrlSliders controlsGroupCtrl 15150;

		_ctrlButtonOK = _display displayctrl IDC_OK;
		_ctrlButtonCancel = _display displayctrl IDC_CANCEL;
		_ctrlButtonCustom = _display displayctrl IDC_RSCDISPLAYATTRIBUTES_BUTTONCUSTOM;

		_ctrlBackgroundPos = ctrlposition _ctrlBackground;
		_ctrlTitlePos = ctrlposition _ctrlTitle;
		_ctrlContentPos = ctrlposition _ctrlContent;
		_ctrlSlidersPos = ctrlposition _ctrlSliders;
		_ctrlSliderDis_TitlePOS = ctrlposition _ctrlSliderDis_Title;
		_ctrlSlider_DisPos = ctrlposition _ctrlSlider_Dis;
		_ctrlSliderSpeed_TitlePOS = ctrlposition _ctrlSliderSpeed_Title;
		_ctrlSlider_SpeedPos = ctrlposition _ctrlSlider_Speed;

		_ctrlButtonOKPos = ctrlposition _ctrlButtonOK;
		_ctrlButtonCancelPos = ctrlposition _ctrlButtonCancel;
		_ctrlButtonCustomPos = ctrlposition _ctrlButtonCustom;

		_ctrlTitleOffsetY = (_ctrlBackgroundPos # 1) - (_ctrlTitlePos # 1) - (_ctrlTitlePos # 3);
		_ctrlContentOffsetY = (_ctrlContentPos # 1) - (_ctrlBackgroundPos # 1);

		//--- Show fake map in the background
		_ctrlMap = _display displayctrl IDC_RSCDISPLAYCURATOR_MAINMAP;
		_ctrlMap ctrlenable false;
		if (visiblemap) then {
			_ctrlCuratorMap = (finddisplay IDD_RSCDISPLAYCURATOR) displayctrl IDC_RSCDISPLAYCURATOR_MAINMAP;
			_ctrlMap ctrlmapanimadd [0,ctrlmapscale _ctrlCuratorMap,_ctrlCuratorMap ctrlmapscreentoworld [0.5,0.5]];
			ctrlmapanimcommit _ctrlMap;
		} else {
			_ctrlMap ctrlshow false;
		};

		//--- Load default attributes
		_attributes = if (getnumber (_displayConfig >> "filterAttributes") > 0) then {missionnamespace getvariable ["BIS_fnc_initCuratorAttributes_attributes",[]]} else {["%ALL"]};
		_allAttributes = "%ALL" in _attributes;

		//--- Initialize attributes
		_posY = _ctrlContentOffsetY;
		_contentControls = _displayConfig >> "Controls" >> "Content" >> "Controls";
		_enableDebugConsole = ["DebugConsole",getnumber (missionconfigfile >> "enableDebugConsole")] call bis_fnc_getParamValue;
		_enableAdmin = (_enableDebugConsole == 1 && (isserver || serverCommandAvailable "#shutdown")) || _enableDebugConsole == 2;
		for "_i" from 0 to (count _contentControls - 1) do {
			_cfgControl = _contentControls select _i;
			if (isclass _cfgControl) then {
				_idc = getnumber (_cfgControl >> "idc");
				_control = _display displayctrl _idc;

				//--- Admin specific attribute
				_show = if (getnumber (_cfgControl >> "adminOnly") > 0) then {_enableAdmin} else {true};

				if ((_allAttributes || {_x == configname _cfgControl} count _attributes > 0) && _show) then {
					_controlPos = ctrlposition _control;
					_controlPos set [0,0];
					_controlPos set [1,_posY];
					_control ctrlsetposition _controlPos;
					_control ctrlcommit 0;
					_posY = _posY + (_controlPos # 3) + 0.005;
					ctrlsetfocus _control;
				} else {
					_control ctrlsetposition [0,0,0,0];
					_control ctrlcommit 0;
					_control ctrlshow false;
				};
			};
		};
		_posH = ((_posY + _ctrlContentOffsetY) min 0.9) * 0.5;

		_target = missionnamespace getvariable ["BIS_fnc_initCuratorAttributes_target",objnull];
		_name = switch (typename _target) do {
			case (typename objnull): {gettext (configfile >> "cfgvehicles" >> typeof _target >> "displayname")};
			case (typename grpnull): {groupid _target};
			case (typename []): {format ["%1: %3 #%2",groupid (_target # 0),_target # 1,localize "str_a3_cfgmarkers_waypoint_0"]};
			case (typename ""): {markertext _target};
		};
		_ctrlTitle ctrlsettext format [ctrltext _ctrlTitle,toupper _name];

		_ctrlTitlePos set [1,(0.5 - _posH) - (_ctrlTitlePos # 3) - _ctrlTitleOffsetY];
		_ctrlTitle ctrlsetposition _ctrlTitlePos;
		_ctrlTitle ctrlcommit 0;

		_ctrlContentPos set [1,0.5 - _posH];
		_ctrlContentPos set [3,_posH * 2];
		_ctrlContent ctrlsetposition _ctrlContentPos;
		_ctrlContent ctrlcommit 0;

		_ctrlBackgroundPos set [1,0.5 - _posH];
		_ctrlBackgroundPos set [3,_posH * 2];
		_ctrlBackground ctrlsetposition _ctrlBackgroundPos;
		_ctrlBackground ctrlcommit 0;

		//- [x, y, w, h]
		_ctrlSlidersPos set [1,0.5 + _posH + _ctrlTitleOffsetY];
		_ctrlSlidersPos set [2,_ctrlBackgroundPos # 2];
		_ctrlSliders ctrlsetposition _ctrlSlidersPos;
		_ctrlSliders ctrlcommit 0;

		_ctrlSlider_DisPos set [0, _ctrlSliderDis_TitlePOS # 2];
		_ctrlSlider_DisPos set [2, (_ctrlBackgroundPos # 2) - (_ctrlSliderDis_TitlePOS # 2)];
		_ctrlSlider_DisPos set [3, _ctrlSliderDis_TitlePOS # 3];
		_ctrlSlider_Dis ctrlsetposition _ctrlSlider_DisPos;
		_ctrlSlider_Dis ctrlcommit 0;

		_ctrlSliderSpeed_TitlePOS set [1, (_ctrlSliderDis_TitlePOS # 3) + _ctrlTitleOffsetY];
		_ctrlSliderSpeed_Title ctrlsetposition _ctrlSliderSpeed_TitlePOS;
		_ctrlSliderSpeed_Title ctrlcommit 0;

		_ctrlSlider_DisPos set [1, (_ctrlSliderDis_TitlePOS # 3) + _ctrlTitleOffsetY];
		_ctrlSlider_Speed ctrlsetposition _ctrlSlider_DisPos;
		_ctrlSlider_Speed ctrlcommit 0;

		_ctrlButtonOKPos set [1, (_ctrlSlidersPos # 1) + (_ctrlSlidersPos # 3) + _ctrlTitleOffsetY];
		_ctrlButtonOK ctrlsetposition _ctrlButtonOKPos;
		_ctrlButtonOK ctrlcommit 0;
		ctrlsetfocus _ctrlButtonOK;

		_ctrlButtonCancelPos set [1, (_ctrlSlidersPos # 1) + (_ctrlSlidersPos # 3) + _ctrlTitleOffsetY];
		_ctrlButtonCancel ctrlsetposition _ctrlButtonCancelPos;
		_ctrlButtonCancel ctrlcommit 0;

		_ctrlButtonCustomPos set [1,0.5 + _posH + _ctrlTitleOffsetY];
		_ctrlButtonCustom ctrlsetposition _ctrlButtonCustomPos;
		_ctrlButtonCustom ctrlcommit 0;

		//--- Close the display when entity is altered
		[_display] spawn {
			disableserialization;
			_display = _this # 0;
			_target = missionnamespace getvariable ["BIS_fnc_initCuratorAttributes_target",objnull];
			switch (typename _target) do {
				case (typename objnull): {
					_isAlive = alive _target;
					waituntil {isnull _display || (_isAlive && !alive _target)};
				};
				case (typename grpnull): {
					waituntil {isnull _display || isnull _target};
				};
				case (typename []): {
					_grp = _target # 0;
					_wpCount = count waypoints _grp;
					waituntil {isnull _display || (count waypoints _grp != _wpCount)};
				};
				case (typename ""): {
					waituntil {isnull _display || markertype _target == ""};
				};
			};
			_display closedisplay 2;
		};
	};
	case "onUnload": {

	};
};
