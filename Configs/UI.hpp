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
	x = "0.333646 * safezoneW + safezoneX";
	y = "0.63 * safezoneH + safezoneY";
	w = "0.331251 * safezoneW";
	h = "0.041 * safezoneH";
	class controls
	{
		class Title: RscText
		{
			idc = 15152;
			text = "";
			x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "0 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.5};
		};
		class Value: RscXSliderH
		{
			idc = 15153;
			sliderPosition = 2000;
			sliderRange[] = {1000, 2000};
			sliderStep = 1;
			x = "0.124988 * safezoneW";
			y = "0 * safezoneH";
			w = "0.205533 * safezoneW";
			h = "0.022 * safezoneH";
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

class TWA_CAS_Module: RscDisplayAttributesModuleCAS
{
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
		class ButtonOK: ButtonOK
		{
			x = "0.59 * safezoneW + safezoneX";
			y = "0.61 * safezoneH + safezoneY";
			w = "0.0749995 * safezoneW";
			h = "0.0257037 * safezoneH";
		};
		class ButtonCancel: ButtonCancel
		{
			x = "0.333791 * safezoneW + safezoneX";
			y = "0.608704 * safezoneH + safezoneY";
			w = "0.0749995 * safezoneW";
			h = "0.0257037 * safezoneH";
		};
	};
};
class RscShortcutButton;
class VCN_Debug_Button: RscShortcutButton
{
	idc = 1702;
	text = "Aaren's Sound Core - Debug";
	x = "1 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX)";
	y = "0.490741 * safezoneH + safezoneY";
	w = "0.185625 * safezoneW";
	h = "0.022 * safezoneH";
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