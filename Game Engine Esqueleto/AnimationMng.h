#pragma once
#include <iostream>
#include <mutex>

class AnimationMng
{
public:
	static AnimationMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	AnimationMng();
};