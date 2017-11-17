
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double Suma(int t1[], int t2[], double x, double y)
{
	long double wynik = 1;
	for (int i = 0; i < 6; i++)
	{
		long double suma = 0;

		for (int j = 0; j < 5; j++)
		{
			long double a = 0;

			a = (tan(powf(2 * x, t1[i] + t2[j]) + t2[j] * y) + ((log(abs(pow(2, t2[j])*x + 1)) / (2 * y + 10 * t1[i])) - pow(x * y * pow(t2[j], t1[i]), 1 / 3)));

			suma += a;
		}

		wynik *= suma;
	}
	return wynik;
}


void Zadanie_12_a()
{
	double x = 0, y = 0;

	long double wynik = 1;
	int tablica[5] = { 1,2,3,4,5 };				//t2
	int tablica2[6] = { -2,-1,0,1,2,3 };		//t1

	cout << endl;
	cout << " Witaj w zadaniu 12.a. " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << endl;
	cout << " Podaj druga liczbe: ";
	cin >> y;

	cout << endl;
	cout << " Wynik to = ";
	cout << Suma(tablica2, tablica, x, y) << endl << endl;

	//system("pause");
	//return 0;
}