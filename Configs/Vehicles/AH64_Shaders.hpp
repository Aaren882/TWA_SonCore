//External
class Heli_AH64_AH_Rotor_Distance_SoundShader: Heli_01_TR_Rotor_Distance_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\AH64\Distant_Rotor",
			1
		}
	};
	range=3000;
	rangecurve[]=
	{
		{0,0},
		{100,0},
		{600,1},
		{1000,0.15},
		{3000,0}
	};
};
class Heli_AH64_AH_Engine_Distance_SoundShader: Heli_01_TR_Engine_Distance_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\AH64\Distant_Engine",
			1
		}
	};
	range=2500;
	rangecurve[]=
	{
		{0,0},
		{300,1},
		{1800,0.2},
		{2500,0}
	};
};
class Heli_AH64_AH_EngineExt_SoundShader: Heli_01_TR_EngineExt_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\AH64\Engine_Ext",
			1
		}
	};
	frequency="rotorSpeed*(1+rotorThrust/6)";
	volume="camext*(rotorSpeed factor [0.3, 1])*(1+rotorThrust/2)*(CustomSoundController14+1)";
	range=1500;
	rangecurve[]=
	{
		{0,1},
		{300,0.8},
		{800,0.2},
		{1500,0}
	};
};
class Heli_AH64_AH_RotorExt_SoundShader: Heli_01_TR_RotorExt_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\AH64\Rotor_Ext",
			1
		}
	};
	range=1800;
	rangecurve[]=
	{
		{0,0.85},
		{150,1},
		{1000,0.4},
		{1800,0}
	};
};