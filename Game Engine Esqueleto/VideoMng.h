#pragma once
#include <iostream>
#include <mutex>

class VideoMng
{
public:
	static VideoMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	VideoMng();
};