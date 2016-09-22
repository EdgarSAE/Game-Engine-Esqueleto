#include "PhysicsDynamicsMng.h"

PhysicsDynamicsMng& PhysicsDynamicsMng::instance()
{
	static PhysicsDynamicsMng *instance = new PhysicsDynamicsMng();
	return *instance;
}

PhysicsDynamicsMng::PhysicsDynamicsMng()
{}

void PhysicsDynamicsMng::Start()
{
	std::cout << "Start Physics Dynamics Manager\n";
}

void PhysicsDynamicsMng::Run()
{
	std::cout << "Running Physics Dynamics Manager\n";
}

void PhysicsDynamicsMng::Shutdown()
{
	std::cout << "Shutting down Physics Dynamics Manager\n";
}