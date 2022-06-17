class 105mm_Autocannon_0m_SoundShader: 130_25mm_Shot25_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\0m_1",
			1
		}
	};
};
class 105mm_Autocannon_150m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\150m_1",
			1
		}
	};
	volume="camPos";
	range=500;
	rangeCurve[]=
	{
		{0,0},
		{15,0},
		{20,1},
		{50,1},
		{300,1},
		{500,0}
	};
};
class 105mm_Autocannon_550m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\550m_1",
			1
		}
	};
	volume="camPos";
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{300,0},
		{500,1},
		{1000,0}
	};
};
class 105mm_Autocannon_2000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\2000m_1",
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
class 105mm_Autocannon_3000m_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\3000m_1",
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
class 105mm_Autocannon_Tail_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\Gunship\105mm\Tail",
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