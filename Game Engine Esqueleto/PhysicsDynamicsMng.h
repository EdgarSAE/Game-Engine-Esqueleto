#pragma once
#include <iostream>
#include <mutex>

class PhysicsDynamicsMng
{
public:
	static PhysicsDynamicsMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	PhysicsDynamicsMng();
};