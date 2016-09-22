#include "EventList.h"


EventList::EventList(int Itype)
{
	type = Itype;
}

bool EventList::Callback()
{
	switch (type)
	{
	case 1:
		std::cout << "soy 1\n";
		return true;
		break;
	case 2:
		std::cout << "soy 2\n";
		return false;
		break;
	case 3:
		std::cout << "soy 3\n";
		return true;
		break;
	}
}
