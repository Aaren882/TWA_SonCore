class Gau8_Fire_Hi_Int_SoundShader
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
class Gau8_Fire_Lo_Int_SoundShader
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
class Gau8_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_near",
			1
		}
	};
	range=1000;
	rangeCurve[]=
	{
		{0,0},
		{20,1},
		{999,0.8},
		{1000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close_2",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close_3",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close_4",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close_5",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_close_6",
			1
		}
	};
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{1000,0},
		{1001,0.8},
		{1800,1},
		{1999,0.8},
		{2000,0}
	};
	volume="2*camPos";
};
class Gau8_Fire_Mid_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_mid",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\gau8_mid2",
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
class Gau8_Fire_far_SoundShader
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
class Gau8_Fire_Hi_Near_SoundShader
{
	samples[]=
	{
		
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_near_2sec",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_near_2sec_2",
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
class Gau8_Fire_Hi_Mid_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_close_2sec",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Van\2sec\gau8_close_2sec_2",
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
class Gau8_Fire_Hi_Far_SoundShader
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

//JSRS 1.4
class Gau8_JS14_Fire_Near_SoundShader: Gau8_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\J14\gau8_near",
			1
		}
	};
};
class Gau8_JS14_Fire_Close_SoundShader: Gau8_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\J14\gau8_close",
			1
		}
	};
};
class Gau8_JS14_Fire_Mid_SoundShader: Gau8_Fire_Mid_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\J14\gau8_mid",
			1
		}
	};
};
class Gau8_JS14_Fire_far_SoundShader: Gau8_Fire_far_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\J14\gau8_far",
			1
		}
	};
};

//Full Auto
class Gau8_Auto_Fire_Int_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_0m_1",
			1
		}/*,
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_0m_2",
			1
		}*/
	};
	volume=0;
	range=10;
	rangeCurve[]=
	{
		{0,1},
		{5,0},
		{10,0}
	};
};
class Gau8_Auto_Fire_3rd_SoundShader: Gau8_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_300m_1",
			1
		}
	};
	range=300;
	rangeCurve[]=
	{
		{0,0},
		{20,1},
		{250,0.8},
		{300,0}
	};
};
class Gau8_Auto_Fire_Near_SoundShader: Gau8_Fire_Near_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_500m_1",
			1
		},
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_500m_2",
			1
		}
	};
	range=2000;
	rangeCurve[]=
	{
		{0,0},
		{250,0},
		{300,1},
		{1999,0.8},
		{2000,0}
	};
};
class Gau8_Auto_Fire_Close_SoundShader: Gau8_Fire_Close_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_1000m_1",
			1
		}
	};
};
class Gau8_Auto_Fire_Mid_SoundShader: Gau8_Fire_Mid_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_2000m_1",
			1
		}
	};
};
class Gau8_Auto_Fire_Far_SoundShader: Gau8_Fire_far_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\A10\Full\GAU8_4000m_1",
			1
		}
	};
};