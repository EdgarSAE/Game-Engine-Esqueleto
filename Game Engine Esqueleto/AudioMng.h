#pragma once
#include <iostream>

class AudioMng
{
public:
	static AudioMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	AudioMng();
};