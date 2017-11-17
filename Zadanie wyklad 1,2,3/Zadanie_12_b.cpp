
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

double Suma2(int t1[], int t2[], double x, double y)
{
	double suma = 0;
	for (int k = 0; k < 3; k++)
	{
		double iloczyn = 1;

		for (int j = 0; j < 5; j++)
		{
			long double loga = 0;

			loga = log2(x + t1[k] * t2[j]);

			iloczyn *= loga;
		}
		suma += iloczyn;

	}
	return suma;
}
double Logarytm(double x, double y)
{
	return log(3 * y);
}
double Pierwiastek(double x, double y)
{
	return powl((x + y * exp2l(exp2l(x + 2) + 10)), 1 / 3);
}
double Wynik2(double a, double b, double c)
{
	return a + b + c;
}

void Zadanie_12_b()
{
	
	double x = 0;
	double y = 0;

	int tablica1[3] = { -3,-4,-5 };			//t1
	int tablica2[5] = { 3,2,1,0,-1 };		//t2

	cout << endl;
	cout << " Witaj w zadaniu nr. 12.b. " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << endl;
	cout << " Podaj druga liczbe: ";
	cin >> y;

	cout << endl;
	cout << " Wynik rowna sie: ";
	cout << Wynik2(Suma2(tablica1, tablica2, x, y), Logarytm(x, y), Pierwiastek(x, y)) << endl << endl;

	//system("pause");
	//return 0;
}