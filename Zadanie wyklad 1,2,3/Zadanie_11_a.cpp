
#include"stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
















int Zadanie_11_a()
{
	double a = 0, y = 0;

	long double wynik = 0;

	cout << " Witaj w zadaniu 11. a. " << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> a;

	cout << " Podaj druga liczbe: ";
	cin >> y;

	double suma = 0, potega = 0;
	double iloczyn = 1;
	for (int i = 1; i <= 10; i++)
	{
		double sinx = 0;
		sinx = (1 / 3) * sin(a);
		//cout << (1 / 3) * sin(a) << endl;
		//cout << sin(x) << endl;
		//cout << sinx << endl;
		suma += sinx;
		//cout << " >>> suma = " << suma << endl;
	}
	for (int i = 3; i >= -2; i--)
	{
		double operacja = 0;
		operacja = sqrt(a + 2 * y);
		iloczyn *= operacja;
		//cout << iloczyn << endl;
	}

	potega = exp(3 * a + M_PI_2);

	wynik = suma + iloczyn - potega;

	//cout << " >>>>>>> iloczyn = " << iloczyn << endl;
	//cout << " >>>>> suma = " << suma << endl;
	cout << wynik << endl;
	



	//system("pause");
	return 0;

}