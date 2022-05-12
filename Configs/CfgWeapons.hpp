class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class SmokeLauncher;
	class CMFlareLauncher: SmokeLauncher
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				delete begin1;
				delete soundBegin;
				soundSetShot[]={"CM_Shot_SoundSet"};
			};
			soundContinuous = 0;
		};
		class Burst: Mode_Burst
		{
			class StandardSound
			{
				delete begin1;
				delete soundBegin;
				soundSetShot[]={"CM_Shot_SoundSet"};
			};
			soundContinuous = 0;
		};
	};
};