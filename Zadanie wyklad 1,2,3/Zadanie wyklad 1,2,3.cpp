// Zadanie wyklad 1,2,3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Zadania.h"


using namespace std;


int main()
{
	

	int numer;
	string Koniec = "Koniec";
	

	for (int i = 1; i <= 12; i++)
	{
		cout << i << "." << "Zadanie " << i << endl;
	}

	cout << " Wpisz Koniec. Jesli chcesz zakonczyc program ;) " << endl << endl;

	do
	{
		cout << " Wpisz numer, aby wybrac zadanie: ";
		cin >> numer;
		
	switch (numer)
	{
	case 1:
		Zadanie_1();
		break;
	case 2:
		Zadanie_2();
		break;
	case 3:
		Zadanie_3();
		break;
	case 4:

		Zadanie_4();
		break;
	case 5:
		Zadanie_5_a();
		Zadanie_5_b();
		Zadanie_5_c();

		break;
	case 6:
		Zadanie_6_a();
		Zadanie_6_b();
		break;
	case 7:
		Zadanie_7();
		break;
	case 8:
		Zadanie_8();
		break;
	case 9:
		Zadanie9();
		break;
	case 10:
		Zadanie_10();
		break;
	case 11:
		Zadanie_11_a();
		Zadanie_11_b();
		Zadanie_11_c();
		break;
	case 12:
		Zadanie_12_a();
		Zadanie_12_b();
		Zadanie_12_c();

		break;
	
	}
	}

	while (Koniec != "Koniec");

	cout << endl;
	cout << " Dziekuje. Koniec programu " << endl;
	
	
	system("pause");
    return 0;
}

