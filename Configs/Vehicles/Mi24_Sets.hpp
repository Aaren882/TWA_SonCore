//External
class Heli_Mi24_AH_Rotor_Distance_SoundSet: Heli_AH64_AH_Rotor_Distance_SoundSet
{
	soundshaders[]=
	{
		"Heli_Mi24_AH_Rotor_Distance_SoundShader"
	};
	distancefilter="HeliFX_Distant_Engine_Filter";
	sound3dprocessingtype="HeliFX_Distant_3DProcessor";
	volumeFactor=0.2;
};
class Heli_Mi24_AH_Engine_Distance_SoundSet: Heli_Mi24_AH_Rotor_Distance_SoundSet
{
	soundshaders[]=
	{
		"Heli_Mi24_AH_Engine_Distance_SoundShader"
	};
	volumeFactor=0.5;
};
class Heli_Mi24_AH_EngineExt_SoundSet: Heli_AH64_AH_EngineExt_SoundSet
{
	soundshaders[]=
	{
		"Heli_Mi24_AH_EngineExt_SoundShader"
	};
	shape="HeliFX_Round_Shape";
	volumeFactor=0.8;
};
class Heli_Mi24_AH_RotorExt_SoundSet: Heli_AH64_AH_RotorExt_SoundSet
{
	soundshaders[]=
	{
		"Heli_Mi24_AH_RotorExt_SoundShader"
	};
	volumeFactor=0.75;
};