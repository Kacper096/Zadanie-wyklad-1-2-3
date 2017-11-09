
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


void Zadanie_5_b()
{
	float a = 1,
		b = (-2),
		c = (-15);

	float d, x1, x2, x0;
	cout << " Witam tutaj bede obliczal drugi trojmian z zadania domowego nr.5.b" << endl;

	d = pow(b, 2) - 4 * a*c;

	if (d > 0)
	{
		x1 = ((-b) - sqrt(d)) / (2 * a);
		x2 = ((-b) + sqrt(d)) / (2 * a);
		cout << " Wyniki tego trojmianu sa nastepujace: " << endl
			<< " X1 = " << x1 << endl
			<< " X2 = " << x2 << endl;
	}


	else cout << " Zalozenie bylo ze Delta ma byc wieksza od 0 ;) " << endl << endl;



}
