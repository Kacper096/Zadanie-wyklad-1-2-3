
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include<cmath>
#include <iostream>
using namespace std;


void Zadanie_5_a()
{
	int a = 2,
		b = 2,
		c = (-12);
	int d, x1, x2;

	cout << endl;
	cout << " Witaj tutaj bede obliczal pierwszy trojmiany kwadratowy z zadania domowego nr.5.a" << endl;

	d = pow(b, 2) - 4 * a*c;


	if (d > 0)
	{
		x1 = ((-b) - sqrt(d)) / (2 * a);
		x2 = ((-b) + sqrt(d)) / (2 * a);
		cout << " Wyniki tego trojmianu to " << endl
			<< " X1 = " << x1 << endl
			<< " X2= " << x2 << endl;
	}

	else cout << " Zalozenie bylo ze Delta ma byc wieksza od 0 ;) " << endl << endl;







}
