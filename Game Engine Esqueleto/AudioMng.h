#pragma once
#include <iostream>
#include <mutex>

class AudioMng
{
public:
	static AudioMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	AudioMng();
};