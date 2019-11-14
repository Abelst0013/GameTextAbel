#pragma once

#include <string>

using namespace std;

class Automobile
{
public:
	Automobile();
	virtual ~Automobile();

	void levelUp();
	void ExpUp();

private:
	string name;
	int level;
	int exp;

};

