#pragma once
#include <iostream>

class PhysicsMng
{
public:
	static PhysicsMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	PhysicsMng();
};