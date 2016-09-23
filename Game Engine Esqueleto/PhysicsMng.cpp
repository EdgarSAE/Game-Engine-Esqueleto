#include "PhysicsMng.h"

PhysicsMng& PhysicsMng::instance()
{
	static PhysicsMng *instance = new PhysicsMng();
	return *instance;
}

PhysicsMng::PhysicsMng()
{}

void PhysicsMng::Start()
{
	std::cout << "Start Physics Manager\n";
}

void PhysicsMng::Run()
{
	//std::cout << "Running Physics Manager\n";
	std::call_once(flag1, []() { std::cout << "Running Physics Manager\n"; });
}

void PhysicsMng::Shutdown()
{
	std::cout << "Shutting down Physics Manager\n";
}