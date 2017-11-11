
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double dodawanie(int t[], double x )
{
	double suma = 0;
	for (int i = 0; i < 4; i++)
	{
		//cout << t[i] << endl;
		double ctg = 0;
			ctg = 1 / tan(t[i] * x);
			suma += ctg;
			
	}
	return suma;
}
double Iloczyn(int t[], double x)
{
	double iloczyn = 1;
	for (int i = 0; i < 8; i++)
	{
		double potega = 0;
		potega = exp(abs(sin(x)));
		iloczyn *= potega;
	}
	return iloczyn;
}
double wynik(double a, double b)
{
	double operacja = 0;
	operacja = a + b;
	
	return operacja;
}















int Zadanie_11_b()
{
	double x = 0, y = 0;
	
	cout << " Witaj w zadaniu nr.11.b. " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << " Podaj druga liczbe: ";
	cin >> y;

	int tablica1[4] = { -1,-2,-3,-4 };
	int tablica2[8] = { 10,9,8,7,6,5,4,3 };

	cout << wynik(dodawanie(tablica1, x), Iloczyn(tablica2, x)) << endl;
	
	system("pause");
	return 0;
}