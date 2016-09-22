#pragma once
#include <iostream>

class MemoryMng
{
public:
	static MemoryMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	MemoryMng();
};