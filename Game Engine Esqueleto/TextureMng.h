#pragma once
#include <iostream>
#include <mutex>

class TextureMng
{
public:
	static TextureMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	TextureMng();
};