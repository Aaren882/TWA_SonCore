//External
class Heli_01_TR_Rotor_Distance_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_Rotor_Distance_SoundShader"
	};
	distancefilter="HeliFX_Distant_Engine_Filter";
	sound3dprocessingtype="HeliFX_Distant_3DProcessor";
};
class Heli_01_TR_Engine_Distance_SoundSet: Heli_01_TR_Rotor_Distance_SoundSet
{
	soundshaders[]=
	{
		"Heli_01_TR_Engine_Distance_SoundShader"
	};
	volumeFactor=0.7;
	shape="HeliFX_Front_Shape";
};
class Heli_01_TR_EngineExt_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_EngineExt_SoundShader"
	};
};
class Heli_01_TR_RotorExt_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_RotorExt_SoundShader"
	};
	volumeFactor=0.5;
};
class Heli_01_TR_Turbine_Ext_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_Turbine_Ext_SoundShader"
	};
	volumeFactor=0.6;
	shape="HeliFX_Turbine_Shape";
};
class Heli_01_TR_TailRotor_SoundSet: HeliFX_External_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_TailRotor_SoundShader"
	};
	shape="HeliFX_TailRotor_Shape";
	sound3dprocessingtype="HeliFX_TailRotor_3DProcessor";
	posoffset[]={0,0,-10};
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Internal
class Heli_01_TR_EngineInt_SoundSet: HeliFX_Internal_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_EngineInt_SoundShader"
	};
};
class Heli_01_TR_RotorInt_SoundSet: HeliFX_Internal_Base
{
	soundshaders[]=
	{
		"Heli_01_TR_RotorInt_SoundShader"
	};
};