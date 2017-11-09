
#include "stdafx.h"
#include <iostream>


using namespace std;



int Zadanie_7()
{
	int a = 0;
	long int rozmiar;
	long int suma = 0;

	cout << " Tutaj bede zliczal liczby nieparzyste do danej liczby ustalonej przez Ciebie. Liczby musza byc calkowite !. " << endl
		<< " Podaj liczbe: ";

	cin >> rozmiar;

	int *tablica1 = new int[rozmiar + 1];

	for (int i = 1; i <= rozmiar; i++, a++)
	{
		tablica1[a] = i;
		//cout << tablica1[a] << endl;
		suma += tablica1[a];
		//cout << suma << endl << endl;
	}


	cout << " Wynik tej sumy rowna sie ";
	cout << suma << endl;


	system("pause");

	return 0;
}