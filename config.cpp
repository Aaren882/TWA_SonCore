class CfgPatches
{
	class TWA_SonCore_C
	{
		units[]={"TWA_CAS_Module","TWA_CAS_Module_Gun_Lo","TWA_CAS_Module_Gun_Hi","TWA_CAS_Module_Rocket","TWA_CAS_Module_RipBomb"};
		weapons[]={};
		requiredVersion=2;
		requiredAddons[]=
		{
			"A3_Modules_F_Curator_CAS",
			"A3_Sounds_F_Jets",
			"A3_Weapons_F"
		};
	};
};
/*class VCN_EH
{
	engine="if (hasInterface && !didJIP) then {_this execVM 'MG8\Volconller\Functions\fn_init.sqf'};";
};*/
class DefaultEventHandlers
{
	/*class VCN_EH: VCN_EH
	{
	};*/
};
class Extended_PreInit_EventHandlers 
{
	class Volconller_PreInit
	{
		init = "call compile preprocessFileLineNumbers 'MG8\TWA_SonCore\Volconller\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class Volconller_PostInit
	{
		init="call compile preprocessFileLineNumbers 'MG8\TWA_SonCore\Volconller\XEH_postInit.sqf'";
	};
};

//CAS Modules
class CfgVehicles
{
	#include "Configs\Modules.hpp"
	#include "Compat.hpp"
};

//Shaders
class CfgSoundShaders
{
	#include "Configs\CfgSoundShaders.hpp"
};

//SoundSets
class CfgSoundSets
{
	#include "Configs\CfgSoundSets.hpp"
};

//Sounds
class CfgSounds
{
	#include "Configs\CfgSounds.hpp"
};

//Others
#include "Configs\Others.hpp"

//CfgWeapons
#include "Configs\CfgWeapons.hpp"

//UI
#include "Configs\UI.hpp"

//Functions
#include "Configs\CfgFunctions.hpp"

class CfgFactionClasses
{
	class Aaren_Modules
	{
		displayName = "Aaren's Modules";
		priority = 8;
		side = 1;
	};
};