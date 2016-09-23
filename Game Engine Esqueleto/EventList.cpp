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
		return false;
		break;
	case 2:
		std::cout << "soy 2\n";
		return false;
		break;
	case 3:
		std::cout << "soy 3\n";
		return false;
		break;
	case 4:
		std::cout << "soy 4\n";
		return false;
		break;
	case 5:
		std::cout << "soy 5\n" << "Shutting down system\n";
		return true;
		break;
	}
}

bool EventList::Exit()
{
	exit_ = true;
	return exit;
}