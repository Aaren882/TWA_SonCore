class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class CannonCore;
	class FIR_M61A2: CannonCore
	{
		soundContinuous=0;
		class StandardSound
		{
			soundSetShot[] = 
			{
				"M61_Int_Shot_SoundSet",
				"M61_Shot_SoundSet",
				"M61_Shot_Close_SoundSet"
			};
		};
	};
	class SmokeLauncher;
	class FIR_CMLauncher: SmokeLauncher
	{
		class Single: Mode_SemiAuto
		{
			#include "\MG8\TWA_SonCore\Others\CM_setup.hpp"
		};
		class Burst: Mode_Burst
		{
			#include "\MG8\TWA_SonCore\Others\CM_setup.hpp"
		};
		class F_Burst: Mode_Burst
		{
			#include "\MG8\TWA_SonCore\Others\CM_setup.hpp"
		};
	};
};