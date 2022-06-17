class 40mm_Autocannon_0m_SoundShader: 130_25mm_Shot25_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\0m_1",
			1
		}
	};
};
class 40mm_Autocannon_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\150m_1",
			1
		}
	};
	volume="camPos";
	range=500;
	rangeCurve[]=
	{
		{0,1},
		{100,0.8},
		{500,0}
	};
};
class 40mm_Autocannon_550m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\550m_1",
			1
		}
	};
	volume="camPos";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{150,0},
		{550,1},
		{1000,0}
	};
};
class 40mm_Autocannon_2000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\2000m_1",
			1
		}
	};
	volume="camPos";
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{550,0},
		{1000,1},
		{2000,0}
	};
};
class 40mm_Autocannon_3000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\3000m_1",
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
		{3000,0}
	};
};
class 40mm_Autocannon_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\40mm\Tail",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{100,1},
		{200,0}
	};
};