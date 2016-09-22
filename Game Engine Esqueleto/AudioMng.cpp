#include "AudioMng.h"

AudioMng& AudioMng::instance()
{
	static AudioMng *instance = new AudioMng();
	return *instance;
}

AudioMng::AudioMng()
{}

void AudioMng::Start()
{
	std::cout << "Start Audio Manager\n";
}

void AudioMng::Run()
{
	std::cout << "Running Audio Manager\n";
}

void AudioMng::Shutdown()
{
	std::cout << "Shutting down Audio Manager\n";
}