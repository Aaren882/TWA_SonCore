//-SoundShapes
class CfgSoundShapes
{
	class JetFX_RearSide_shape
	{
		type="cone";
		innerVolume=1.0;
		outerVolume=0;
		innerAngle=135;
		outerAngle=300;
		azimuth=180;
		elevation=0;
	};
	class JetFX_RearSide_Low_shape: JetFX_RearSide_shape
	{
		outerVolume=0.1;
	};
	class JetFX_RearSideClose_shape: JetFX_RearSide_shape
	{
		innerAngle=30;
		outerVolume=0.3;
	};
	class JetFX_Slow_RearSideClose_shape: JetFX_RearSideClose_shape
	{
		innerAngle=140;
		outerVolume=0.15;
	};
	class A10FX_RearSideClose_shape: JetFX_Slow_RearSideClose_shape
	{
		innerAngle=90;
		outerVolume=0.1;
	};
	class JetFX_FlyBy_shape
	{
		type="cone";
		innerVolume=1.0;
		outerVolume=0.35;
		innerAngle=85;
		outerAngle=120;
		azimuth=0;
		elevation=0;
	};
	class JetFX_Front_shape
	{
		type="cone";
		innerVolume=1.0;
		outerVolume=0.1;
		innerAngle=150;
		outerAngle=300;
		azimuth=0;
		elevation=0;
	};
	class JetFX_Slow_Front_shape: JetFX_Front_shape
	{
		outerVolume=0.5;
	};
	
	//Helis
	class HeliFX_Turbine_Shape: JetFX_RearSide_shape
	{
		outervolume=0.4;
		innerangle=130;
		outerangle=210;
	};
	class HeliFX_Front_Shape: JetFX_Front_shape
	{
		outervolume=0.4;
		innerangle=150;
		outerangle=230;
	};
	class HeliFX_Rear_Shape: HeliFX_Front_Shape
	{
		outervolume=0.65;
		innerangle=240;
		outerangle=120;
		azimuth=180;
	};
	class HeliFX_TailRotor_Shape: HeliFX_Turbine_Shape
	{
		outervolume=0.5;
		innerangle=70;
		outerangle=120;
	};
	
	//-Close Round
	class HeliFX_Round_Shape: JetFX_RearSide_shape
	{
		outervolume=0.75;
		innerangle=130;
		outerangle=310;
	};
};
//-SoundCurves
class CfgSoundCurves
{
	//Jets
	class JetFX_EngineLow_Base_Curve
	{
		points[]=
		{
			{0.0, 1.0},
			{0.1, 0.8},
			{0.8, 0.8},
			{0.9, 0.6},
			{1.0, 0.4}
		};
	};
	class JetFX_EngineExt_Intense_Base_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.3,0.65},
			{0.5,0.1},
			{0.8,0.01},
			{1.0,0.0}
		};
	};
	class JetFX_EngineExt_Base_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.3,0.9},
			{0.5,0.75},
			{0.7,0.5},
			{0.8,0.2},
			{0.9,0.1},
			{1.0,0.0}
		};
	};
	class JetFX_DistantFront_EngineExt_Base_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.2,0.9},
			{0.3,0.751},
			{0.4,0.55},
			{0.5,0.31},
			{0.6,0.125},
			{0.7,0.085},
			{0.8,0.01},
			{1.0,0.0}
		};
	};
	
	//Helis
	class HeliFX_Ext_Base_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.4,0.6},
			{0.6,0.4},
			{0.8,0.2},
			{0.9,0.1},
			{1.0,0.0}
		};
	};

	//Sonic Boom
	class JetFX_SonicBoom_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.8,0.15},
			{1.0,0.04}
		};
	};
	
	//-A-10
	class A10_HeavyCannonShot_Curve
	{
		points[]=
		{
			{0,1},
			{0.1,0.93},
			{0.2,0.7},
			{0.3,0.5},
			{0.4,0.2},
			{0.5,0.1},
			{0.6,0.08},
			{0.7,0.058},
			{0.8,0.02},
			{0.9,0.01},
			{1,0}
		};
	};
	
	//Cannon
	class HeliFX_CannonShotCurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.952},
			{0.3,0.8309},
			{0.4,0.5569},
			{0.5,0.452},
			{0.6,0.383},
			{0.7,0.2695},
			{0.8,0.1426},
			{0.9,0.102},
			{1,0.0041}
		};
	};
	class HeliFX_CannonShotTailCurve
	{
		points[]=
		{
			{0,1},
			{0.05,0.615},
			{0.1,0.6194},
			{0.15,0.5015},
			{0.2,0.4525},
			{0.25,0.3425},
			{0.3,0.1535},
			{0.35,0.1872},
			{0.4,0.1261},
			{0.45,0.0697},
			{0.5,0.0566},
			{0.6,0.0375},
			{0.7,0.015},
			{0.8,0.008},
			{0.9,0.001},
			{1,0}
		};
	};
	
	//- Heavy Cannons
	class VFX_HeavyCannonShot_Curve
	{
		points[]=
		{
			{0,1},
			{0.1,0.85},
			{0.2,0.7},
			{0.3,0.6},
			{0.4,0.4},
			{0.5,0.215},
			{0.6,0.11},
			{0.7,0.075},
			{0.8,0.025},
			{0.9,0.01},
			{1,0}
		};
	};
	class VFX_HeavyCannonTail_Curve
	{
		points[]=
		{
			{0,1},
			{0.1,0.9},
			{0.2,0.75},
			{0.3,0.68},
			{0.4,0.45},
			{0.5,0.31},
			{0.6,0.11},
			{0.7,0.075},
			{0.8,0.025},
			{0.9,0.01},
			{1,0}
		};
	};
	
	class VFX_LightCannonShot_Curve
	{
		points[]=
		{
			{0,1},
			{0.1,0.75},
			{0.2,0.7},
			{0.3,0.4},
			{0.4,0.2},
			{0.5,0.115},
			{0.6,0.11},
			{0.7,0.075},
			{0.8,0.025},
			{0.9,0.01},
			{1,0}
		};
	};
	class VFX_LightCannonTail_Curve
	{
		points[]=
		{
			{0,0.75},
			{0.1,0.5},
			{0.2,0.312},
			{0.3,0.2},
			{0.4,0.12},
			{0.5,0.015},
			{0.6,0.01},
			{0.7,0.075},
			{0.8,0.025},
			{0.9,0.01},
			{1,0}
		};
	};
	
	class CRAM_Tail_Curve
	{
		points[]=
		{
			{0,1},
			{0.1,0.9},
			{0.2,0.75},
			{0.3,0.68},
			{0.4,0.45},
			{0.5,0.31},
			{0.6,0.2},
			{1,0.15}
		};
	};
	
	//Rocket
	class Rockets_Fire_Weapons_volumecurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.95},
			{0.2,0.89},
			{0.3,0.755},
			{0.4,0.65},
			{0.5,0.435},
			{0.6,0.254},
			{0.7,0.125},
			{0.8,0.082},
			{0.9,0.0153},
			{1,0}
		};
	};
	class VFX_wpn_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.35},
			{0.3,0.232},
			{0.4,0.122},
			{0.5,0.11},
			{0.6,0.095},
			{0.7,0.056},
			{0.8,0.015},
			{0.9,0.01},
			{1,0}
		};
	};
	class VFX_basic_processorcurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.97},
			{0.2,0.95},
			{0.3,0.85},
			{0.4,0.71},
			{0.5,0.52},
			{0.6,0.32},
			{0.7,0.18},
			{0.8,0.1},
			{0.9,0.03},
			{1,0}
		};
	};
	class VFX_weapons_processorcurve
	{
		points[]=
		{
			{0,1},
			{0.005,0.75},
			{0.01,0.025},
			{1,0.01}
		};
	};
};
//-Sound3DProcessors
class CfgSound3DProcessors
{
	//Sonic Boom
	class JetFX_SonicBoom_3DProcessingType
	{
		type="panner";
		innerRange=0;
		range=100;
		rangeCurve="Smooth1Curve";
	};
	
	//Jet Engine
	class JetFX_Close_3DProcessingType
	{
		type="panner";
		innerRange=10;
		range=100;
		rangeCurve="Smooth1Curve";
	};
	class JetFX_Distant_3DProcessingType: JetFX_Close_3DProcessingType
	{
		innerRange=100;
	};
	class JetFX_Forsage_Close_3DProcessingType: JetFX_Close_3DProcessingType
	{
		innerRange=0;
		range=800;
	};
	
	//Heli
	class HeliFX_Close_3DProcessor: JetFX_Close_3DProcessingType
	{
		innerRange=50;
		range=300;
	};
	
	class HeliFX_Distant_3DProcessor: HeliFX_Close_3DProcessor
	{
		innerrange = 100;
		range = 800;
	};
	class HeliFX_TailRotor_3DProcessor: HeliFX_Close_3DProcessor
	{
		innerrange = 1;
		range = 5;
		rangecurve="LinearCurve";
	};
	
	//Gatling Gun
	class Gatling_WeaponShotInt_3DProcessor
	{
		type = "panner";
		innerRange = 0;
		range = 5;
		rangeCurve = "LinearCurve";
	};
	class Gatling_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=20;
		range=150;
		rangeCurve="LinearCurve";
		radius=10;
	};
	
	//Common Used
	class HeavyGAU_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=20;
		range=100;
		rangeCurve="HeliFX_CannonShotCurve";
	};
	class HeavyGAU_Int_Shot_3DProcessor: HeavyGAU_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=8;
		range=50;
		rangeCurve="LinearCurve";
	};
	
	class Heli_GAU_WeaponShotEcho_3DProcessor: HeavyGAU_WeaponShotEcho_3DProcessor
	{
		innerRange=15;
	};
	
	//Heavy Weapon (Gun Ship etc)
	class Heavy_WeaponShotEcho_3DProcessor: HeavyGAU_WeaponShotEcho_3DProcessor
	{
		innerRange=0;
		range=150;
		rangeCurve="VFX_HeavyCannonShot_Curve";
	};
	class Light_WeaponShotEcho_3DProcessor: Heavy_WeaponShotEcho_3DProcessor
	{
		range=5;
		rangeCurve="VFX_LightCannonShot_Curve";
	};
	
	//GAU-8
	class A10_HeavyGAU_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=10;
		range=300;
		//rangeCurve="A10_HeavyCannonShot_Curve";
	};
	class A10_HeavyGAU_Int_Shot_3DProcessor
	{
		type="panner";
		innerRange=8;
		range=50;
		rangeCurve="LinearCurve";
	};
	
	//Rockets
	class Rockets_Fire_weapons_3dprocessor
	{
		type="panner";
		innerrange=5;
		range=300;
		rangecurve="VFX_weapons_processorcurve";
	};
	class VFX_weapons_tails_3dprocessor
	{
		type="panner";
		innerrange=5;
		range=100;
		rangecurve="VFX_basic_processorcurve";
	};
	
	//Gunship
	class GunShip_Int_Shot_3DProcessor: HeavyGAU_Int_Shot_3DProcessor
	{
		range=15;
	};
};
//-DistanceFilters
class cfgDistanceFilters
{
	//Sonic Boom
	class JetFX_SonicBoom_Filter
	{
		type="lowpassfilter";
		mincutofffrequency=40;
		qfactor=0.8;
		innerrange=300;
		range=5000;
		powerfactor=20;
	};
	
	//Engine
	class JetFX_Close_Engine_Filter
	{
		type="lowpassfilter";
		mincutofffrequency=400;
		qfactor=1.0;
		innerrange=100;
		range=1500;
		powerfactor=5;
	};
	class JetFX_FlyBy_Engine_Filter
	{
		type="lowpassfilter";
		mincutofffrequency=800;
		qfactor=0.8;
		innerrange=5;
		range=800;
		powerfactor=43;
	};
	class JetFX_Distant_Engine_Filter: JetFX_Close_Engine_Filter
	{
		mincutofffrequency=350;
		qfactor=0.8;
		innerrange=800;
		range=5000;
		powerfactor=40;
	};
	class JetFX_Forsage_Close_Filter: JetFX_Close_Engine_Filter
	{
		mincutofffrequency=800;
		qfactor=0.4;
		innerrange=10;
	};
	class JetFX_Slow_Forsage_Close_Filter: JetFX_Forsage_Close_Filter
	{
		mincutofffrequency=1200;
		qfactor=0.5;
		innerrange=0;
	};
	
	// -Helicopter
	class HeliFX_Close_Engine_Filter
	{
		type="lowpassfilter";
		mincutofffrequency=100;
		qfactor=1.0;
		innerrange=0;
		range=1200;
		powerfactor=10;
	};
	class HeliFX_Distant_Engine_Filter: HeliFX_Close_Engine_Filter
	{
		mincutofffrequency=200;
		innerrange=1000;
		range=4000;
		powerfactor=18;
	};
	
	//Gatling Gun
	class Gatling_distance_filter
	{
		type="lowPassFilter";
		mincutofffrequency=150;
		qfactor=1;
		innerrange=10;
		range=1800;
		powerfactor=32;
	};
	
	//Common Uses
	class HeavyGAU_distance_filter
	{
		type="lowpassfilter";
		mincutofffrequency=150;
		qfactor=0.5;
		innerrange=600;
		range=3000;
		powerfactor=15;
	};
	class HeavyGAU_Int_Shot_filter
	{
		type="lowpassfilter";
		mincutofffrequency=40;
		qfactor=0.5;
		innerrange=1;
		range=50;
		powerfactor=10;
	};
	
	//Heli Cannon
	class Heli_GAU_distance_filter: HeavyGAU_distance_filter
	{
		type="lowPassFilter";
		mincutofffrequency=150;
		powerfactor=15;
	};
	
	//Heavy Weapon (Gun Ship etc)
	class Heavy_distance_filter: HeavyGAU_distance_filter
	{
		innerrange=0;
		powerfactor=30;
	};
	
	//-CRAM
	class CRAM_distance_filter: Heavy_distance_filter
	{
		innerrange=3000;
	};
	
	//GAU-8
	class A10_HeavyGAU_distance_filter: HeavyGAU_distance_filter
	{
		mincutofffrequency=100;
		innerrange=1000;
		range=5000;
		/*
		type="lowpassfilter";
		mincutofffrequency=30;
		qfactor=1;
		innerrange=10;
		range=3000;
		powerfactor=32;
		*/
	};
	/*class A10_HeavyGAU_Int_Shot_filter: HeavyGAU_Int_Shot_filter
	{
		type="lowpassfilter";
		mincutofffrequency=40;
		qfactor=0.5;
		innerrange=1;
		range=50;
		powerfactor=10;
	};*/
	
	//Rocket
	class Rockets_Fire_weapons_lowpass_filter
	{
		type="lowpassfilter";
		mincutofffrequency=100;
		qfactor=1;
		innerrange=150;
		range=2500;
		powerfactor=30;
	};
	class VFX_wpn_echo_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=300;
		qfactor=0.8;
		innerrange=30;
		range=2500;
		powerfactor=20;
	};
	
	//GunShip
	class GunShip_distance_filter
	{
		type="lowpassfilter";
		mincutofffrequency=30;
		qfactor=1;
		innerrange=8;
		range=3000;
		powerfactor=35;
	};
	class GunShip_Int_Shot_filter
	{
		type="lowpassfilter";
		mincutofffrequency=40;
		qfactor=0.5;
		innerrange=1;
		range=15;
		powerfactor=15;
	};
};