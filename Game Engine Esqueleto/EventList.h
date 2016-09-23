#pragma once
#include <iostream>

class EventList
{
public:
	int type;
	bool exit_ = false;
	EventList(int Itype);

	bool Callback();
	bool Exit();
};

