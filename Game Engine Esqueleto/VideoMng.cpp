#include "VideoMng.h"

VideoMng& VideoMng::instance()
{
	static VideoMng *instance = new VideoMng();
	return *instance;
}

VideoMng::VideoMng()
{}

void VideoMng::Start()
{
	std::cout << "Start Video Manager\n";
}

void VideoMng::Run()
{
	std::cout << "Running Video Manager\n";
}

void VideoMng::Shutdown()
{
	std::cout << "Shutting down Video Manager\n";
}