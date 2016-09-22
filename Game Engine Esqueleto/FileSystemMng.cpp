#include "FileSystemMng.h"

FileSystemMng& FileSystemMng::instance()
{
	static FileSystemMng *instance = new FileSystemMng();
	return *instance;
}

FileSystemMng::FileSystemMng()
{}

void FileSystemMng::Start()
{
	std::cout << "Start File System Manager\n";
}

void FileSystemMng::Run()
{
	std::cout << "Running File System Manager\n";
}

void FileSystemMng::Shutdown()
{
	std::cout << "Shutting down File System Manager\n";
}