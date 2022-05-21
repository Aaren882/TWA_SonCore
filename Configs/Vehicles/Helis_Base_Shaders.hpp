//External
// -Alarm
class HeliFX_Alarm_Damage_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
			1
		}
	};
	frequency=1;
	volume="engineOn*(CustomSoundController14+1)*camPos*( 1 - ((transmissionDamage factor [0.61, 0.60])*(motorDamage factor [0.61, 0.60])*(rotorDamage factor [0.51, 0.50])))*(rotorSpeed factor [0, 0.001])";
	range=20;
};
class HeliFX_Alarm_RotorLow_Ext_Base_SoundShader: HeliFX_Alarm_Damage_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
			1
		}
	};
	frequency=1;
	volume="engineOn*(CustomSoundController14+1)*camPos*(rotorSpeed factor [0.9, 0.8999])*(rotorSpeed factor [-0.5, 1])*(speed factor [3, 3.01])";
};

// -Scrub Sound
class HeliFX_ScrubTree_Ext_Base_SoundShader: HeliFX_Alarm_Damage_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController14+1)*camPos*((scrubTree) factor [0, 0.01])";
};

// -Damage
class HeliFX_TransmissionDamage_Ext_phase1_Base_SoundShader
{
	samples[]=
	{
		
		{
			"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_ext_1",
			1
		}
	};
	frequency="0.66 + rotorspeed / 3";
	volume="(CustomSoundController14+1)*((transmissiondamage factor [0.3, 0.35])*(transmissiondamage factor [0.5, 0.45])*(rotorspeed factor [0.2, 0.5])";
	range=100;
};
class HeliFX_TransmissionDamage_Ext_phase2_Base_SoundShader: HeliFX_TransmissionDamage_Ext_phase1_Base_SoundShader
{
	samples[]=
	{
		
		{
			"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_ext_2",
			1
		}
	};
	volume="(CustomSoundController14+1)*(transmissiondamage factor [0.45, 0.5])*(rotorspeed factor [0.2, 0.5])";
};

//-SlingLoad
class HeliFX_SlingLoadDown_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController14+1)*camPos*(slingLoadActive factor [0,-1])";
	range=500;
};
class HeliFX_SlingLoadUp_Ext_Base_SoundShader: HeliFX_SlingLoadDown_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController14+1)*camPos*(slingLoadActive factor [0,1])";
};
//-Noise
class HeliFX_Rain_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\noises\rain1_ext",
			1
		}
	};
	range=100;
	frequency=1;
	volume="(CustomSoundController14+1)*camPos*(rain - rotorSpeed/2)*2";
	rangecurve[]=
	{
		{0,1},
		{50,0.3},
		{100,0}
	};
};
class HeliFX_Wind_Close_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Share\Wind_Ext",
			1
		}
	};
	frequency="rotorSpeed";
	volume="(CustomSoundController14+1)*camPos*(0 max (rotorSpeed-0.1)*6)";
	range=20;
	rangecurve[]=
	{
		{0,1},
		{20,0}
	};
};
class HeliFX_Rotor_Stress_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Share\BladeSlap_ext",
			1
		}
	};
	range=1200;
	frequency="rotorSpeed";
	volume="(CustomSoundController14+1)*engineOn*camPos*((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
	rangecurve[]=
	{
		{0,1},
		{1200,0}
	};
};
class HeliFX_RotorNoise_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\rotor_swist",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController14+1)*camPos*(rotorThrust factor [0.7, 0.9])";
	range=200;
	rangecurve[]=
	{
		{0,1},
		{150,0.3},
		{200,0}
	};
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Internal
// -Alarm
class HeliFX_Alarm_Damage_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
			1
		}
	};
	frequency=1;
	volume="engineOn*(CustomSoundController16+1)*(1-camPos)*( 1 - ((transmissionDamage factor [0.61, 0.60])*(motorDamage factor [0.61, 0.60])*(rotorDamage factor [0.51, 0.50])))*(rotorSpeed factor [0.0, 0.001])";
};
class HeliFX_Alarm_RotorLow_Int_Base_SoundShader: HeliFX_Alarm_Damage_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
			1
		}
	};
	volume="engineOn*(CustomSoundController16+1)*(1-camPos)*(rotorSpeed factor [0.9, 0.8999])*(rotorSpeed factor [-0.5, 1])*(speed factor [3, 3.01])";
};

// -Scrub Sound
class HeliFX_ScrubLand_Int_Base_SoundShader: HeliFX_Alarm_Damage_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\wheelsInt",
			1
		}
	};
	volume="2*(CustomSoundController16+1)*(1-camPos)*(scrubLand factor[0.02, 0.05])*(1 - (lateralMovement factor [0.7,1]))";
};
class HeliFX_ScrubBuilding_Int_Base_SoundShader: HeliFX_ScrubLand_Int_Base_SoundShader
{
	volume="(CustomSoundController16+1)*(1-camPos)*(scrubBuilding factor[0.02, 0.05])*(1 - (lateralMovement factor [0.7,1]))";
};
class HeliFX_ScrubTree_Int_Base_SoundShader: HeliFX_ScrubLand_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\wheelsInt",
			1
		}
	};
	volume="(CustomSoundController16+1)*(1-camPos)*((scrubTree) factor [0, 0.01])";
};

// -Damage
class HeliFX_TransmissionDamage_Int_phase1_Base_SoundShader
{
	samples[]=
	{
		
		{
			"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_int_1",
			1
		}
	};
	frequency="0.66 + rotorspeed / 3";
	volume="(CustomSoundController16+1)*(1-camPos)*(transmissiondamage factor [0.3, 0.35])*(transmissiondamage factor [0.5, 0.45])*(rotorspeed factor [0.2, 0.5])";
	range=100;
};
class HeliFX_TransmissionDamage_Int_phase2_Base_SoundShader
{
	samples[]=
	{
		
		{
			"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_int_2",
			1
		}
	};
	frequency="0.66 + rotorspeed / 3";
	volume="(CustomSoundController16+1)*(1-camPos)*(transmissiondamage factor [0.45, 0.5])*(rotorspeed factor [0.2, 0.5])";
	range=100;
};

//-SlingLoad
class HeliFX_SlingLoadDown_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController16+1)*(1-camPos)*(slingLoadActive factor [0,-1])";
	range=500;
};
class HeliFX_SlingLoadUp_Int_Base_SoundShader: HeliFX_SlingLoadDown_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
			1
		}
	};
	frequency=1;
	volume="(CustomSoundController16+1)*(1-camPos)*(slingLoadActive factor [0,1])";
};

//-Noise
class HeliFX_Rain_Int_Base_SoundShader: HeliFX_Rain_Ext_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\noises\rain1_int",
			1
		}
	};
	volume="(CustomSoundController16+1)*(1-camPos)*(rain - rotorSpeed/2)*2";
};
class HeliFX_Wind_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\air\noises\wind_closed",
			1
		}
	};
	range=50;
	frequency=1;
	volume="(CustomSoundController16+1)*(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
};
class HeliFX_GStress_Int_Base_SoundShader: HeliFX_Wind_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Share\BladeSlap",
			1
		}
	};
	volume="engineOn*(CustomSoundController16+1)*(1-camPos)*((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
};
class HeliFX_GStress_TR_Int_Base_SoundShader: HeliFX_GStress_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Share\BladeSlap_TR",
			1
		}
	};
};
class HeliFX_GStress_AH_Int_Base_SoundShader: HeliFX_GStress_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"MG8\TWA_SonCore\Snd\Engine\Heli\Share\BladeSlap_AH",
			1
		}
	};
};
class HeliFX_SpeedStress_Int_Base_SoundShader: HeliFX_Wind_Int_Base_SoundShader
{
	samples[]=
	{
		
		{
			"A3\Sounds_F\vehicles\noises\vehicle_stress3",
			1
		}
	};
	volume="(CustomSoundController16+1)*(1-camPos)*(speed factor[40,80])";
};