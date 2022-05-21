//Empty
class Empty_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Empty",
			1
		}
	};
	frequency=1;
	volume="engineOn*camPos";
	range=10000;
	rangeCurve[]=
	{
		{0,1},
		{10000,1}
	};
};	

//G-Force
class G_Breath
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\GForce\GBreath",
			1
		}
	};
	frequency= "(0.1+(1.75*(speed factor[1, 175])))";
	volume="(1 + CustomSoundController25) * engineOn*camInt*((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))*((((-speed*3.6) max speed*3.6)/	600) factor[(((-150) max 150)/	600),(((-600) max 600)/	600)])";
};
class Int_gForce_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\GForce\int_gforce_hard",
			1
		}
	};
	frequency="0.8 + (0.4 * (gmeterZ factor [1.8,5]))";
	volume="(1 + CustomSoundController26) * camInt * (gmeterZ factor [1.8,5])";
};
class Plane_CAS_01_Int_gForce_hard_soundShader: Int_gForce_SoundShader{};
//Sonic Boom
class JetFX_sonicboom_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Sonic\sonicboom_01",
			1
		}
	};
	frequency=1;
	volume=2;
	range=2000;
	rangeCurve[]=
	{
		{0,1},
		{1800,1},
		{2000,0}
	};
};
class JetFX_sonicboom_Far_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Sonic\sonicboom_01_far",
			1
		}
	};
	frequency=1;
	volume=2;
	range=4000;
	rangeCurve[]=
	{
		{0,0},
		{1800,0},
		{2000,1},
		{3800,0.8},
		{4000,0}
	};
};

//Weapons
#include "Weapons\Rockets_Shaders.hpp"
#include "Weapons\GAU8_Shaders.hpp"
#include "Weapons\Getling_Shaders.hpp"
#include "Weapons\Cannon_Shaders.hpp"
#include "Weapons\Others_Shaders.hpp"

//Jet Engines
// -Idle
class JetFX_EngineLowExt_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\idle_ext_front",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.0, 0.4])";
	range=300;
	rangeCurve[]=
	{
		{0,1},
		{200,0.2},
		{300,0}
	};
};
class JetFX_EngineLowExt_Distance_Front_SoundShader_Base: JetFX_EngineLowExt_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Wind",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(Speed factor[1, 84])";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{10,0.3},
		{200,0.8},
		{600,0.4},
		{1000,0}
	};
};
class JetFX_EngineLowExt_Side_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\idle_ext_side",
			1
		}
	};
	frequency="1.0 min (rpm + 0.3)*(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.0, 0.4])";
	range=200;
	rangeCurve[]=
	{
		{0,0.5},
		{150,0.1},
		{200,0}
	};
};
class JetFX_EngineLowExt_SoundShader_Base: JetFX_EngineLowExt_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\idle_low_rear",
			1
		}
	};
	volume="0.8*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.0, 0.4])";
};
class JetFX_EngineLowExt_Distance_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\ForsageExt_Low",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="0.1*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[1.1, 0.4])";
	range=800;
	rangeCurve[]=
	{
		{0,1},
		{200,0.6},
		{400,0.2},
		{800,0}
	};
};
class JetFX_IdleExtDis_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\idle_Distant",
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
class JetFX_EngineExt_Close_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Front",
			1
		}
	};
	frequency="(rpm factor[0, 1])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=1000;
	rangeCurve[]=
	{
		{0,1},
		{800,0.3},
		{1000,0}
	};
};
class JetFX_EngineExt_Close_Whine_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Whine",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(speed factor[2, 200])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.6, 0.8])";
	range=800;
	rangeCurve[]=
	{
		{0,0.1},
		{700,1},
		{800,0}
	};
};
class JetFX_EngineExt_Distance_Front_SoundShader_Base: JetFX_EngineExt_Close_Front_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Wind",
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
class JetFX_EngineExt_Side_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Side",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(speed factor[2, 200])";
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.6, 0.8])";
	range=500;
	rangeCurve[]=
	{
		{0,0.1},
		{400,1},
		{500,0}
	};
};
class JetFX_ForsageExt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\ForsageExt",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=1000;
	rangeCurve[]=
	{
		{0,1},
		{800,0.2},
		{1000,0}
	};
};
class JetFX_EngineNoise_Ext_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Engine_Noise",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(thrust factor[0.6, 0.8])";
	range=1500;
	rangeCurve[]=
	{
		{0,1},
		{1200,0.8},
		{1500,0}
	};
};
class JetFX_BurnerNoise_Ext_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Burner_Noise",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{100,0.1},
		{800,1},
		{1000,0}
	};
};
class JetFX_ForsageExtDis_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\ForsageExt_Dis",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=2500;
	rangeCurve[]=
	{
		{0,0.4},
		{1000,1},
		{1200,0.3},
		{2500,0}
	};
};
class JetFX_ForsageExtFar_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\ForsageExt_Far",
			1
		}
	};
	frequency=1;
	volume="machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(CustomSoundController20)";
	range=2500;
	rangeCurve[]=
	{
		{0,0},
		{1000,0},
		{1200,1},
		{2000,0.3},
		{2500,0}
	};
};
class JetFX_EngineWindNoiseExt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Wind_Background",
			1
		}
	};
	frequency=1;
	volume="0.2*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(speed factor[1, 200])";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{100,0.5},
		{400,0.2},
		{500,0}
	};
};
class JetFX_WindNoiseExt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Ext\Wind_Ext",
			1
		}
	};
	frequency="3*(speed factor[1, 200])";
	volume="0.05*machcone*(CustomSoundController15+1)*camext*(rpm factor[0, 1])*(speed factor[1, 200])";
	range=300;
};

//Internal
class JetFX_EngineLowInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\Engine_Int_Low",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(1+(CustomSoundController19/10))";
	volume="engineOn*(CustomSoundController17+1)*camInt*(rpm factor[0.5, 1])";
};
class JetFX_EngineMidInt_SoundShader_Base: JetFX_EngineLowInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\Engine_Int_Mid",
			1
		}
	};
	volume="engineOn*(CustomSoundController17+1)*camInt*(rpm factor[0, 1])*(thrust factor[0.4, 1])";
};
class JetFX_EngineHighInt_SoundShader_Base: JetFX_EngineLowInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\Engine_Int_High",
			1
		}
	};
	volume="engineOn*(CustomSoundController17+1)*camInt*(rpm factor[0, 1])*CustomSoundController20";
};
class JetFX_EngineInt_SoundShader_Base: JetFX_EngineLowInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\Engine_Int",
			1
		}
	};
	frequency="(rpm factor[0.2, 1])";
	volume="engineOn*(CustomSoundController17+1)*camInt*(rpm factor[0.5, 1])";
};
class JetFX_Whine_EngineInt_SoundShader_Base: JetFX_EngineInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\Whine_Int",
			1
		}
	};
	frequency="(rpm factor[0, 1])*(CustomSoundController19+1)";
	volume="engineOn*(CustomSoundController17+1)*camInt*(rpm factor[0.3, 1])";
};
class JetFX_Whine_EngineIntTR_SoundShader_Base: JetFX_Whine_EngineInt_SoundShader_Base
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Plane\Int\WhineTR_Int",
			1
		}
	};
};
////////////////////Vehicles///////////////////////////
#include "Vehicles\CAS_01_Shaders.hpp"
#include "Vehicles\Helis_Base_Shaders.hpp"
#include "Vehicles\Heli_01_Shaders.hpp"