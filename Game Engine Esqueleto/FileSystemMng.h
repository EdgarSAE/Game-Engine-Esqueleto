#pragma once
#include <iostream>

class FileSystemMng
{
public:
	static FileSystemMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	FileSystemMng();
};