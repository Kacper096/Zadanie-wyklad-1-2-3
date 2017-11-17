
#include "stdafx.h"
#include <iostream>


using namespace std;



void Zadanie_7()
{
	int a = 0;
	long int rozmiar;
	long int suma = 0;

	cout << endl;
	cout << " Tutaj bede zliczal liczby nieparzyste do danej liczby ustalonej przez Ciebie. Liczby musza byc calkowite !. " << endl
		<< " Podaj liczbe: ";

	cin >> rozmiar;

	int *tablica1 = new int[rozmiar + 1];

	for (int i = 1; i <= rozmiar; i++, a++)
	{
		tablica1[a] = i;
		if (i % 2 == 1)
		{
			suma += tablica1[a];
		}
		
	}

	delete [] tablica1;

	cout << " Wynik tej sumy rowna sie ";
	cout << suma << endl << endl;


	//system("pause");

	//return 0;
}