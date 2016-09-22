#pragma once
#include <iostream>

class EventList
{
public:
	int type;
	EventList(int Itype);

	bool Callback();
};

