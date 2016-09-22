#pragma once
#include <iostream>

class TextureMng
{
public:
	static TextureMng& instance();

	void Start();
	void Run();
	void Shutdown();

private:
	TextureMng();
};