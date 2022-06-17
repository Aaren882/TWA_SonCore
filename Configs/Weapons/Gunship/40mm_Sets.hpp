class 130_40mm_Shot_Int_SoundSet: 130_25mm_Shot25_Int_SoundSet
{
	soundshaders[]=
	{
		"40mm_Autocannon_0m_SoundShader"
	};
	volumeFactor=1;
};
class 130_40mm_Shot_SoundSet: 130_25mm_Shot25_SoundSet
{
	soundShaders[]=
	{
		"40mm_Autocannon_150m_SoundShader",
		"40mm_Autocannon_550m_SoundShader",
		"40mm_Autocannon_2000m_SoundShader",
		"40mm_Autocannon_3000m_SoundShader"
	};
	volumeFactor=1;
};
class 40mm_Autocannon_Tail_SoundSet: 130_25mm_Tail_SoundSet
{
	soundShaders[]=
	{
		"40mm_Autocannon_Tail_SoundShader"
	};
};