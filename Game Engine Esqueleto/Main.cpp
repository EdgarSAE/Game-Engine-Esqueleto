#pragma once
#include "AnimationMng.h"
#include "AudioMng.h"
#include "FileSystemMng.h"
#include "InputMng.h"
#include "MemoryMng.h"
#include "PhysicsDynamicsMng.h"
#include "PhysicsMng.h"
#include "RenderMng.h"
#include "TextureMng.h"
#include "VideoMng.h"
#include <string>
#include <iostream>

int main()
{
	bool exit = false;
	std::string end;

	AnimationMng& myAnimation = AnimationMng::instance();
	AudioMng& myAudio = AudioMng::instance();
	FileSystemMng& myFileSystem = FileSystemMng::instance();
	InputMng& myInput = InputMng::instance();
	MemoryMng& myMemory = MemoryMng::instance();
	PhysicsDynamicsMng& myPhysicsDynamics = PhysicsDynamicsMng::instance();
	PhysicsMng& myPhysics = PhysicsMng::instance();
	RenderMng& myRender = RenderMng::instance();
	TextureMng& myTexture = TextureMng::instance();
	VideoMng& myVideo = VideoMng::instance();

	myMemory.Start();
	myRender.Start();
	myInput.Start();
	myFileSystem.Start();
	myPhysicsDynamics.Start();
	myPhysics.Start();
	myVideo.Start();
	myTexture.Start();
	myAudio.Start();
	myAnimation.Start();


	while (!exit)
	{
		//std::cin >> end;
		if (end == "end")
		{
			exit = true;
		}

		else
		{
			myMemory.Run();
			myRender.Run();
			//myInput.Run();
			myFileSystem.Run();
			myPhysicsDynamics.Run();
			myPhysics.Run();
			myVideo.Run();
			myTexture.Run();
			myAudio.Run();
			myAnimation.Run();
		}
	}

	myAnimation.Shutdown();
	myAudio.Shutdown();
	myTexture.Shutdown();
	myVideo.Shutdown();
	myPhysics.Shutdown();
	myPhysicsDynamics.Shutdown();
	myFileSystem.Shutdown();
	myInput.Shutdown();
	myRender.Shutdown();
	myMemory.Shutdown();

	return 0;
}