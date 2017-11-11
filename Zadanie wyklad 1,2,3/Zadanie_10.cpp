

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;


void Funkcja( int t1[])
{
	long f = 0;
	
	for (int i = 0; i < 10; i++)
	{
		f = (1 / 4) * sqrt(t1[i] + 2) - exp(3 * t1[i] + M_PI_2);

		cout << " Dla x = " << t1[i] << " Wynik = ";
		cout << f << endl;
		//cout << t1[i] << endl;
	}
}







void Zadanie_10()
{
	int t1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << endl;

	Funkcja(t1);

	cout << endl;
	//system("pause");
}