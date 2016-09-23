#include "InputMng.h"


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
	AddListener();
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

			//cout << "Left thumb stick: (" << gamepad.leftStickX << ", " << gamepad.leftStickY << ")   Right thumb stick : (" << gamepad.rightStickX << ", " << gamepad.rightStickY << ")" << endl;

			//cout << "Left analog trigger: " << gamepad.leftTrigger << "   Right analog trigger: " << gamepad.rightTrigger << endl;

			if (gamepad.IsPressed(XINPUT_GAMEPAD_A))
			{
				Events(1);
				myQueue.push(1);

				cout << "(A) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_B))
			{
				Events(2);
				myQueue.push(2);

				cout << "(B) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_X))
			{
				Events(3);
				myQueue.push(3);

				cout << "(X) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_Y))
			{
				Events(4);
				myQueue.push(4);

				cout << "(Y) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_START))
			{
				Events(5);
				myQueue.push(5);

				cout << "(START) button pressed Shutting down system" << endl;
				exit_ = true;
			}

			while (!myQueue.empty())
			{
				temp = myQueue.front();
				myQueue.pop();
				for (list<EventList>::iterator it = myList.begin(); it != myList.end(); ++it)
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

void InputMng::AddListener()
{
	myList.push_front(5);
	myList.push_front(4);
	myList.push_front(3);
	myList.push_front(2);
	myList.push_front(1);
}