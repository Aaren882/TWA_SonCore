// Idle
// -Front
class CAS_01_EngineLowExtFront_SoundSet_Base: JetFX_EngineLowExtFront_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineLowExt_Front_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	shape="JetFX_Front_shape";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};
// -Side Rear
class CAS_01_EngineLowExtSide_SoundSet_Base: JetFX_EngineLowExtSide_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineLowExt_Side_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};
class CAS_01_EngineLowExt_SoundSet_Base: JetFX_EngineLowExt_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineLowExt_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineLow_Base_Curve";
	shape="JetFX_RearSide_shape";
	sound3DProcessingType="JetExt_Close_3DProcessingType";
};

class CAS_01_IdleExtDis_SoundSet_Base: JetFX_IdleExtDis_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_IdleExtDis_SoundShader_Base"
	};
	volumeFactor=0.8;
	sound3DProcessingType="JetFX_Close_Emitter_3DProcessingType";
	volumeCurve="JetFX_EngineLow_Base_Curve";
};
////////////////////////////////////////////

class CAS_01_EngineExt_Close_Front_SoundSet_Base: JetFX_EngineExt_Close_Front_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineExt_Close_Front_SoundShader_Base"
	};
	shape="FrontSemispace20";
	volumeFactor=1;
};
class CAS_01_EngineExt_Close_Whine_SoundSet_Base: JetFX_EngineExt_Close_Whine_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineExt_Close_Whine_SoundShader_Base"
	};
	volumeFactor=0.8;
	shape="JetFX_Slow_Front_shape";
	distanceFilter="JetFX_FlyBy_Engine_Filter";
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
};
class CAS_01_EngineExt_Distance_Front_SoundSet_Base: JetFX_EngineExt_Distance_Front_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineExt_Distance_Front_SoundShader_Base"
	};
};
class CAS_01_EngineExt_Side_SoundSet_Base: JetFX_EngineExt_Side_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineExt_Side_SoundShader_Base"
	};
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
	volumeFactor=0.4;
};
class CAS_01_ForsageExt_SoundSet_Base: JetFX_ForsageExt_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_ForsageExt_SoundShader_Base"
	};
	shape="JetFX_Slow_RearSideClose_shape";
	sound3DProcessingType="JetFX_Forsage_Close_3DProcessingType";
	distanceFilter="JetFX_Slow_Forsage_Close_Filter";
	volumeFactor=1.2;
};
class CAS_01_EngineNoise_Ext_SoundSet_Base: JetFX_EngineNoise_Ext_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineNoise_Ext_SoundShader_Base"
	};
	shape="A10FX_RearSideClose_shape";
	volumeCurve="JetFX_EngineExt_Intense_Base_Curve";
	volumeFactor=0.8;
};
class CAS_01_ForsageExtDis_SoundSet_Base: JetFX_ForsageExtDis_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_ForsageExtDis_SoundShader_Base"
	};
	shape="JetFX_RearSide_shape";
};
class CAS_01_EngineLowExt_Distance_SoundSet_Base: JetFX_ForsageExtDis_SoundSet_Base
{
	soundShaders[]=
	{
		"CAS_01_EngineLowExt_Distance_SoundShader_Base"
	};
};