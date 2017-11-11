
#include "stdafx.h"
#include<cstdlib>
#include <iostream>
#include <cstdlib>
using namespace std;


/***********************************************************/
void change1(long long liczba, int hex)
{
	if (liczba > 0)
	{
		change1(liczba / hex, hex);

		if (liczba % hex > 9)

		{
			switch (liczba % hex)
			{
			case 10:
				cout << "A";
				break;

			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "D";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
				cout << "F";
				break;
			}

		}

		else
			cout << liczba % hex;

	}
}
/*********************************************************/


void Zadanie_6_a()
{
	long long liczba;
	int hex = 16;

	cout << endl;
	cout << " Podaj liczbe ktora chcesz zmienic na system szesnastkowy ";
	cin >> liczba;
	cout << " Ta liczba to ";

	if (liczba == 0)
		cout << 0;


	else
		change1(liczba, hex);
	cout << endl;

	//system("pause");
	//return 0;
}

