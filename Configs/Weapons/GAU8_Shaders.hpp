class Gau8_Fire_Hi_Int
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s1h",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s2h",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s3h",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s4h",
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
class Gau8_Fire_Lo_Int
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s1",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s2",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s3",
			1
		},
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\GAU8_s4",
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
class Gau8_Fire_Near
{
	samples[]=
	{
		
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_near",
			1
		}
	};
	range=1500;
	rangeCurve[]=
	{
		{0,0},
		{20,1},
		{1499,0.8},
		{1500,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Close
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close",
			1
		}
	};
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{1500,0},
		{1501,0.8},
		{1800,1},
		{1999,0.8},
		{2000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Mid
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_mid",
			1
		}
	};
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{2000,0},
		{2001,0.8},
		{2500,1},
		{2999,0.8},
		{3000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_far
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_far",
			1
		}
	};
	range=4000;
	rangeCurve[]=
	{
		{0,0},
		{3000,0},
		{3001,0.8},
		{3500,1},
		{4000,0}
	};
	volume="4*camPos";
};
//Hi
class Gau8_Fire_Hi_Near
{
	samples[]=
	{
		
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_near_2sec",
			1
		}
	};
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{20,1},
		{1999,0.8},
		{2000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Hi_Mid
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_close_2sec",
			1
		}
	};
	range=3000;
	rangeCurve[]=
	{
		{0,0},
		{2000,0},
		{2001,0.8},
		{2500,1},
		{2999,0.8},
		{3000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Hi_Far
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_2sec",
			1
		}
	};
	range=4000;
	rangeCurve[]=
	{
		{0,0},
		{3000,0},
		{3001,0.8},
		{3500,0.8},
		{4000,0}
	};
	volume="2*camPos";
};