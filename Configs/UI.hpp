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
	h = "0.0201482 * safezoneH";
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
		class slider: RscAttributeCAS_Slider{};
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