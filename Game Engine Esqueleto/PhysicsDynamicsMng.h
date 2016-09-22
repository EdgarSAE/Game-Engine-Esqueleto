#pragma once
#include <iostream>

class PhysicsDynamicsMng
{
public:
	static PhysicsDynamicsMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	PhysicsDynamicsMng();
};