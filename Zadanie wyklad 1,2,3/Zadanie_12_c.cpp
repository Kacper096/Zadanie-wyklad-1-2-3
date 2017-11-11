
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


double wynik(int t[], int t2[], int t3[], double x, double y)
{
	double Wynik = 0;
	for (int k = 0; k < 3; k++)
	{
		double iloczyn = 1;
		for (int j = 0; j < 5; j++)
		{
			double nawias = 0;
			double suma1 = 0;
			for (int i = 0; i < 10; i++)
			{
				double operacja = 0;
				operacja = ((t3[i]) / 3) * sin(x);
				suma1 += operacja;
			}

			nawias = log(k * j) - sqrt(M_PI) + suma1;
			iloczyn *= nawias;
		}
		Wynik += iloczyn;
	}

	return Wynik;
}

int Zadanie_12_c()
{
	double x = 0, y = 0;
	int Tablica[3] = { -3,-4,-5 };						//t
	int Tablica2[5] = { 3,2,1,0,-1 };					//t2
	int Tablica3[10] = { 1,2,3,4,5,6,7,8,9,10 };		//t3

	cout << endl;
	cout << " Witaj w zadaniu nr.12.c " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << endl;
	cout << " Podaj druga liczbe: ";
	cin >> y;

	cout << endl;
	cout << " Wynik tego rownania = "
		<< wynik(Tablica, Tablica2, Tablica3, x, y ) << endl;

	//system("pause");

	return 0;
}