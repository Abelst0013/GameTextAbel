#include "Modifications.h"

Modifications::Modifications()
{
	m_pintura = 0;
	m_b = 0;
	m_c = 0;
}

Modifications::~Modifications()
{

}

void Modifications::ModificationsMenu()
{
	Automobile automobile;
	cout << " << MODIFICATIONS >> " << endl;
	cout << "<< Available: " << endl;
	cout << "1. WHEELS" << endl;
	cout << "2. TURBO" << endl;
	cout << "3. NITRO" << endl;
	cout << "4. BRAKES" << endl;
	cout << "5. " << endl;
	cout << "6. " << endl;
	cout << "7. " << endl;
	cout << "8. " << endl;
	cout << "9. " << endl;
	cout << "10. " << endl;
	cout << "0. QUIT" << endl << endl;
	cout << ">> Choice: " << endl;

	cin >> m_pintura;

	switch (m_pintura)
	{
	case 0:
		break;
	case 1:
		cout << " >> WHEELS << " << endl;
		automobile.VictoryPoints += 1;
		automobile.printStats();
		break;
	case 2:
		cout << " >> TURBO << " << endl;
		automobile.VictoryPoints += 2;
		automobile.printStats();
		break;
	case 3:
		cout << " >> NITRO << " << endl;
		automobile.VictoryPoints += 3;
		automobile.printStats();
		break;
	case 4:
		cout << " >> BRAKES << " << endl;
		automobile.VictoryPoints += 4;
		automobile.printStats();
		break;
	case 5:
		cout << " >> 5 << " << endl;
		break;
	case 6:
		cout << " >> 6 << " << endl;
		break;
	case 7:
		cout << " >> 7 << " << endl;
		break;
	case 8:
		cout << " >> 8 << " << endl;
		break;
	case 9:
		cout << " >> 9 << " << endl;
		break;
	case 10:
		cout << " >> 10 << " << endl;
		break;

	default:
		break;
	}
}
