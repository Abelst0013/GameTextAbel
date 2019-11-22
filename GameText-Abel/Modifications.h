#pragma once

#include "Automobile.h"

class Modifications
{
public:
	Modifications();
	virtual ~Modifications();

	void ModificationsMenu();

private:
	int m_pintura;
	int m_b;
	int m_c;
};
