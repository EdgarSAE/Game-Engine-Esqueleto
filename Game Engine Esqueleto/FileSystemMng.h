#pragma once
#include <iostream>
#include <mutex>

class FileSystemMng
{
public:
	static FileSystemMng& instance();

	void Start();
	void Run();
	void Shutdown();

	std::once_flag flag1;

private:
	FileSystemMng();
};