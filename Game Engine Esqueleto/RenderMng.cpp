#include "RenderMng.h"

RenderMng& RenderMng::instance()
{
	static RenderMng *instance = new RenderMng();
	return *instance;
}

RenderMng::RenderMng()
{}

void RenderMng::Start()
{
	std::cout << "Start Render Manager\n";
}

void RenderMng::Run()
{
	updateCamera();
	updateSceneElements();
	renderScene();
	swapBuffers();
	std::call_once(flag1, []() { std::cout << "Running Render Manager\n"; });
}

void RenderMng::Shutdown()
{
	//std::cout << "Shutting down Render Manager\n";
}

void RenderMng::updateCamera()
{
	//std::cout << "corre updateCamera()\n";
}

void RenderMng::updateSceneElements()
{
	//std::cout << "corre updateSceneElements()\n";
}

void RenderMng::renderScene()
{
	//std::cout << "corre renderScene()\n";
}

void RenderMng::swapBuffers()
{
	//std::cout << "corre swapBuffers()\n";
}