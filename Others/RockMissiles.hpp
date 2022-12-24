#define Hydra   {"Hydra_weapon_shot_soundset","Rocket_Tail_soundset"}
#define Skyfire {"Skyfire_weapon_shot_soundset","Rocket_Tail_soundset"}
#define DAGR    {"DAGR_weapon_shot_soundset","Rocket_Tail_soundset"}
#define DAR 	{"DAR_weapon_shot_soundset","Rocket_Tail_soundset"}
#define AML 	{"AML_weapon_shot_soundset","Rocket_Tail_soundset"}
#define AMH 	{"AMH_weapon_shot_soundset","Rocket_Tail_soundset"}

#define SETSOUND(SND) \
	soundContinuous=0; \
	class StandardSound \
	{ \
		soundBegin[] = {"begin1",0}; \
		soundSetShot[]=SND; \
	} 