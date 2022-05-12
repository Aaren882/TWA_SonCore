class CAS_01_EngineLowExt_Front_SoundShader_Base: JetFX_EngineLowExt_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\idle_ext_front",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])";
	range=1200;
	rangeCurve[]=
	{
		{0,1},
		{500,0.6},
		{1200,0}
	};
};
class CAS_01_EngineLowExt_Side_SoundShader_Base: JetFX_EngineLowExt_Side_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\idle_ext_side",
			1
		}
	};
	frequency="1.0 min (rpm + 0.3)*(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])";
	range=1200;
	rangeCurve[]=
	{
		{0,1},
		{500,0.6},
		{1200,0}
	};
};
class CAS_01_EngineLowExt_SoundShader_Base: CAS_01_EngineLowExt_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\idle_low_rear",
			1
		}
	};
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])";
};
class CAS_01_EngineLowExt_Distance_SoundShader_Base: JetFX_EngineLowExt_Distance_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\ForsageExt_Low",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.1*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.1, 0.4])";
	range=1200;
	rangeCurve[]=
	{
		{0,1},
		{500,0.6},
		{1200,0}
	};
};
class CAS_01_IdleExtDis_SoundShader_Base: JetFX_IdleExtDis_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\idle_Distant",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.0, 0.2])";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{5,0.1},
		{200,0.8},
		{800,0.2},
		{1000,0}
	};
};
/////////////////////////////////////////////////////
class CAS_01_EngineExt_Close_Front_SoundShader_Base: JetFX_EngineExt_Close_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\Engine_Front",
			1
		}
	};
	frequency="(rpm factor[0, 1])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=800;
	rangeCurve[]=
	{
		{0,1},
		{500,0.3},
		{800,0}
	};
};
class CAS_01_EngineExt_Close_Whine_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\Engine_Whine",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(speed factor[2, 200])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])**(speed factor[1, 100])";
	range=1200;
	rangeCurve[]=
	{
		{0,0.4},
		{800,1},
		{1200,0}
	};
};
class CAS_01_EngineExt_Distance_Front_SoundShader_Base: JetFX_EngineExt_Distance_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\Dist_front",
			1
		}
	};
	volume="0.5*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.6, 0.8])";
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{500,0},
		{1000,0.5},
		{1300,1},
		{2000,0}
	};
};
class CAS_01_EngineExt_Side_SoundShader_Base: JetFX_EngineExt_Side_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\Engine_Side",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(speed factor[2, 200])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.3, 0.8])";
	range=800;
	rangeCurve[]=
	{
		{0,0.1},
		{400,1},
		{800,0}
	};
};
class CAS_01_ForsageExt_SoundShader_Base: JetFX_ForsageExt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\ForsageExt",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.3, 0.8])";
	range=1200;
	rangeCurve[]=
	{
		{0,1},
		{800,0.8},
		{1200,0}
	};
};
class CAS_01_EngineNoise_Ext_SoundShader: JetFX_EngineNoise_Ext_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\Engine_Noise",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.4, 1])";
	range=2000;
	rangeCurve[]=
	{
		{0,1},
		{1200,0.4},
		{2000,0}
	};
};
class CAS_01_ForsageExtDis_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\CAS_01\Ext\ForsageExt_Dis",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.3, 1])";
	range=1800;
	rangeCurve[]=
	{
		{0,0.1},
		{1000,0.5},
		{1800,0}
	};
};