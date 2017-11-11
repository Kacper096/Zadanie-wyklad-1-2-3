
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include<iostream>
#include <cmath>
using namespace std;

void Zadanie_5_c()
{
	float a = 1,
		b = 4,
		c = 4;
	float d, x0;

	cout << endl;
	cout << " Witaj tutaj bede obliczal trzeci trojmian z zadania domowego nr.5.c" << endl;

	d = pow(b, 2) - 4 * a*c;

	if (d == 0)
	{
		x0 = ((-b) / (2 * a));
		cout << " Wynik tego trojmianu jest tylko jeden " << endl
			<< " X0 = " << x0 << endl << endl;

	}

}

