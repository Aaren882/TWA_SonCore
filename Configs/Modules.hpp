class ModuleCAS_F;
//Eden
class TWA_CAS_Module: ModuleCAS_F
{
	author = "Aaren";
	displayName = "Aaren's CAS Module";
	function = "TWAF_fnc_CAS";
	category = "Ordnance";
	class Arguments
	{
		class Type
		{
			displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
			description = "";
			typeName = "NUMBER";
			class values
			{
				class Gun_Lo
				{
					name = "Gun Lo Burst";
					value = 0;
					default = 1;
				};
				class Gun_Hi
				{
					name = "Gun Hi Burst";
					value = 1;
				};
				class Rockets
				{
					name = "Rockets";
					value = 2;
				};
				class Ripple_Bomb
				{
					name = "Ripple Bomb Run";
					value = 3;
				};
			};
		};
		class Vehicle
		{
			displayName = "$STR_DN_Plane";
			description = "";
			class values
			{
				class B_Plane_CAS_01_F
				{
					name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
					value = "B_Plane_CAS_01_dynamicLoadout_F";
					default = 1;
				};
				class O_Plane_CAS_02_F
				{
					name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
					value = "O_Plane_CAS_02_F";
				};
				class I_Plane_Fighter_03_CAS_F
				{
					name = "$STR_A3_CfgVehicles_O_Plane_Fighter_03_CAS0";
					value = "I_Plane_Fighter_03_CAS_F";
				};
				class B_Plane_CAS_01_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_Cluster_F0";
					value = "B_Plane_CAS_01_Cluster_F";
				};
				class O_Plane_CAS_02_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_Cluster_F0";
					value = "O_Plane_CAS_02_Cluster_F";
				};
				class B_Plane_Fighter_01_F
				{
					name = "$STR_A3_Fighter_01_name";
					value = "B_Plane_Fighter_01_F";
				};
				class B_Plane_Fighter_01_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_B_Plane_Fighter_01_Cluster_F0";
					value = "B_Plane_Fighter_01_Cluster_F";
				};
				class O_Plane_Fighter_02_F
				{
					name = "$STR_A3_Fighter_02_name";
					value = "O_Plane_Fighter_02_F";
				};
				class O_Plane_Fighter_02_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_O_Plane_Fighter_02_Cluster_F0";
					value = "O_Plane_Fighter_02_Cluster_F";
				};
				class I_Plane_Fighter_03_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0";
					value = "I_Plane_Fighter_03_Cluster_F";
				};
				class I_Plane_Fighter_04_F
				{
					name = "$STR_A3_Fighter_04_name";
					value = "I_Plane_Fighter_04_F";
				};
				class I_Plane_Fighter_04_Cluster_F
				{
					name = "$STR_A3_CfgVehicles_I_Plane_Fighter_04_Cluster_F0";
					value = "I_Plane_Fighter_04_Cluster_F";
				};
			};
		};
	};
};
class ModuleCASGun_F;
class TWA_CAS_Module_Gun_Lo: ModuleCASGun_F
{
	scopeCurator = 2;
	category = "Aaren_Modules";
	
	function = "";
	_generalMacro = "TWA_CAS_Module_Gun";
	displayName = "Aaren's CAS Module (Gun Lo)";
	icon = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
	model = "\a3\Modules_F_Curator\CAS\surfaceGun.p3d";
	portrait = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
	curatorInfoType = "TWA_CAS_Module";
	curatorCost = 10;
	Zeus_CAStype = 0;
};
class TWA_CAS_Module_Gun_Hi: TWA_CAS_Module_Gun_Lo
{
	displayName = "Aaren's CAS Module (Gun Hi)";
	Zeus_CAStype = 1;
};
class TWA_CAS_Module_Rocket: TWA_CAS_Module_Gun_Lo
{
	displayName = "Aaren's CAS Module (Rocket)";
	portrait = "\a3\Modules_F_Curator\Data\portraitCASMissile_ca.paa";
	Zeus_CAStype = 2;
};
class TWA_CAS_Module_RipBomb: TWA_CAS_Module_Gun_Lo
{
	displayName = "Aaren's CAS Module (Ripple Bomb)";
	portrait = "\a3\Modules_F_Curator\Data\portraitCASBomb_ca.paa";
	model = "\a3\Modules_F_Curator\CAS\surfaceGun.p3d";
	Zeus_CAStype = 3;
};