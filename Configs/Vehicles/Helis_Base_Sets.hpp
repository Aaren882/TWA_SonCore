class HeliFX_Internal_Base
{
	volumefactor=0.3;
	spatial=0;
	loop=1;
};
class HeliFX_External_Base
{
	sound3dprocessingtype="HeliFX_Close_3DProcessor";
	distancefilter="HeliFX_Close_Engine_Filter";
	volumecurve="HeliFX_Ext_Base_Curve";
	occlusionObstruction = 1;
	occlusionFactor = 0.3;
	obstructionfactor=0;
	volumefactor=1;
	spatial=1;
	loop=1;
};

//External
// -Alarm
class HeliFX_Alarm_Damage_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_Damage_Ext_SoundShader_Base"
	};
};
class HeliFX_Alarm_RotorLow_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_RotorLow_Ext_SoundShader_Base"
	};
};

// -Scrub Sound
class HeliFX_ScrubTree_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubTree_Ext_SoundShader_Base"
	};
};

// -Damage
class HeliFX_TransmissionDamage_Ext_phase1_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Ext_phase1_SoundShader_Base"
	};
};
class HeliFX_TransmissionDamage_Ext_phase2_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Ext_phase2_SoundShader_Base"
	};
};

//-SlingLoad
class HeliFX_SlingLoadDown_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Ext_SoundShader_Base"
	};
};
class HeliFX_SlingLoadUp_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Ext_SoundShader_Base"
	};
};
//-Noise
class HeliFX_Rain_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rain_Ext_SoundShader_Base"
	};
};
class HeliFX_Rotor_Stress_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rotor_Stress_Ext_SoundShader_Base"
	};
	volumefactor=0.85;
};
class HeliFX_Wind_Close_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[] = 
	{
		"HeliFX_Wind_Close_Ext_SoundShader_Base"
	};
	volumefactor=0.15;
};
class HeliFX_RotorNoiseMid_Ext_SoundSet_Base: HeliFX_External_Base
{
	soundshaders[]=
	{
		"HeliFX_RotorNoiseMid_Ext_SoundShader_Base"
	};
	volumefactor=0.05;
};
class HeliFX_RotorNoiseLight_Ext_SoundSet_Base: HeliFX_RotorNoiseMid_Ext_SoundSet_Base
{
	soundshaders[]=
	{
		"HeliFX_RotorNoiseLight_Ext_SoundShader_Base"
	};
	volumefactor=0.25;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Internal
// -Alarm
class HeliFX_Alarm_Damage_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_Damage_Int_SoundShader_Base"
	};
};
class HeliFX_Alarm_RotorLow_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Alarm_RotorLow_Int_SoundShader_Base"
	};
};

// -Scrub Sound
class HeliFX_ScrubLand_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubLand_Int_SoundShader_Base"
	};
};
class HeliFX_ScrubBuilding_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubBuilding_Int_SoundShader_Base"
	};
};
class HeliFX_ScrubTree_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_ScrubTree_Int_SoundShader_Base"
	};
};

// -Damage
class HeliFX_TransmissionDamage_Int_phase1_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Int_phase1_SoundShader_Base"
	};
};
class HeliFX_TransmissionDamage_Int_phase2_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_TransmissionDamage_Int_phase2_SoundShader_Base"
	};
};

//-SlingLoad
class HeliFX_SlingLoadDown_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadDown_Int_SoundShader_Base"
	};
};
class HeliFX_SlingLoadUp_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SlingLoadUp_Int_SoundShader_Base"
	};
};

//-Noise
class HeliFX_Rain_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Rain_Int_SoundShader_Base"
	};
};
class HeliFX_Wind_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_Wind_Int_SoundShader_Base"
	};
};
class HeliFX_WindLateralInt_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_WindLateralInt_SoundShader_Base"
	};
};
class HeliFX_GStress_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_GStress_Int_SoundShader_Base"
	};
};
class HeliFX_GStress_TR_Int_SoundSet_Base: HeliFX_GStress_Int_SoundSet_Base
{
	soundshaders[] = 
	{
		"HeliFX_GStress_TR_Int_SoundShader_Base"
	};
};
class HeliFX_GStress_AH_Int_SoundSet_Base: HeliFX_GStress_Int_SoundSet_Base
{
	soundshaders[] = 
	{
		"HeliFX_GStress_AH_Int_SoundShader_Base"
	};
};
class HeliFX_SpeedStress_Int_SoundSet_Base: HeliFX_Internal_Base
{
	soundshaders[] = 
	{
		"HeliFX_SpeedStress_Int_SoundShader_Base"
	};
};