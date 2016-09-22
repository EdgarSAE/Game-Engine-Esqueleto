#pragma once
#include <iostream>

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

private:
	RenderMng();
};

