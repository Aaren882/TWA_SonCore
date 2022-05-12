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

class RscControlsGroup;
class RscAttributeCAS;

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
class RscAttributeCAS_TWA: RscAttributeCAS
{
	onSetFocus = "[_this,""RscAttributeCAS_TWA"",'TWA_Function'] call (uinamespace getvariable ""BIS_fnc_initCuratorAttribute"")";
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
		class ButtonOK: ButtonOK{};
		class ButtonCancel: ButtonCancel{};
	};
};