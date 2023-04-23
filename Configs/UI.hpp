/*class zen_common_RscDisplay;
class zen_common_RscLabel;
class zen_common_RscBackground;
class ctrlListNBox;
class zen_modules_RscDisplay: zen_common_RscDisplay
{
	class controls
	{
		class Title;
		class Background;
		class Content;
		class ButtonOK;
		class ButtonCancel;
	};
};*/
//Path
class CfgScriptPaths
{
	TWA_Function = "MG8\TWA_SonCore\Functions\Modules\";
};

class RscText;
class RscXSliderH;
class RscControlsGroup;
class RscAttributeCAS;
class RscControlsGroupNoScrollbars;

class RscButtonMenuOK;
class RscButtonMenuCancel;

class RscDisplayAttributes
{
	class Controls
	{
		class Content: RscControlsGroup
		{
			class controls;
		};
	};
};

class RscDisplayAttributesModuleCAS: RscDisplayAttributes
{
	class Controls: Controls
	{
		class Background;
		class Title;
		class Content: Content
		{
			class Controls: controls
			{
				class CAS: RscAttributeCAS{};
			};
		};
		class ButtonOK;
		class ButtonCancel;
	};
};

//CAS
class RscAttributeCAS_TWA: RscAttributeCAS
{
	onSetFocus = "[_this,""RscAttributeCAS_TWA"",'TWA_Function'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
};
//Slider
class RscAttributeCAS_Slider: RscControlsGroupNoScrollbars
{
	onSetFocus = "[_this,""RscAttributeCAS_Slider"",'TWA_Function'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
	idc = 15154;
	x = "6.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
	y = "16.1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w = "27 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Title: RscText
		{
			idc = 15152;
			text = "";
			x = "0";
			y = "0";
			w = "10 *(((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value: RscXSliderH
		{
			idc = 15153;
			sliderPosition = 2000;
			sliderRange[] = {1000, 2000};
			sliderStep = 1;
			x = "10 *(((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0";
			w = "0.210375 * safezoneW";
			h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "Default 2000m";
		};
		//-Speed
		class Speed_Title: Title
		{
			idc = 15149;
			y = "0.023 * safezoneH";
		};
		class Speed_Value: Value
		{
			idc = 15150;
			sliderPosition = 800;
			sliderRange[] = {300, 800};
			y = "0.023 * safezoneH";
			tooltip = "Default 800Km/h";
		};
	};
};

class RscDisplayAttributes_TWA_CAS_Module: RscDisplayAttributesModuleCAS
{
	scriptName = "RscDisplayAttributes_TWA_CAS_Module";
	scriptPath = "TWA_Function";
	onLoad = "[""onLoad"",_this,""RscDisplayAttributes_TWA_CAS_Module"",'TWA_Function'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayAttributes_TWA_CAS_Module"",'TWA_Function'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls: Controls
	{
		class Background: Background{};
		class Title: Title{};
		class Content: Content
		{
			class Controls: controls
			{
				class CAS: RscAttributeCAS_TWA{};
			};
		};
		class sliders: RscAttributeCAS_Slider{};
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};
class RscShortcutButton;
class VCN_Debug_Button: RscShortcutButton
{
	idc = 1702;
	text = "Aaren's Sound Core - Debug";
	x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y = "0.490741 * safezoneH + safezoneY";
	w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.180392,0.372549,0.909804,0.8};
	tooltip = "Fix Aircraft that is not applied";
	
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	
	action = "call VCN_fnc_debug;";
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
	class TextPos
	{
		left = 0.01;
		top = 0;
		right = 0;
		bottom = 0;
	};
};

class RscStandardDisplay;
class RscDisplayMPInterrupt: RscStandardDisplay
{
	class controls
	{
		class VCN_Debug: VCN_Debug_Button{};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	class controls
	{
		class VCN_Debug: VCN_Debug_Button{};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	class controls
	{
		class VCN_Debug: VCN_Debug_Button{};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	class controls
	{
		class VCN_Debug: VCN_Debug_Button{};
	};
};