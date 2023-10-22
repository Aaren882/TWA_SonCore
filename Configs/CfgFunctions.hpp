class CfgFunctions
{
	class TWAF
	{
		class Modules
		{
			file = "MG8\TWA_SonCore\Functions\Modules";
			class CAS;
		};
	};
	//-Enhance SoundScape
	class L_ES_ES_sys
	{
		class L_ES_ES
		{
			file="MG8\TWA_SonCore\Functions\ES_sys";
			class fired;
			class surroundCheck;
			class checkEnviroment;
		};
	};
	class VCN
	{
		class Volconller
		{
			file="MG8\TWA_SonCore\Volconller\Functions";
			class Init;
			class engine;
			class heli;
			class plane;
			class setVolume;
			class debug;
			class SimHandler;
		};
	};
};
