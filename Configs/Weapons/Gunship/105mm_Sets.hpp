class 130_105mm_Shot_Int_SoundSet: 130_25mm_Shot25_Int_SoundSet
{
	soundshaders[]=
	{
		"105mm_Autocannon_0m_SoundShader"
	};
	volumefactor=2;
};
class 130_105mm_Shot_SoundSet: 130_25mm_Shot25_SoundSet
{
	soundShaders[]=
	{
		"105mm_Autocannon_150m_SoundShader",
		"105mm_Autocannon_550m_SoundShader",
		"105mm_Autocannon_2000m_SoundShader",
		"105mm_Autocannon_3000m_SoundShader"
	};
};
class 105mm_Autocannon_Tail_SoundSet: 130_25mm_Tail_SoundSet
{
	soundShaders[]=
	{
		"105mm_Autocannon_Tail_SoundShader"
	};
	volumeFactor=0.5;
};