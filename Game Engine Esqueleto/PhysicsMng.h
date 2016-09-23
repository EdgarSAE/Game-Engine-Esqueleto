#pragma once
#include <iostream>
#include <mutex>

class PhysicsMng
{
public:
	static PhysicsMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	PhysicsMng();
};