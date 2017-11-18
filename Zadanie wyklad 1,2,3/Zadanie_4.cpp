
#include "stdafx.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

double dodatek (float x, float y)
{
	double f1;
	f1 = (1 / 8)*sqrt(x + 2 * y) - exp(3) + M_PI;
	
	return f1;
}
double dodatek2 (float x, float y)
{
	double f2;
	f2 = 1 / tan(pow(2, (x + 1))) + (2 * pow(x, y) + M_E - 10) / (log(abs(x + 1)) - pow((x*y) / (pow(M_PI, 2)), 1 / 3));

	return f2;
}
double dodatek3 (float x, float y)
{
	double f3;
	f3 = exp(x + y) + sin((pow(x, 2) + (1 / 4 * y) / 8));

	return f3;
}
double dodatek4 (float x, float y)
{
	double f4;

	f4 = (pow(x, 4) + (1 / tan(abs(2 * pow(x, 3)*pow(y, 4)))) * (log(abs(x + y))) - (1 / 8) * x * pow(y, exp(x))) / (pow((x + y + exp(exp(2))), 1 / 3));

	return f4;
}
double dodatek5(float x, float y)
{
	double f5;
	f5 = sin(cos((1 / 3)*x*pow(y, (-3)))) + log10(2 * x) - log(3 * y) + pow((x + y*exp(exp(x + 2) + 10)), (1 / 3)) + sqrt(pow(x, y) + 1);

	return f5;
}



void Zadanie_4()
{
	float x, y;
	

	cout << endl;
	cout << " Bedziemy obliczac z podanych wzorow domowych dzieki wpisywaniu dwoch liczb z klawiatury" << endl<<endl
		<< " Pierwsza liczba: ";
	cin >> x;

	cout << endl;
	cout << " Druga liczba: ";
	cin >> y;

	
	

	cout << " 4.a. " << dodatek(x, y) << endl;
	cout << " 4.b. " << dodatek2(x, y) << endl;
	cout << " 4.c. " << dodatek3(x, y) << endl;
	cout << " 4.d. " << dodatek4(x, y) << endl;
	cout << " 4.e. " << dodatek5(x, y) << endl << endl;

	//system("pause");
	//return 0;
}
