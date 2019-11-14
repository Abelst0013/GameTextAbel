#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
}

Game::~Game()
{

}

void Game::mainMenu()
{
	cout << " << MENU >> " << endl << endl;
	cout << "1. START PLAY" << endl;
	cout << "2. MODIFICATIONS" << endl;
	cout << "3. SAVE" << endl;
	cout << "4. STATS" << endl;
	cout << "0. QUIT" << endl << endl;
	cout << ">> Choice: " << endl;

	cin >> choice;

	switch (choice)
	{
	case 0:
			playing = false;
			break;
		default:
			break;
	}
}