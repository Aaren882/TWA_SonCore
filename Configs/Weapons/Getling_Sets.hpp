class MNG_1st_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG_0m_SoundShader"
	};
	volumeFactor=1;
	doppler=0;
	loop=0;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
	sound3DProcessingType="Gatling_WeaponShotEcho_3DProcessor";
	distanceFilter="Gatling_distance_filter";
	spatial=0;
	volumeCurve="InverseSquare2Curve";
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.3;
};

//Int
class MNG_Int_Shot_SoundSet: MNG_1st_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG_Int_0m_SoundShader"
	};
};
//TP
class MNG_TP_Int_Shot_SoundSet: MNG_1st_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG_TP_0m_SoundShader"
	};
};
//AH
class MNG_AH_Int_Shot_SoundSet: MNG_1st_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG_AH_0m_SoundShader"
	};
};

//Ext
class MNG_AH_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG_AH_50m_SoundShader",
		"MNG_AH_150m_SoundShader",
		"MNG_AH_550m_SoundShader",
		"MNG_AH_1000m_SoundShader"
	};
	volumeFactor=1;
	distanceFilter="Gatling_distance_filter";
	doppler=1;
	loop=0;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
	sound3DProcessingType="Gatling_WeaponShotEcho_3DProcessor";
	spatial=1;
	volumeCurve="InverseSquare2Curve";
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.2;
};

//GAU-19
class MNG127_Int_Shot_SoundSet: MNG_1st_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG127_0m_SoundShader"
	};
};
class MNG127_Shot_SoundSet: MNG_AH_Shot_SoundSet
{
	soundShaders[]=
	{
		"MNG127_50m_SoundShader",
		"MNG_AH_150m_SoundShader",
		"MNG_AH_550m_SoundShader",
		"MNG_AH_1000m_SoundShader"
	};
};