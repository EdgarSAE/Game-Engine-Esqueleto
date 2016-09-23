#pragma once
#include "GamePad.h"
#include <queue>
#include <list>
#include <thread>
#include <iostream>
#include "Events.h"
#include "EventList.h"

class InputMng
{
public:
	static InputMng& instance();

	int eType = 1;
	bool start = false;

	void Start();
	void Run();
	void Shutdown();
	void Listener();

	Events tail[3];
	Events temp;

	queue<Events> myQueue;
	list<EventList> myList;

private:
	InputMng();
};

