#pragma once
#include <iostream>

class Game
{
public:
	static Game& instance();

	bool inGame = false;

	void initGame();
	void updateGame();
	void shutdown();

private:
	Game();
};

