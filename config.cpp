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
class DefaultEventHandlers;
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

class TWA_HELI_SoundSet_BASE
{
	Soundsets[] = {
		"Empty_SoundSet",
		"HeliFX_TransmissionDamage_Int_phase1_SoundSet_Base",
		"HeliFX_TransmissionDamage_Int_phase2_SoundSet_Base",
		"HeliFX_Alarm_Damage_Int_SoundSet_Base",
		"HeliFX_Alarm_RotorLow_Int_SoundSet_Base",
		"HeliFX_ScrubLand_Int_SoundSet_Base",
		"HeliFX_ScrubBuilding_Int_SoundSet_Base",
		"HeliFX_ScrubTree_Ext_SoundSet_Base",
		"HeliFX_Rain_Int_SoundSet_Base",
		"HeliFX_Wind_Int_SoundSet_Base",
		"HeliFX_WindLateralInt_SoundSet_Base",
		"HeliFX_TransmissionDamage_Ext_phase1_SoundSet_Base",
		"HeliFX_TransmissionDamage_Ext_phase2_SoundSet_Base",
		"HeliFX_ScrubTree_Ext_SoundSet_Base",
		"HeliFX_Rain_Ext_SoundSet_Base",
		"HeliFX_Wind_Close_Ext_SoundSet_Base"
	};
};
class TWA_JET_SoundSet_BASE
{
	Soundsets[] = {
		"Empty_SoundSet",
		"Int_gForce_SoundSet",
		"Int_gForce_Wind_SoundSet",
		"JetFX_scrubLandInt_SoundSet_Base",
		"JetFX_RainInt_SoundSet_Base",
		"JetFX_WindInt_SoundSet_Base",
		"JetFX_GStress_SoundSet_Base",
		"JetFX_SpeedStress_SoundSet_Base"
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