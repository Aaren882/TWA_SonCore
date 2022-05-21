class HeliFX_Internal_Base
{
	volumefactor=0.5;
	spatial=0;
	loop=1;
};
class HeliFX_External_Base
{
	sound3dprocessingtype="HeliFX_Close_3DProcessor";
	distancefilter="HeliFX_Close_Engine_Filter";
	volumecurve="HeliFX_Ext_Base_Curve";
	occlusionfactor=0.35;
	obstructionfactor=0;
	volumefactor=1;
	spatial=1;
	loop=1;
};

//External
// -Alarm
class HeliFX_Alarm_Damage_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_Damage_Ext_Base_SoundShader"
	};
};
class HeliFX_Alarm_RotorLow_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_RotorLow_Ext_Base_SoundShader"
	};
};

// -Scrub Sound
class HeliFX_ScrubTree_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubTree_Ext_Base_SoundShader"
	};
};

// -Damage
class HeliFX_TransmissionDamage_Ext_phase1_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Ext_phase1_Base_SoundShader"
	};
};
class HeliFX_TransmissionDamage_Ext_phase2_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Ext_phase2_Base_SoundShader"
	};
};

//-SlingLoad
class HeliFX_SlingLoadDown_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Ext_Base_SoundShader"
	};
};
class HeliFX_SlingLoadUp_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Ext_Base_SoundShader"
	};
};
//-Noise
class HeliFX_Rain_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rain_Ext_Base_SoundShader"
	};
};
class HeliFX_Rotor_Stress_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rotor_Stress_Ext_Base_SoundShader"
	};
};
class HeliFX_Wind_Close_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Wind_Close_Ext_Base_SoundShader"
	};
	volumefactor=0.1;
};
class HeliFX_RotorNoise_Ext_Base_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"HeliFX_RotorNoise_Ext_Base_SoundShader"
	};
	volumefactor=0.05;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Internal
// -Alarm
class HeliFX_Alarm_Damage_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_Damage_Int_Base_SoundShader"
	};
};
class HeliFX_Alarm_RotorLow_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_RotorLow_Int_Base_SoundShader"
	};
};

// -Scrub Sound
class HeliFX_ScrubLand_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubLand_Int_Base_SoundShader"
	};
};
class HeliFX_ScrubBuilding_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubBuilding_Int_Base_SoundShader"
	};
};
class HeliFX_ScrubTree_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubTree_Int_Base_SoundShader"
	};
};

// -Damage
class HeliFX_TransmissionDamage_Int_phase1_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Int_phase1_Base_SoundShader"
	};
};
class HeliFX_TransmissionDamage_Int_phase2_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Int_phase2_Base_SoundShader"
	};
};

//-SlingLoad
class HeliFX_SlingLoadDown_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadDown_Int_Base_SoundShader"
	};
};
class HeliFX_SlingLoadUp_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Int_Base_SoundShader"
	};
};

//-Noise
class HeliFX_Rain_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rain_Int_Base_SoundShader"
	};
};
class HeliFX_Wind_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Wind_Int_Base_SoundShader"
	};
};
class HeliFX_GStress_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_GStress_Int_Base_SoundShader"
	};
};
class HeliFX_GStress_TR_Int_Base_SoundShader: HeliFX_GStress_Int_Base_SoundSet
{
	soundshaders[] = 
	{
		"HeliFX_GStress_TR_Int_Base_SoundShader"
	};
};
class HeliFX_GStress_AH_Int_Base_SoundShader: HeliFX_GStress_Int_Base_SoundSet
{
	soundshaders[] = 
	{
		"HeliFX_GStress_AH_Int_Base_SoundShader"
	};
};
class HeliFX_SpeedStress_Int_Base_SoundSet: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SpeedStress_Int_Base_SoundShader"
	};
};