#pragma once
#include <iostream>
#include <mutex>

class RenderMng
{
public:
	static RenderMng& instance();

	void Start();
	void Run();
	void Shutdown();
	void updateCamera();
	void updateSceneElements();
	void renderScene();
	void swapBuffers();

	std::once_flag flag1;

private:
	RenderMng();
};

