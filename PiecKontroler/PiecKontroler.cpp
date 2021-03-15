#include <iostream>
#include <Windows.h>
#include "funkcje.h"
using namespace std;
int main()
{
	int odp1;
	bool tak1 = true;
	// PiecKontroler 0.1
	system("title PiecKontroler 0.1 ");
	cout << "Przygotuj w odpowiedni sposob okno konsoli aby nie zaslaniala przyciskow programu" << endl;
	cout << "" << endl;
	cout << "Uwazaj na komunikaty od strony programu! Program informuje kiedy pracuje, a kiedy nie." << endl;
	cout << "" << endl;
	cout << "UWAGA BUG ,JEZELI PROGRAM KLIKNIE LUB KTOS W KONSOLE PROGRAM SIE ZAWIESZA!" << endl;
	cout << "" << endl;
	cout << "Kolor czerwony = pracuje | Kolor zielony = nie pracuje"<<endl ;
	cout << "-------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Wybierz profil: " << endl;
	cout << "1 = Zmiana temperatury co 10 min" << endl;
	cout << "2 = Zmiana temperatury co 15 min" << endl;
	cout << "3 = Zmiana temperatury co 20 min" << endl;
	cout << "4 = Zmiana temperatury co 30 min " << endl;
	cout << "5 = Test" << endl;
	cout << "---------------------------------------------------------------------------------------------------------------" << endl;
	cin >> odp1;
	if (odp1 == 1)
	{ 
		time10();
	}

	if (odp1 == 2)
	{
		time15();
	}

	if (odp1 == 3)
	{
		time20();
	}

	if (odp1 == 4)
	{
		time30();
	}

	if (odp1 == 5)
	{
		test();
	}
	return 0;
}
