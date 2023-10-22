class GAU_127mm_YakB_weapon_shot_soundset: MNG_AH_Shot_SoundSet
{
	SoundShaders[]=
	{
		"GAU_127mm_YakB_0m_SoundShader",
		"GAU_127mm_YakB_50m_SoundShader",
		"GAU_127mm_YakB_150m_SoundShader",
		"GAU_127mm_YakB_550m_SoundShader",
		"GAU_127mm_YakB_1000m_SoundShader"
	};
	volumeFactor=1;
	sound3DProcessingType="Heavy_WeaponShotEcho_3DProcessor";
	distanceFilter="Heavy_distance_filter";
};

//Basic definition
class HeliGAU_Int_Base
{
	volumeFactor=1;
	volumeCurve="InverseSquare2Curve";
	sound3DProcessingType="HeavyGAU_Int_Shot_3DProcessor";
	distanceFilter="HeavyGAU_Int_Shot_filter";
	spatial=0;
	doppler=0;
	loop=0;
};
class HeliGAU_Ext_Base: HeliGAU_Int_Base
{
	sound3DProcessingType="Heli_GAU_WeaponShotEcho_3DProcessor";
	distanceFilter="Heli_GAU_distance_filter";
	spatial=1;
	doppler=1;
	occlusionFactor=0.25;
	obstructionFactor=0.3;
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.2;
};

//M61
class M61_Int_Shot_SoundSet: HeliGAU_Int_Base
{
	soundShaders[]=
	{
		"M61_Fire_SoundShader"
	};
	volumeFactor=1;
	distanceFilter="HeavyGAU_Int_Shot_filter";
	obstructionFactor=0.1;
	occlusionFactor=0.4;
	frequencyRandomizer=0.4;
	frequencyRandomizerMin=0.2;
	sound3DProcessingType="HeavyGAU_Int_Shot_3DProcessor";
};
class M61_Shot_SoundSet: M61_Int_Shot_SoundSet
{
	soundShaders[]=
	{
		"M61_Fire_3rd_SoundShader",
		"M61_Fire_Near_Close_SoundShader"
		//"M61_Fire_Close_SoundShader",
	};
	volumeFactor=1;
	distanceFilter="HeavyGAU_distance_filter";
	doppler=1;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
	frequencyRandomizer=1;
	frequencyRandomizerMin=0.6;
	sound3DProcessingType="HeavyGAU_WeaponShotEcho_3DProcessor";
	spatial=1;
};
class M61_Shot_Close_SoundSet: M61_Shot_SoundSet
{
	soundShaders[]=
	{
		"M61_Fire_Close_SoundShader"/*,
		"M61_Fire_Near_SoundShader"*/
	};
	frequencyRandomizer=1.1;
	//frequencyRandomizerMin=0.3;
	doppler=0;
};

//Gsh
class Gsh_Int_Shot_SoundSet: M61_Int_Shot_SoundSet
{
	soundShaders[]=
	{
		"Gsh_Fire_SoundShader"
	};
};
class Gsh_Shot_SoundSet: M61_Shot_SoundSet
{
	soundShaders[]=
	{
		"Gsh_Fire_3rd_SoundShader",
		"Gsh_Fire_Close_SoundShader",
		"Gsh_Fire_Near_SoundShader"
	};
	frequencyRandomizer=0.3;
	frequencyRandomizerMin=0.1;
};

//AH64
class GAU_30mm_APCH_shot_Int_SoundSet: HeliGAU_Int_Base
{
	SoundShaders[]=
	{
		"GAU_30mm_APCH_shot_Int_soundshader"
	};
	volumeFactor=3;
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.2;
};
class GAU_30mm_APCH_weapon_shot_soundset: HeliGAU_Ext_Base
{
	SoundShaders[]=
	{
		"GAU_30mm_APCH_shot_3rd_soundshader",
		"GAU_30mm_APCH_shot_close_distance_soundshader",
		"GAU_30mm_APCH_shot_far_distance_soundshader"
	};
	volumeFactor=0.75;
	sound3DProcessingType="Heavy_WeaponShotEcho_3DProcessor";
	distanceFilter="Heavy_distance_filter";
	occlusionFactor=0.25;
	frequencyrandomizer=1.2;
};

//25mm
class GAU_25mm_Int_Shot_SoundSet: Gsh_Int_Shot_SoundSet
{
	soundShaders[]=
	{
		"GAU_25mm_Fire_SoundShader"
	};
	volumeFactor=2;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
};
class GAU_25mm_Shot_SoundSet: Gsh_Shot_SoundSet
{
	soundShaders[]=
	{
		"GAU_25mm_Fire_3rd_SoundShader",
		"GAU_25mm_Fire_Close_SoundShader",
		"GAU_25mm_Fire_Near_SoundShader"
	};
	volumeFactor=2;
	frequencyRandomizer=1.0;
	frequencyRandomizerMin=0.2;
};

//Tails
class GAU_Tail_SoundSet
{
	soundShaders[]=
	{
		"GAU_Fire_Tail_SoundShader"
	};
	volumeFactor=1;
	volumeCurve="InverseSquare2Curve";
	sound3DProcessingType="HeavyGAU_WeaponShotEcho_3DProcessor";
	distanceFilter="HeavyGAU_distance_filter";
	frequencyRandomizer=1.2;
	occlusionFactor=0.3;
	obstructionFactor=0;
	frequencyRandomizerMin=0.1;
	spatial=1;
	doppler=0;
	loop=0;
};
class M61_Tail_SoundSet: GAU_Tail_SoundSet
{
	soundShaders[]=
	{
		"M61_Fire_Tail_SoundShader"
	};
	volumeFactor=0.5;
};
class GAU_30mm_Tail_SoundSet: GAU_Tail_SoundSet
{
	soundShaders[]=
	{
		"GAU_30mm_Tail_SoundShader"
	};
	volumeFactor=0.5;
	sound3DProcessingType="WeaponMediumShotTail3DProcessingType";
	distanceFilter="weaponShotDistanceFreqAttenuationFilter";	
};