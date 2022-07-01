canLock=2;
dispersion=0.006;
displayName="GAU-8";
modes[]=
{
	"MG8_autoLo",
	"MG8_autoHi", 
	"MG8_close",
	"MG8_near",
	"MG8_short",
	"MG8_medium",
	"MG8_far"
};
class MG8_autoBase
{
	aiDispersionCoefX=10;
	aiDispersionCoefY=10;
	aiRateOfFire=0.25;
	aiRateOfFireDispersion=1;
	aiRateOfFireDistance=500;
	artilleryDispersion=1;
	artilleryCharge=1;
	autoFire=1;
	burstRangeMax=-1;
	canShootInWater=0;
	dispersion=0.006;
	ffCount=6;
	ffFrequency=11;
	ffMagnitude=0.5;
	flash="gunfire";
	flashSize=0.1;
	initSpeed=1030;
	maxRange=3;
	maxRangeProbab=0.004;
	midRange=2;
	midRangeProbab=0.06;
	minRange=1;
	minRangeProbab=0.06;
	recoil="Empty";
	recoilProne="recoil_auto_primary_prone_3outof10";
	requiredOpticType=-1;
	showToPlayer=1;
	soundBurst=1;
	soundContinuous=0;
	useAction=0;
	useActionTitle="";
	weaponSoundEffect="";
	multiplier=2;
};
class AI_Base: MG8_autoBase
{
	displayName = "$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
	sounds[] = 
	{
		"StandardSound"
	};
	class StandardSound
	{
		begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.6234136,1,1500,{25704,32159}};
		soundBegin[] = {"begin1",1};
	};
	textureType="fullAuto";
	soundContinuous = 1;
	soundBurst=0;
	autoFire = 1;
	salvo = 2;
	reloadTime = 0.03;
	dispersion = 0.0095;
	aiBurstTerminable = 1;
	showToPlayer = 0;
	burstRangeMax = 4;
	aiRateOfFireDispersion = 4;
	aiRateOfFire = 1;
	aiRateOfFireDistance = 10;
	minRange = 0;
	minRangeProbab = 0.01;
	midRange = 1;
	midRangeProbab = 0.01;
	maxRange = 2;
	maxRangeProbab = 0.01;
	flash = "gunfire";
	flashSize = 0.1;
	recoil = "Empty";
	ffMagnitude = 0.5;
	ffFrequency = 11;
	ffCount = 6;
	burst = 20;
};
class MG8_autoLo: MG8_autoBase
{
	displayName="LO";
	textureType="burst";
	sounds[]=
	{
		"StandardSound"
	};
	modes[]=
	{
		"LO"
	};
	class StandardSound
	{
		soundsetshot[]= sound_shot_Lo;
	};
	burst=32;
	reloadTime=0.01;
};
class MG8_autoHi: MG8_autoBase
{
	displayName="HI";
	textureType="fullAuto";
	sounds[]=
	{
		"StandardSound"
	};
	modes[]=
	{
		"HI"
	};
	class StandardSound
	{
		soundsetshot[]= sound_shot_Hi;
	};
	burst=60;
	reloadTime=0.009;
};
class MG8_close: AI_Base
{
	aiBurstTerminable=1;
	showToPlayer=0;
	aiRateOfFire=0.25;
	aiRateOfFireDistance=400;
	minRange=1;
	minRangeProbab=0.35;
	midRange=200;
	midRangeProbab=0.88;
	maxRange=400;
	maxRangeProbab=0.3;
};
class MG8_near: MG8_close{};
class MG8_short: MG8_near
{
	aiRateOfFire=0.5;
	aiRateOfFireDistance=600;
	minRange=200;
	minRangeProbab=0.3;
	midRange=400;
	midRangeProbab=0.88;
	maxRange=600;
	maxRangeProbab=0.3;
};
class MG8_medium: MG8_near
{
	aiRateOfFire=0.25;
	aiRateOfFireDistance=900;
	minRange=400;
	minRangeProbab=0.3;
	midRange=700;
	midRangeProbab=0.78;
	maxRange=900;
	maxRangeProbab=0.2;
};
class MG8_far: MG8_close
{
	aiRateOfFire=0.25;
	aiRateOfFireDistance=1500;
	minRange=800;
	minRangeProbab=0.2;
	midRange=1000;
	midRangeProbab=0.6;
	maxRange=1500;
	maxRangeProbab=0.1;
};