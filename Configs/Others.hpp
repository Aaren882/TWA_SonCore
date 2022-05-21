//-SoundShapes
class CfgSoundShapes
{
	class JetFX_RearSide_shape
	{
		type="cone";
		innerVolume=1.0;
		outerVolume=0.2;
		innerAngle=135;
		outerAngle=300;
		azimuth=180;
		elevation=0;
	};
	class JetFX_RearSideClose_shape: JetFX_RearSide_shape
	{
		innerAngle=140;
		outerAngle=250;
		outerVolume=0.15;
	};
	class JetFX_FlyBy_shape
	{
		type="cone";
		innerVolume=1.0;
		outerVolume=0.01;
		innerAngle=150;
		outerAngle=210;
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
		outerVolume=0.3;
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
	class HeliFX_TailRotor_Shape: HeliFX_Turbine_Shape
	{
		outervolume=0.5;
		innerangle=70;
		outerangle=120;
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
			{0.0,0.4},
			{0.8,1.0},
			{1.0,0.0}
		};
	};
	class JetFX_EngineExt_Base_Curve
	{
		points[]=
		{
			{0.0,1.0},
			{0.4,0.9},
			{0.8,0.6},
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
			{0.4,0.9},
			{0.8,0.6},
			{1.0,0.0}
		};
	};
	
	//Rocket
	class Rockets_Fire_Weapons_volumecurve
	{
		points[]=
		{
			{0,1},
			{0.1,0.75},
			{0.2,0.5},
			{0.3,0.2},
			{0.4,0.1},
			{0.5,0.05},
			{0.6,0.01},
			{0.7,0.0075},
			{0.8,0.0025},
			{0.9,0.001},
			{1,0}
		};
	};
	class VFX_wpn_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.5},
			{0.2,0.3},
			{0.3,0.25},
			{0.4,0.2},
			{0.5,0.175},
			{0.6,0.15},
			{0.7,0.125},
			{0.8,0.1},
			{0.9,0.05},
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
		type="emitter";
		innerRange=5000;
		range=5000;
		rangeCurve="Smooth1Curve";
	};
	
	//Jet Engine
	class JetFX_Close_3DProcessingType
	{
		type="panner";
		innerRange=1200;
		range=4000;
		rangeCurve="Smooth1Curve";
	};
	class JetFX_Distant_3DProcessingType: JetFX_Close_3DProcessingType
	{
		innerRange=3000;
	};
	class JetFX_Forsage_Close_3DProcessingType: JetFX_Close_3DProcessingType
	{
		innerRange=0;
		range=1000;
	};
	
	//Heli
	class HeliFX_Close_3DProcessor: JetFX_Close_3DProcessingType
	{
		innerRange=0;
		range=800;
	};
	
	class HeliFX_Distant_3DProcessor: HeliFX_Close_3DProcessor
	{
		innerrange = 2000;
		range = 3000;
	};
	class HeliFX_TailRotor_3DProcessor: HeliFX_Close_3DProcessor
	{
		innerrange = 1;
		range = 5;
		rangecurve="LinearCurve";
	};
	
	//Gatling Gun
	class Gatling_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=20;
		range=1500;
		rangeCurve="LinearCurve";
		radius=10;
	};
	
	//Common Uses
	class HeavyGAU_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=20;
		range=3000;
		rangeCurve="LinearCurve";
		radius=6;
	};
	class HeavyGAU_Int_Shot_3DProcessor
	{
		type="panner";
		innerRange=8;
		range=50;
		rangeCurve="LinearCurve";
	};
	
	//Heavy Weapon (Gun Ship etc)
	class Heavy_WeaponShotEcho_3DProcessor: HeavyGAU_WeaponShotEcho_3DProcessor
	{
		range=1500;
	};
	
	//GAU-8
	class A10_HeavyGAU_WeaponShotEcho_3DProcessor
	{
		type="panner";
		innerRange=100;
		range=4000;
		rangeCurve="LinearCurve";
		radius=6;
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
		innerrange=1;
		range=500;
		rangecurve="VFX_weapons_processorcurve";
	};
	class VFX_weapons_tails_3dprocessor
	{
		type="panner";
		innerrange=0;
		range=100;
		rangecurve="VFX_basic_processorcurve";
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
		innerrange=5000;
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
		range=1200;
		powerfactor=5;
	};
	class JetFX_FlyBy_Engine_Filter
	{
		type="lowpassfilter";
		mincutofffrequency=800;
		qfactor=1.0;
		innerrange=100;
		range=10000;
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
		mincutofffrequency=30;
		qfactor=1;
		innerrange=10;
		range=3000;
		powerfactor=32;
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
	
	//Heavy Weapon (Gun Ship etc)
	class Heavy_distance_filter: HeavyGAU_distance_filter
	{
		mincutofffrequency=150;
		innerrange=10;
		range=1800;
	};
	
	//GAU-8
	class A10_HeavyGAU_distance_filter
	{
		type="lowpassfilter";
		mincutofffrequency=30;
		qfactor=1;
		innerrange=100;
		range=4000;
		powerfactor=32;
	};
	class A10_HeavyGAU_Int_Shot_filter
	{
		type="lowpassfilter";
		mincutofffrequency=40;
		qfactor=0.5;
		innerrange=1;
		range=50;
		powerfactor=10;
	};
	
	//Rocket
	class Rockets_Fire_weapons_lowpass_filter
	{
		type="lowpassfilter";
		mincutofffrequency=1000;
		qfactor=1;
		innerrange=40;
		range=1000;
		powerfactor=55;
	};
	class VFX_wpn_echo_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=2500;
		qfactor=1;
		innerrange=30;
		range=300;
		powerfactor=75;
	};
};