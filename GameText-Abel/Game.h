#pragma once
#include "Automobile.h"
#include "Modifications.h"

using namespace std;

class Game
{
public:
	Game();
	virtual	~Game();

	void mainMenu();

	inline bool getPlaying() const { return this->playing; }

private:
	int choice;
	bool playing;
};

