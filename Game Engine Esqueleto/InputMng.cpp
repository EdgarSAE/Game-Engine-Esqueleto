#include "InputMng.h"
#include <iostream>
#include <thread>
InputMng& InputMng::instance()
{
	static InputMng *instance = new InputMng();
	return *instance;
}

InputMng::InputMng()
{
}

void InputMng::Start()
{
	std::cout << "Start Input Manager\n";
	Listener();
	start = true;
	std::thread thread(&InputMng::Run, this);
	thread.detach();
	
	
}

void InputMng::Run()
{
	GamePad gamepad;

	bool wasConnected = true;

	while (start)
	{
		Sleep(10);

		if (!gamepad.Refresh())
		{
			if (wasConnected)
			{
				wasConnected = false;

				cout << "Please connect an Xbox 360 controller." << endl;
			}
		}
		else
		{
			if (!wasConnected)
			{
				wasConnected = true;

				cout << "Controller connected on port " << gamepad.GetPort() << endl;
			}

			cout << "Left thumb stick: (" << gamepad.leftStickX << ", " << gamepad.leftStickY << ")   Right thumb stick : (" << gamepad.rightStickX << ", " << gamepad.rightStickY << ")" << endl;

			cout << "Left analog trigger: " << gamepad.leftTrigger << "   Right analog trigger: " << gamepad.rightTrigger << endl;

			if (gamepad.IsPressed(XINPUT_GAMEPAD_A))
			{
				Events(1);
				Tail.push(1);

				cout << "(A) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_B))
			{
				Events(2);
				Tail.push(2);

				cout << "(B) button pressed" << endl;
			}

			while (!Tail.empty())
			{
				temp = Tail.front();
				Tail.pop();
				for (list<EventList>::iterator it = List.begin(); it != List.end(); ++it)
				{
					if (temp.type == it->type)
					{
						cout << temp.type << ", " << it->type << endl;

						if (it->Callback())
						{
							break;
						}
					}
				}
			}//Dispatcher
		}//Xinput
	}
}

void InputMng::Shutdown()
{
	cout << "Shutting down Input Manager\n";
}

void InputMng::Listener()
{
	List.push_front(3);
	List.push_front(2);
	List.push_front(1);
}