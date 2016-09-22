#include "Game.h"

Game& Game::instance()
{
	static Game *instance = new Game();
	return *instance;
}

Game::Game()
{
}

void Game::initGame()
{
	inGame = true;
	std::cout << "corre initGame()\n";
}

void Game::updateGame()
{
	std::cout << "corre updateGame()\n";
}

void Game::shutdown()
{
	inGame = false;
	std::cout << "corre shutdown()\n";
}