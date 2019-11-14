#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <list>
#include <forward_list>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <array>
#include <regex>
#include <random>
#include <stdexcept>

#include "Game.h"
using namespace std;

int main()
{
	srand(time(NULL));

	Game game;

	while (game.getPlaying())
	{
		game.mainMenu();
	}
	return 0;
}