class Gau8_Fire_Lo_Int_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Fire_Lo_Int_SoundShader"
	};
	spatial=0;
	volumeCurve="InverseSquare2Curve";
	volumeFactor=2;
	distanceFilter="HeavyGAU_Int_Shot_filter";
	doppler=0;
	loop=0;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
	sound3DProcessingType="A10_HeavyGAU_Int_Shot_3DProcessor";
};
class Gau8_Fire_Hi_Int_SoundSet: Gau8_Fire_Lo_Int_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Fire_Hi_Int_SoundShader"
	};
};
class Gau8_Fire_Base_SoundSet
{
	distanceFilter="A10_HeavyGAU_distance_filter";
	doppler=1;
	loop=0;
	obstructionFactor=0.3;
	occlusionFactor=0.5;
	sound3DProcessingType="A10_HeavyGAU_WeaponShotEcho_3DProcessor";
	spatial=1;
	volumeCurve="InverseSquare2Curve";
	volumeFactor=1;
};
class Gau8_Fire_Lo_SoundSet: Gau8_Fire_Base_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Fire_Near_SoundShader",
		"Gau8_Fire_Close_SoundShader",
		"Gau8_Fire_Mid_SoundShader",
		"Gau8_Fire_far_SoundShader"
	};
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.5;
};
class Gau8_Fire_Hi_SoundSet: Gau8_Fire_Base_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Fire_Hi_Near_SoundShader",
		"Gau8_Fire_Hi_Mid_SoundShader",
		"Gau8_Fire_Hi_Far_SoundShader"
	};
	frequencyRandomizer=0.6;
	frequencyRandomizerMin=0.3;
};

//JSRS 1.4
class Gau8_J14_SoundSet: Gau8_Fire_Base_SoundSet
{
	soundShaders[]=
	{
		"Gau8_JS14_Fire_Close_SoundShader",
		"Gau8_JS14_Fire_Near_SoundShader",
		"Gau8_JS14_Fire_Mid_SoundShader",
		"Gau8_JS14_Fire_far_SoundShader"
	};
	doppler=0;
	frequencyRandomizer=1.2;
	frequencyRandomizerMin=0.8;
};

//Full Auto
class Gau8_Auto_Fire_Int_SoundSet: Gau8_Fire_Lo_Int_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Auto_Fire_Int_SoundShader"
	};
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.5;
};
class Gau8_Auto_Fire_Ext_SoundSet: Gau8_Fire_Base_SoundSet
{
	soundShaders[]=
	{
		"Gau8_Auto_Fire_3rd_SoundShader"/*,
		"Gau8_Auto_Fire_Near_SoundShader",
		"Gau8_Auto_Fire_Close_SoundShader",
		"Gau8_Auto_Fire_Mid_SoundShader",
		"Gau8_Auto_Fire_Far_SoundShader"*/
	};
	frequencyRandomizer=0.8;
	frequencyRandomizerMin=0.3;
};