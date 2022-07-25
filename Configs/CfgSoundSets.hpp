//Empty
class Empty_SoundSet
{
	soundShaders[]=
	{
		"Empty_SoundShader"
	};
	volumeFactor=1;
	spatial=1;
	loop=1;
	volumeCurve="InverseSquare1Curve";
	sound3DProcessingType="JetExt_Distant_3DProcessingType";
};

//G-Force
class GBreath_SoundSet
{
	soundShaders[]=
	{
		"G_Breath"
	};
	volumeFactor=0.7;
	spatial=0;
	loop=1;
	sound3DProcessingType="VehicleInt_Front_3DProcessingType";
};
class Int_gForce_SoundSet
{
	soundShaders[]=
	{
		"Int_gForce_SoundShader"
	};
	volumeFactor=1;
	spatial=0;
	loop=1;
	sound3DProcessingType="VehicleInt_Middle_3DProcessingType";
};
class Plane_CAS_01_Int_gForce_hard_soundSet: Int_gForce_SoundSet{};
class Int_gForce_Wind_SoundSet: Int_gForce_SoundSet
{
	soundShaders[]=
	{
		"Int_gForce_Wind_SoundShader"
	};
	volumeFactor=1.45;
};


//Weapons
#include "Weapons\Rockets_Sets.hpp"
#include "Weapons\GAU8_Sets.hpp"
#include "Weapons\Getling_Sets.hpp"
#include "Weapons\Cannon_Sets.hpp"
#include "Weapons\Others_Sets.hpp"
#include "Weapons\Gunship\25mm_Sets.hpp"
#include "Weapons\Gunship\40mm_Sets.hpp"
#include "Weapons\Gunship\105mm_Sets.hpp"

//-Jet Engine Bases

// -Interior
class JetFX_Internal_Base
{
	volumeFactor=0.8;
	spatial=0;
	loop=1;
};
// -Exterior
class JetFX_External_Base
{
	volumeFactor=1;
	spatial=1;
	loop=1;
	occlusionFactor=0.5;
	obstructionFactor=0;
};

class JetFX_External_Close_Base: JetFX_External_Base
{
	volumeCurve="JetFX_EngineExt_Base_Curve";
	sound3DProcessingType="JetFX_Close_3DProcessingType";
	distanceFilter="JetFX_Close_Engine_Filter";
	occlusionFactor=0.45;
	obstructionFactor=0.2;
};
class JetFX_External_Distance_Base: JetFX_External_Close_Base
{
	sound3DProcessingType="JetFX_Distant_3DProcessingType";
	distanceFilter="JetFX_Distant_Engine_Filter";
};

// Idle
// -Front
class JetFX_EngineLowExtFront_SoundSet_Base: JetFX_External_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowExt_Front_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	shape="JetFX_Front_shape";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};
class JetFX_EngineLowExt_Distance_Front_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowExt_Distance_Front_SoundShader_Base"
	};
	shape="FrontSemispace20";
	volumeFactor=0.1;
};
// -Side Rear
class JetFX_EngineLowExtSide_SoundSet_Base: JetFX_External_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowExt_Side_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};
class JetFX_EngineLowExt_SoundSet_Base: JetFX_External_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowExt_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	shape="JetFX_RearSide_Low_shape";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};

class JetFX_IdleExtDis_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_IdleExtDis_SoundShader_Base"
	};
	volumeFactor=0.8;
	sound3DProcessingType="JetFX_Close_Emitter_3DProcessingType";
	volumeCurve="JetFX_EngineLow_Base_Curve";
};
class JetFX_EngineExt_Close_Whine_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Close_Whine_SoundShader_Base"
	};
	volumeFactor=0.5;
	shape="JetFX_FlyBy_shape";
	distanceFilter="JetFX_FlyBy_Engine_Filter";
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
};
class JetFX_EngineLowExt_Distance_SoundSet_Base: JetFX_External_Distance_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowExt_Distance_SoundShader_Base"
	};
	shape="JetFX_RearSide_Low_shape";
};
///////////////////Wind/////////////////////
class JetFX_EngineExt_Close_Front_Wind_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Close_Front_Wind_SoundShader_Base"
	};
	shape="FrontSemispace60";
	volumeFactor=0.8;
};
class JetFX_EngineExt_Close_Rear_Wind_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Close_Rear_Wind_SoundShader_Base"
	};
	shape="JetFX_RearSideClose_shape";
	volumeFactor=2;
};
////////////////////////////////////////////
class JetFX_EngineExt_Close_Front_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Close_Front_SoundShader_Base"
	};
	shape="FrontSemispace20";
	volumeFactor=0.8;
};
class JetFX_EngineExt_Distance_Front_SoundSet_Base: JetFX_External_Distance_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Distance_Front_SoundShader_Base"
	};
	shape="FrontSemispace20";
	volumeFactor=0.6;
};
class JetFX_EngineExt_Side_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineExt_Side_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
	volumeFactor=0.4;
};
class JetFX_ForsageExt_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_ForsageExt_SoundShader_Base"
	};
	shape="JetFX_RearSideClose_shape";
	sound3DProcessingType="JetFX_Forsage_Close_3DProcessingType";
	distanceFilter="JetFX_Forsage_Close_Filter";
	volumeFactor=2;
};
class JetFX_EngineNoise_Ext_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_EngineNoise_Ext_SoundShader_Base"
	};
	shape="JetFX_RearSideClose_shape";
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
	volumeFactor=0.8;
};
class JetFX_EngineNoiseH_Ext_SoundSet_Base: JetFX_EngineNoise_Ext_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_EngineNoiseH_Ext_SoundShader_Base"
	};
	volumeFactor=0.5;
};
class JetFX_BurnerNoise_Ext_SoundSet_Base: JetFX_ForsageExt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_BurnerNoise_Ext_SoundShader_Base"
	};
	shape="RearSemispace20";
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
	volumeFactor=0.8;
};
class JetFX_ForsageExtDis_SoundSet_Base: JetFX_External_Distance_Base
{
	soundShaders[]=
	{
		"JetFX_ForsageExtDis_SoundShader_Base"
	};
	shape="JetFX_RearSide_shape";
};
class JetFX_ForsageExtFar_SoundSet_Base: JetFX_External_Distance_Base
{
	soundShaders[]=
	{
		"JetFX_ForsageExtFar_SoundShader_Base"
	};
	shape="JetFX_RearSide_shape";
	volumeFactor=0.5;
};
class JetFX_EngineWindNoiseExt_SoundSet_Base: JetFX_External_Distance_Base
{
	soundShaders[]=
	{
		"JetFX_EngineWindNoiseExt_SoundShader_Base"
	};
};
class JetFX_WindNoiseExt_SoundSet_Base: JetFX_External_Close_Base
{
	soundShaders[]=
	{
		"JetFX_WindNoiseExt_SoundShader_Base"
	};
};

//Internal
class JetFX_EngineLowInt_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_EngineLowInt_SoundShader_Base"
	};
	sound3DProcessingType="VehicleInt_Back_3DProcessingType";
};
class JetFX_EngineMidInt_SoundSet_Base: JetFX_EngineLowInt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_EngineMidInt_SoundShader_Base"
	};
};
class JetFX_EngineHighInt_SoundSet_Base: JetFX_EngineLowInt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_EngineHighInt_SoundShader_Base"
	};
};
class JetFX_EngineInt_SoundSet_Base: JetFX_EngineLowInt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_EngineInt_SoundShader_Base"
	};
	sound3DProcessingType="VehicleInt_Middle_3DProcessingType";
};
class JetFX_Whine_EngineInt_SoundSet_Base: JetFX_EngineInt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_Whine_EngineInt_SoundShader_Base"
	};
	volumeFactor=1;
	sound3DProcessingType="VehicleInt_Middle_3DProcessingType";
};
class JetFX_Whine_EngineIntTR_SoundSet_Base: JetFX_Whine_EngineInt_SoundSet_Base
{
	soundShaders[]=
	{
		"JetFX_Whine_EngineIntTR_SoundShader_Base"
	};
};

////////////////////Vehicles///////////////////////////
#include "Vehicles\CAS_01_Sets.hpp"
#include "Vehicles\Helis_Base_Sets.hpp"
#include "Vehicles\Heli_01_Sets.hpp"

//Environment Noises
class JetFX_scrubLandInt_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_scrubLandInt_SoundShader_Base"
	};
};
class JetFX_RainInt_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_RainInt_SoundShader_Base"
	};
};
class JetFX_WindInt_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_WindInt_SoundShader_Base"
	};
	volumeFactor=0.3;
};
class JetFX_GStress_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_GStress_SoundShader_Base"
	};
	volumeFactor=2;
};
class JetFX_SpeedStress_SoundSet_Base: JetFX_Internal_Base
{
	soundShaders[]=
	{
		"JetFX_SpeedStress_SoundShader_Base"
	};
	volumeFactor=0.5;
};

//Sonic Boom
class Plane_Fighter_SonicBoom_SoundSet
{
	soundShaders[]=
	{
		"JetFX_sonicboom_Close_SoundShader",
		"JetFX_sonicboom_Far_SoundShader"
	};
	volumeFactor=4;
	occlusionFactor=0.5;
	obstructionFactor=0.3;
	frequencyRandomizer=1;
	frequencyRandomizermMin=0.5;
	sound3DProcessingType="JetFX_SonicBoom_3DProcessingType";
	distanceFilter="JetFX_SonicBoom_Filter";
	volumeCurve="JetFX_SonicBoom_Curve";
};
class SonicBoom_AA_SoundSet: Plane_Fighter_SonicBoom_SoundSet
{
	soundShaders[]=
	{
		"JetFX_sonicboom_Close_SoundShader",
		"JetFX_sonicboom_Far_SoundShader"
	};
};