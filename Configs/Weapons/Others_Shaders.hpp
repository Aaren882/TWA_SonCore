class CM_shot_Int_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\CM\CM_int",
			1
		}
	};
	volume="(1-camPos)";
	range=20;
	rangeCurve[]=
	{
		{0,1},
		{15,1},
		{10,0}
	};
};
class CM_shot_Ext_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\CM\CM_Ext",
			1
		}
	};
	volume="camPos";
	range=200;
	rangeCurve[]=
	{
		{0,0},
		{15,1},
		{150,0.4},
		{200,0}
	};
};
class CM_shot_Dis_Ext_soundshader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Weapons\CM\CM_Dis_Ext",
			1
		}
	};
	volume="2*camPos";
	range=400;
	rangeCurve[]=
	{
		{0,0},
		{175,0},
		{200,1},
		{300,0.4},
		{400,0}
	};
};