#include "MemoryMng.h"

MemoryMng& MemoryMng:: instance()
{
	static MemoryMng *instance = new MemoryMng();
	return *instance;
}

MemoryMng::MemoryMng()
{}

void MemoryMng::Start()
{
	std::cout << "Start Memory Manager\n";
}

void MemoryMng::Run()
{
	//std::cout << "Running Memory Manager\n";
	std::call_once(flag1, []() { std::cout << "Running Memory Manager\n"; });
}

void MemoryMng::Shutdown()
{
	std::cout << "Shutting down Memory Manager\n";
}