#pragma once
#include <iostream>

class AnimationMng
{
public:
	static AnimationMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	AnimationMng();
};