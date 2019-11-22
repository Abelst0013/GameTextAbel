#include "Automobile.h"
using namespace std;


Automobile::Automobile()
{
	name = "Mike";
	brand = "Ferrari";
	Clase = "C";
	level = 1;
	exp = 0;
	HP = 6;
	Acceleration = 6;
	Control = 4;
	Tspeed = 5;
	Strength = 5;
	VictoryPoints = 0;
}


Automobile::~Automobile()
{

}

void Automobile::levelUp()
{

}

void Automobile::ExpUp()
{

}

void Automobile::printStats()
{
	cout << ">> STATS <<" << endl << endl;
	cout << ">> Name: " << name << endl;
	cout << ">> Brand: " << brand << endl;
	cout << "Class: " << Clase << endl;
	cout << "Level: " << level << "/3" << endl;
	cout << "Exp: " << exp << "/1000" << endl;
	cout << "HorsePower: " << HP << "/10" << endl;
	cout << "Acceleration: " << Acceleration << "/10" << endl;
	cout << "Control: " << Control << "/10" << endl;
	cout << "Top speed: " << Tspeed << "/10" << endl;
	cout << "Strength: " << Strength << "/10" << endl << endl;
	cout << "Points: " << VictoryPoints << endl;
	cout << endl << "0. Quit" << endl;
}