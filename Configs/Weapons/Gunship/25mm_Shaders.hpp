class 130_25mm_Shot25_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\25\0m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\25\0m_2",
			1
		}
	};
	volume="2*(1-camPos)";
	range=50;
	rangeCurve[]=
	{
		{0,1},
		{50,0.8}
	};
};
class 130_25mm_Shot50_SoundShader: 130_25mm_Shot25_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\50\0m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\50\0m_2",
			1
		}
	};
};
class 130_25mm_Shot100_SoundShader: 130_25mm_Shot25_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\100\0m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\100\0m_2",
			1
		}
	};
};
class 130_25mm_Shot25_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\25\150m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\25\150m_2",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{10,0.2},
		{50,1},
		{100,1},
		{200,0}
	};
};
class 130_25mm_Shot50_150m_SoundShader: 130_25mm_Shot25_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\50\150m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\50\150m_2",
			1
		}
	};
};
class 130_25mm_Shot100_150m_SoundShader: 130_25mm_Shot25_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\100\150m_1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\100\150m_2",
			1
		}
	};
};

//FAR
class 130_25mm_Shot_550m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\550m_1",
			1
		}
	};
	volume="camPos";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{100,0},
		{200,1},
		{500,1},
		{800,0.6},
		{1000,0}
	};
};
class 130_25mm_Shot_2000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\2000m_1",
			1
		}
	};
	volume="camPos";
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{800,0},
		{1000,1},
		{2000,0}
	};
};
class 130_25mm_Shot_4000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\3000m_1",
			1
		}
	};
	volume="camPos";
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{1000,0},
		{2000,1},
		{3000,1}
	};
};
class 130_25mm_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\25mm\Tail",
			1
		}
	};
	volume="camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{100,1},
		{300,1},
		{500,0},
	};
};