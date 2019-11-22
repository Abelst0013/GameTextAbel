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
	Automobile automobile;
	Modifications modifications;
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
	case 1:
			playing = false;
			cout << "1" << endl;
			break;
	case 2:
			playing = false;
			cout << "2" << endl;
			modifications.ModificationsMenu();
			break;
	case 3:
			playing = false;
			cout << "3" << endl;
			break;
	case 4:
			playing = false;
			automobile.printStats();
			break;

		default:
			break;
	}
}