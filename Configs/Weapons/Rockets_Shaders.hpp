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
	volume=1;
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
	volume="camPos";
	range=800;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{300,1},
		{800,0}
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
	volume="camPos";
	range=1500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{70,0.5},
		{500,1},
		{999,1},
		{1500,0}
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
	volume="camPos";
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{999,0},
		{1000,1},
		{2000,1}
	};
};
class Hydra_shot_close_soundshader: DAGR_shot_close_soundshader
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
	volume=1;
};
class Hydra_rocketpods_shot_close_distance_soundshader: DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Close",
			1
		}
	};
	volume="camPos";
};
class Hydra_shot_medium_distance_soundshader: DAGR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_MId",
			1
		}
	};
	volume="camPos";
};
class Hydra_shot_far_distance_soundshader: DAGR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Hydra_Far",
			1
		}
	};
	volume="camPos";
};
class DAR_shot_close_soundshader: DAGR_shot_close_soundshader
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
	volume=1;
};
class DAR_rocketpods_shot_close_distance_soundshader: DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Close",
			1
		}
	};
	volume="camPos";
};
class DAR_shot_medium_distance_soundshader: DAGR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Mid",
			1
		}
	};
	volume="camPos";
};
class DAR_shot_far_distance_soundshader: DAGR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\DAR_Far",
			1
		}
	};
	volume="camPos";
};
class Skyfire_shot_close_soundshader: DAGR_shot_close_soundshader
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
	volume=1;
};
class Skyfire_rocketpods_shot_close_distance_soundshader: DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_close",
			1
		}
	};
	volume="camPos";
};
class Skyfire_shot_medium_distance_soundshader: DAGR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_Mid",
			1
		}
	};
	volume="camPos";
};
class Skyfire_shot_far_distance_soundshader: DAGR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Rockets\Skyfire_far",
			1
		}
	};
	volume="camPos";
};

//-Missile
class AMH_shot_close_soundshader: DAGR_shot_close_soundshader
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
	volume=1;
};
class AMH_shot_close_distance_soundshader: DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AMH_close",
			1
		}
	};
	volume="camPos";
};
class AMH_shot_medium_distance_soundshader: DAGR_shot_medium_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_MId",
			1
		}
	};
	volume="camPos";
};
class AMH_shot_far_distance_soundshader: DAGR_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AM_far",
			1
		}
	};
	volume="camPos";
};

//-Air Missile Light
class AML_shot_close_soundshader: DAGR_shot_close_soundshader
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
	volume=1;
};
class AML_shot_close_distance_soundshader: DAGR_rocketpods_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Missiles\AML_close",
			1
		}
	};
	volume="camPos";
};
class AML_shot_medium_distance_soundshader: AMH_shot_medium_distance_soundshader
{
	volume="camPos";
};
class AML_shot_far_distance_soundshader: AMH_shot_far_distance_soundshader
{
	volume="camPos";
};

//-Tail
class Static_Launcher_Titan_ATAA_tailForest_SoundShader;
class Static_Launcher_Titan_ATAA_tailHouses_SoundShader;
class Static_Launcher_Titan_ATAA_tailMeadows_SoundShader;
class Rocket_Tail_forest_soundshader: Static_Launcher_Titan_ATAA_tailForest_SoundShader
{
	volume="(1-interior/1.4)*forest";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{2000,0.3}
	};
};
class Rocket_Tail_houses_soundshader: Static_Launcher_Titan_ATAA_tailHouses_SoundShader
{
	volume="(1-interior/1.4)*houses";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{2000,0.3}
	};
};
class Rocket_Tail_meadow_soundshader: Static_Launcher_Titan_ATAA_tailMeadows_SoundShader
{
	volume="(1-interior/1.4)*(meadows/2 max sea)";
	range=2000;
	limitation=1;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{2000,0.3}
	};
};