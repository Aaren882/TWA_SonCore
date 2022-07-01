class DAR_weapon_shot_soundset
{
	SoundShaders[]=
	{
		"DAR_shot_close_soundshader",
		"DAR_rocketpods_shot_close_distance_soundshader",
		"DAR_shot_medium_distance_soundshader",
		"DAR_shot_far_distance_soundshader"
	};
	volumeFactor=1.5;
	volumecurve="Rockets_Fire_Weapons_volumecurve";
	sound3dprocessingtype="VFX_weapons_tails_3dprocessor";
	distancefilter="Rockets_Fire_weapons_lowpass_filter";
	occlusionFactor=0.25;
	obstructionFactor=0.3;
	spatial=1;
	doppler=0;
	loop=0;
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
class Rocket_Tail_soundset: DAR_weapon_shot_soundset
{
	soundshaders[]=
	{
		"Rocket_Tail_forest_soundshader",
		"Rocket_Tail_houses_soundshader",
		"Rocket_Tail_meadow_soundshader",
		"Rocket_Tail_trees_soundshader"
	};
	volumeFactor=0.5;
	volumecurve="VFX_wpn_vl_sin";
	frequencyrandomizer=2;
	distancefilter="VFX_wpn_echo_lp_dia";
	soundShadersLimit=2;
};