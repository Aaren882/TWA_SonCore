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
	volume="(CustomSoundController14+1)*camPos*(0 max (rotorspeed-0.1))*(1 + rotorthrust)";
	range=1200;
	rangecurve[]=
	{
		{0,0},
		{100,0},
		{600,1},
		{1200,0}
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
	frequency="rotorspeed * (1-rotorthrust/15) * 1.25";
	volume="((rotorspeed-0.72)*4)*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{300,1},
		{1000,0}
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
	frequency="rotorSpeed";
	volume="(CustomSoundController14+1)*camPos*rotorSpeed";
	range=1000;
	rangecurve[]=
	{
		{0,1},
		{300,0.8},
		{800,0.3},
		{1000,0}
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
	frequency="(rotorSpeed factor [0.3, 0.7])*(rotorSpeed factor [0.3, 1])*(1 - rotorThrust/10)";
	volume="(CustomSoundController14+1)*camPos*(rotorSpeed factor [0.3, 1])*(1 + rotorThrust)";
	range=1200;
	rangecurve[]=
	{
		{0,0},
		{150,1},
		{1000,0.4},
		{1200,0}
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
	volume="(CustomSoundController14+1)*camPos*(0 max (rotorSpeed-0.4))";
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
	volume="(CustomSoundController14+1)*camPos*0.25*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
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
	volume="(CustomSoundController16+1)*(1-camPos)*((rotorSpeed-0.75)*4)";
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
	volume="(CustomSoundController16+1)*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
};