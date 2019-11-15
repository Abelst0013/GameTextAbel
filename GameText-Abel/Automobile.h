#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>

#include <string>

using namespace std;

class Automobile
{
public:
	Automobile();
	virtual ~Automobile();

	void levelUp();
	void ExpUp();
	void printStats();

private:
	string name;
	string brand;
	string Clase;
	int level;
	int exp;
	int HP;
	int Acceleration;
	int Control;
	int Tspeed;
	int Strength;
};

