
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double Iloczyn1(int t[], double x, double y)
{
	double iloczyn1 = 1;
		for (int i = 0; i < 6; i++)
		{
			double operacja_1 = 0;
			operacja_1 = sqrt((x + y) / log(abs(t[i] + 10)));
			iloczyn1 *= operacja_1;
		}
	return iloczyn1;
}
double Iloczyn2(int t[], double x, double y)
{
	double iloczyn2 = 1;
	for (int i = 0; i < 6; i++)
	{
		double operacja = 0;
		operacja = sqrt((x / 2) + pow(y, x));
		iloczyn2 *= operacja;
	}
	return iloczyn2;
}
double Iloczyn3(int t[], double x, double y)
{
	double iloczyn3 = 1;
	for (int i = 0; i < 4; i++)
	{
		double operacja = 0;
		operacja = tan(t[i]);
		iloczyn3 *= operacja;
	}
	return iloczyn3;
}
double wynik(double a, double b, double c)
{
	double operacja = 0;
	operacja = a + b + c;


	return operacja;
}






int Zadanie_11_c()
{
	double x = 0, y = 0;

	int Tablica1[6] = { 3,2,1,0,-1,-2 };
	int Tablica2[6] = { 1,0,-1,-2,-3,-4 };
	int Tablica3[4] = { -1,-2,-3,-4 };

	cout << " Witaj w zadaniu nr.11.c." << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << " Podaj druga liczbe: ";
	cin >> y;

	

	cout << " Wynik tego rownania rowna sie "
		<< wynik(Iloczyn1(Tablica1, x, y), Iloczyn2(Tablica2, x, y), Iloczyn3(Tablica3, x, y)) << endl << endl;

	system("pause");
	return 0;
}