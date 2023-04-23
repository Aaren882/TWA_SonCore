class GAU_30mm_APCH_shot_Int_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\Gun_AP_0m_1",
			1
		}
	};
	volume=1;
	range=15;
	rangeCurve[]=
	{
		{0,1},
		{15,0}
	};
};
class GAU_30mm_APCH_shot_3rd_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\Gun_AP_50m_1",
			1
		}
	};
	volume="2*CamPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{200,0.8},
		{500,0}
	};
};
class GAU_30mm_APCH_shot_close_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\Gun_AP_500m_1",
			1
		}
	};
	volume="camPos";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{200,0},
		{500,1},
		{1000,0}
	};
};
class GAU_30mm_APCH_shot_far_distance_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\Gun_AP_1000m_1",
			1
		}
	};
	volume="camPos";
	range=1800;
	rangeCurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{1800,0}
	};
};

//YakB
class GAU_127mm_YakB_0m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\0m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\0m_2",
			1
		},
	};
	volume=2;
	range=15;
	rangeCurve[]=
	{
		{0,1},
		{15,0}
	};
};
class GAU_127mm_YakB_50m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\50m_1",
			1
		}
	};
	volume="2*camPos";
	range=50;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{20,1},
		{50,0},
	};
};
class GAU_127mm_YakB_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\150m_1",
			1
		}
	};
	volume="camPos";
	range=400;
	rangeCurve[]=
	{
		{0,0},
		{20,0},
		{50,1},
		{200,0.5},
		{400,0}
	};
};
class GAU_127mm_YakB_550m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\550m_1",
			1
		}
	};
	volume="camPos";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{200,0},
		{500,1},
		{1000,0}
	};
};
class GAU_127mm_YakB_1000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\YakB\1000m_1",
			1
		}
	};
	volume="camPos";
	range=1800;
	rangeCurve[]=
	{
		{0,0},
		{500,0},
		{1000,1},
		{1800,0}
	};
};

//M61
class M61_Fire_SoundShader
{
	
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_0m_01",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_0m_02",
			1
		}
	};
	volume=1;
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{5,0},
		{10,0}
	};
};
class M61_Fire_3rd_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_200m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_200m_02",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{50,1},
		{199,0.8},
		{200,0}
	};
};
class M61_Fire_Near_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_400m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_400m_02",
			1
		}
	};
	volume="2*camPos";
	frequency=1;
	range=800;
	rangeCurve[]=
	{
		{0,0},
		{200,0},
		{201,1},
		{799,0.8},
		{800,0}
	};
};
class M61_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_500m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_500m_02",
			1
		}
	};
	volume="camPos";
	frequency=1;
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{800,0},
		{801,1},
		{1500,0.8},
		{3000,0}
	};
};
class M61_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_2000m_01",
			1
		}/*,
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_2000m_02",
			1
		}*/
	};
	volume="2*camPos";
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{2000,0},
		{2001,1},
		{2999,0.8},
		{3000,0}
	};
};

//Gsh
class Gsh_Fire_SoundShader
{
	
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_0m_01",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_0m_01",
			1
		}
	};
	volume=1;
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{5,0},
		{10,0}
	};
};
class Gsh_Fire_3rd_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_200m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_200m_02",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{50,1},
		{200,0}
	};
};
class Gsh_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_500m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_500m_02",
			1
		}
	};
	volume="camPos";
	range=1800;
	rangeCurve[]=
	{
		{0,0},
		{100,0},
		{200,0.5},
		{1000,1},
		{1500,0.6},
		{1800,0}
	};
};
class Gsh_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_2000m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Gsh_2000m_02",
			1
		}
	};
	volume="camPos";
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{1500,0},
		{1800,1},
		{2500,0.6},
		{3000,0}
	};
};

//25mm
class GAU_25mm_Fire_SoundShader
{
	
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_0m_01",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_0m_02",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_0m_03",
			1
		}
	};
	volume=1;
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{5,0},
		{10,0}
	};
};
class GAU_25mm_Fire_3rd_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_200m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_200m_02",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{50,1},
		{200,0}
	};
};
class GAU_25mm_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_500m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_500m_02",
			1
		}
	};
	volume="camPos";
	range=1800;
	rangeCurve[]=
	{
		{0,0},
		{100,0},
		{200,0.5},
		{1000,1},
		{1500,0.6},
		{1800,0}
	};
};
class GAU_25mm_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_2000m_01",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU22\25mm_2000m_02",
			1
		}
	};
	volume="0.5*camPos";
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{1500,0},
		{1800,1},
		{2500,0.6},
		{3000,0}
	};
};

//Tails
class GAU_30mm_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\Tail",
			1
		}
	};
	volume="0.6*camPos";
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{100,1},
		{1000,0.3},
		{2000,0}
	};
};
class M61_Fire_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\M61\f18_Tail",
			1
		}
	};
	volume="0.5*camPos";
	range=100;
	rangeCurve[]=
	{
		{0,0},
		{5,0},
		{15,0.6},
		{100,1},
		{2000,1},
		{3000,0}
	};
};
class GAU_Fire_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Cannon\GAU\Tail",
			1
		}
	};
	volume="0.5*camPos";
	range=100;
	rangeCurve[]=
	{
		{0,0},
		{10,0},
		{15,1},
		{100,0},
	};
};