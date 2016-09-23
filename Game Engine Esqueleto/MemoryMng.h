#pragma once
#include <iostream>
#include <mutex>

class MemoryMng
{
public:
	static MemoryMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	MemoryMng();
};