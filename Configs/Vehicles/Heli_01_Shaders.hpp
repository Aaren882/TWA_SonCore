//External
class Heli_01_TR_Rotor_Distance_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Distant_Rotor",
			1
		}
	};
	frequency="rotorspeed * (1-rotorthrust/15) * 1";
	volume="(CustomSoundController14+1)*camext*(0 max (rotorspeed-0.1))*(1 + rotorthrust)";
	range=2200;
	rangecurve[]=
	{
		{0,0},
		{100,0},
		{600,1},
		{1000,0.15},
		{2200,0}
	};
};
class Heli_01_TR_Engine_Distance_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Distant_Engine",
			1
		}
	};
	frequency="1.25*rotorspeed*(1-rotorthrust/15)";
	volume="camext*((rotorspeed-0.72)*4)*(CustomSoundController14+1)";
	range=1800;
	rangecurve[]=
	{
		{0,0},
		{300,1},
		{1200,0.2},
		{1800,0}
	};
};
class Heli_01_TR_EngineExt_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Engine_Ext",
			1
		}
	};
	frequency="rotorSpeed*(1+rotorThrust/6)";
	volume="camext*(rotorSpeed factor [0.3, 1])*(CustomSoundController14+1)";
	range=1300;
	rangecurve[]=
	{
		{0,1},
		{300,0.8},
		{800,0.3},
		{1300,0}
	};
};
class Heli_01_TR_RotorExt_SoundShader: Heli_01_TR_EngineExt_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Rotor_Ext",
			1
		}
	};
	frequency="(rotorSpeed factor [0.3, 0.7])*(1 - rotorThrust/10)";
	volume="camext*(rotorSpeed factor [0.3, 1])*(1 + rotorThrust)*(CustomSoundController14+1)";
	range=1800;
	rangecurve[]=
	{
		{0,0.2},
		{15,1},
		{1000,0.4},
		{1800,0}
	};
};
class Heli_01_TR_Turbine_Ext_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Turbine_Ext",
			1
		}
	};
	frequency="rotorSpeed";
	volume="(CustomSoundController14+1)*camext*(0 max (rotorSpeed-0.4))";
	range=200;
	rangecurve[]=
	{
		{0,0.3},
		{75,1},
		{100,0.3},
		{200,0}
	};
};

class Heli_01_TR_TailRotor_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\tail_rotor",
			1
		}
	};
	frequency="rotorspeed * (1-rotorthrust/15) * 1.25";
	volume="camext*0.25*(0 max (rotorspeed-0.5))*(1 + rotorthrust)*(CustomSoundController14+1)";
	range=150;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Internal
class Heli_01_TR_EngineInt_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine",
			1
		}
	};
	frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
	volume="(CustomSoundController16+1)*camInt*((rotorSpeed-0.75)*4)";
};
class Heli_01_TR_RotorInt_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor",
			1
		}
	};
	frequency="rotorSpeed*(1-rotorThrust/5)*1.2";
	volume="(CustomSoundController16+1)*camInt*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
};