#pragma once
#include <iostream>

class VideoMng
{
public:
	static VideoMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	VideoMng();
};