class DAGR_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAGR_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAGR_Fire2",
			1
		}
	};
	volume="2";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAGR_Close",
			1
		}
	};
	volume="2*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class DAGR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAGR_MId",
			1
		}
	};
	volume="2*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class DAGR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAGR_Far",
			1
		}
	};
	volume="2*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};
class Hydra_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Fire2",
			1
		}
	};
	volume="2";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class Hydra_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Close",
			1
		}
	};
	volume="2*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class Hydra_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_MId",
			1
		}
	};
	volume="10*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class Hydra_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Far",
			1
		}
	};
	volume="10*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};
class DAR_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Fire2",
			1
		}
	};
	volume="2";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class DAR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Close",
			1
		}
	};
	volume="0.5*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class DAR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Mid",
			1
		}
	};
	volume="10*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class DAR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Far",
			1
		}
	};
	volume="10*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};
class Skyfire_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_Fire2",
			1
		}
	};
	volume="10";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class Skyfire_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_close",
			1
		}
	};
	volume="5*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class Skyfire_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_Mid",
			1
		}
	};
	volume="10*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class Skyfire_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_far",
			1
		}
	};
	volume="10*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};

//-Missile
class AMH_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AMH_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AMH_Fire2",
			1
		}
	};
	volume="5";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class AMH_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AMH_close",
			1
		}
	};
	volume="3*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class AMH_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_MId",
			1
		}
	};
	volume="10*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class AMH_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_far",
			1
		}
	};
	volume="10*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};

//-Air Missile Light
class AML_shot_close_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AML_Fire",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AML_Fire2",
			1
		}
	};
	volume="2";
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{10,0}
	};
};
class AML_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AML_close",
			1
		}
	};
	volume="3*camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{400,1},
		{500,0}
	};
};
class AML_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_MId",
			1
		}
	};
	volume="10*camPos";
	range=1000;
	rangecurve[]=
	{
		{0,0},
		{400,0},
		{500,1},
		{1000,0}
	};
};
class AML_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_far",
			1
		}
	};
	volume="10*camPos";
	range=2000;
	rangecurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{2000,0}
	};
};

//-Tail
class Rocket_Tail_forest_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Tail\Reflector_Forest_1",
			1
		}
	};
	volume="(1-interior/1.4)*forest";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,1},
		{2000,0.30000001}
	};
};
class Rocket_Tail_trees_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Tail\Reflector_Forest_1",
			1
		}
	};
	volume=" ( 1-interior ) * trees";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,1},
		{2000,0.30000001}
	};
};
class Rocket_Tail_houses_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Tail\Reflector_Houses_1",
			1
		}
	};
	volume="(1-interior/1.4)*houses";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,1},
		{2000,0.30000001}
	};
};
class Rocket_Tail_meadow_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Tail\Reflector_Meadow_1",
			1
		}
	};
	volume="(1-interior/1.4)*(meadows/2 max sea)";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,1},
		{2000,0.30000001}
	};
};