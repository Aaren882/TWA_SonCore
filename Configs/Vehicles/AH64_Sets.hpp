//External
class Heli_AH64_AH_Rotor_Distance_SoundSet: Heli_01_TR_Rotor_Distance_SoundSet
{
	soundshaders[]=
	{
		"Heli_AH64_AH_Rotor_Distance_SoundShader"
	};
	distancefilter="HeliFX_Distant_Engine_Filter";
	sound3dprocessingtype="HeliFX_Distant_3DProcessor";
	volumeFactor=0.2;
};
class Heli_AH64_AH_Engine_Distance_SoundSet: Heli_AH64_AH_Rotor_Distance_SoundSet
{
	soundshaders[]=
	{
		"Heli_AH64_AH_Engine_Distance_SoundShader"
	};
	volumeFactor=0.1;
};
class Heli_AH64_AH_EngineExt_SoundSet: Heli_01_TR_EngineExt_SoundSet
{
	soundshaders[]=
	{
		"Heli_AH64_AH_EngineExt_SoundShader"
	};
	shape="HeliFX_Rear_Shape";
	volumeFactor=1;
};
class Heli_AH64_AH_RotorExt_SoundSet: Heli_01_TR_RotorExt_SoundSet
{
	soundshaders[]=
	{
		"Heli_AH64_AH_RotorExt_SoundShader"
	};
	volumeFactor=0.5;
};
class Heli_AH64_AH_Rotor_Stress_SoundSet: HeliFX_Rotor_Stress_Ext_SoundSet_Base
{
	volumeFactor=0.5;
};