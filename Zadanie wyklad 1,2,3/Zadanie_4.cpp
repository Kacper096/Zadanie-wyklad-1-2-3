
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


int Zadanie_4()
{
	float x, y;
	double f1, f2, f3, f4, f5;
	cout << " Bedziemy obliczac z podanych wzorow domowych dzieki wpisywaniu dwoch liczb z klawiatury" << endl
		<< " Pierwsza liczba: ";
	cin >> x;

	cout << " Druga liczba: ";
	cin >> y;

	f1 = ((1 / 8)*sqrt(x + 2 * y) - exp(3) + M_PI);
	f2 = 1 / tan(pow(2, (x + 1))) + (2 * pow(x, y) + M_E - 10) / (log(abs(x + 1)) - pow((x*y) / (pow(M_PI, 2)), 1 / 3));
	f3 = exp(x + y) + sin((pow(x, 2) + (1 / 4 * y) / 8));
	f4 = (pow(x, 4) + (1 / tan(((log(abs(x + 1)))) / (abs(2 * pow(x, 3)*pow(y, 4))))) - (1 / 8 * x*pow(y, exp(x))));
	f5 = sin(cos((1 / 3)*x*pow(y, (-3)))) + log10(2 * x) - log(3 * y) + pow((x + y*exp(exp(x + 2) + 10)), (1 / 3)) + sqrt(pow(x, y) + 1);

	cout << " 4.a. " << f1 << endl;
	cout << " 4.b. " << f2 << endl;
	cout << " 4.c. " << f3 << endl;
	cout << " 4.d. " << f4 << endl;
	cout << " 4.e. " << f5 << endl;

	system("pause");
	return 0;
}
