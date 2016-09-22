#include "TextureMng.h"

TextureMng& TextureMng::instance()
{
	static TextureMng *instance = new TextureMng();
	return *instance;
}

TextureMng::TextureMng()
{}

void TextureMng::Start()
{
	std::cout << "Start Texture Manager\n";
}

void TextureMng::Run()
{
	std::cout << "Running Texture Manager\n";
}

void TextureMng::Shutdown()
{
	std::cout << "Shutting down Texture Manager\n";
}