
#include "stdafx.h"
#include <iostream>

using namespace std;

void Zadanie_8()
{
	int liczba;
	long float suma = 0;

	cout << endl;
	cout << " Tutaj bede dodawal 5 liczb, ale tylko parzyste. Jednak mozesz tez wpisywac nieparzyste. " << endl;

	
		for (int i = 1, k = 0; k < 5; i++)
		{
			cout << " Podaj " << i << " liczbe ";
			cin >> liczba;
			
			
			if ((liczba % 2) == 0)
			{
				suma += liczba;
				k++;
			}
			
			
		}
	

		cout << " Suma liczb parzystych wynosi: "
			<< suma << endl << endl;
	//system("pause");


	//return 0;
}