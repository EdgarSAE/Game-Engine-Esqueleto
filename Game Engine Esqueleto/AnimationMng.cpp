#include "AnimationMng.h"

AnimationMng& AnimationMng::instance()
{
	static AnimationMng *instance = new AnimationMng();
	return *instance;
}

AnimationMng::AnimationMng()
{}

void AnimationMng::Start()
{
	std::cout << "Start Animation Manager\n";
}

void AnimationMng::Run()
{
	//std::cout << "Running Animation Manager\n";
	std::call_once(flag1, []() { std::cout << "Running Animation Manager\n"; });
}

void AnimationMng::Shutdown()
{
	std::cout << "Shutting down Animation Manager\n";
}