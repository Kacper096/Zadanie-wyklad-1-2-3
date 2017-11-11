
#include"stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;



double Suma(int t[], double x)
{
	double suma = 0;
	for (int i = 0; i < 10; i++)
	{
		double sinx = 0;
		sinx = (1 / 3) * sin(x);

		suma += sinx;

	}
	return suma;
}
double Iloczyn(int t[], double x, double y )
{
	double iloczyn = 1;
	for (int i = 0; i < 6; i++)
	{
		double operacja = 0;
		operacja = sqrt(x + 2 * y);
		iloczyn *= operacja;
		
	}
	return iloczyn;
}
double Potega(double x)
{
	double potega = 0;
	potega = exp(3 * x + M_PI_2);

	return potega;
}
double Wynik(double a, double b, double c)
{

	return a + b - c;
}





int Zadanie_11_a()
{
	double x = 0, y = 0;

	int tablica[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int tablica2[6] = { 3,2,1,0,-1,-2 };

	cout << " Witaj w zadaniu 11. a. " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << " Podaj druga liczbe: ";
	cin >> y;

	cout << " Wynik tego rownania rowna sie "
		<< Wynik(Suma(tablica, x), Iloczyn(tablica2, x, y), Potega(x)) << endl << endl;

	//system("pause");
	return 0;

}