class DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"DAR_shot_close_soundshader",
		"DAR_rocketpods_shot_close_distance_soundshader",
		"DAR_shot_medium_distance_soundshader",
		"DAR_shot_far_distance_soundshader"
	};
	volumeFactor=1.4;
	volumecurve="Rockets_Fire_Weapons_volumecurve";
	sound3dprocessingtype="VFX_weapons_tails_3dprocessor";
	distancefilter="Rockets_Fire_weapons_lowpass_filter";
	occlusionFactor=0.25;
	obstructionFactor=0.3;
	occlusionObstruction = 1;
	spatial=1;
	doppler=0;
	loop=0;
	frequencyRandomizerMin=0.2;
	frequencyrandomizer=0.5;
};
class DAGR_weapon_shot_soundset: DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"DAGR_shot_close_soundshader",
		"DAGR_rocketpods_shot_close_distance_soundshader",
		"DAGR_shot_medium_distance_soundshader",
		"DAGR_shot_far_distance_soundshader"
	};
	frequencyrandomizer=1;
};
class Hydra_weapon_shot_soundset: DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"Hydra_shot_close_soundshader",
		"Hydra_rocketpods_shot_close_distance_soundshader",
		"Hydra_shot_medium_distance_soundshader",
		"Hydra_shot_far_distance_soundshader"
	};
};
class Skyfire_weapon_shot_soundset: DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"Skyfire_shot_close_soundshader",
		"Skyfire_rocketpods_shot_close_distance_soundshader",
		"Skyfire_shot_medium_distance_soundshader",
		"Skyfire_shot_far_distance_soundshader"
	};
};
//-Missile
class AMH_weapon_shot_soundset: DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"AMH_shot_close_soundshader",
		"AMH_shot_close_distance_soundshader",
		"AMH_shot_medium_distance_soundshader",
		"AMH_shot_far_distance_soundshader"
	};
};
class AML_weapon_shot_soundset: DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"AML_shot_close_soundshader",
		"AML_shot_close_distance_soundshader",
		"AML_shot_medium_distance_soundshader",
		"AML_shot_far_distance_soundshader"
	};
};

class Rocket_Tail_soundset: DAR_weapon_shot_soundset
{
	soundshaders[]=
	{
		"Rocket_Tail_forest_soundshader",
		"Rocket_Tail_houses_soundshader",
		"Rocket_Tail_meadow_soundshader"
	};
	volumeFactor=1;
	volumecurve="VFX_wpn_vl_sin";
	frequencyrandomizer=0.5;
	distancefilter="VFX_wpn_echo_lp_dia";
	sound3DProcessingType="ExplosionMediumTail3DProcessingType";
	soundShadersLimit=2;
};