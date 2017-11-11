
#include "stdafx.h"
#include <iostream>

using namespace std;

int Zadanie_8()
{
	int liczba;
	long float suma = 0;

	cout << endl;
	cout << " Tutaj bede dodawal 5 liczb, ale tylko parzyste. Jednak mozesz tez wpisywac nieparzyste. " << endl;

	
		for (int i = 1; i < 6; i++)
		{
			cout << " Podaj " << i << " liczbe ";
			cin >> liczba;
			
			
				if ((liczba % 2) == 0)
					suma += liczba;
			
		}
	

		cout << " Suma liczb parzystych wynosi: "
			<< suma << endl << endl;
	//system("pause");


	return 0;
}