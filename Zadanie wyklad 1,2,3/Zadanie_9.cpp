
#include"stdafx.h"
#include <iostream>

using namespace std;


void Zadanie_9()
{
	float suma = 0;
	float liczba = 0;
	//cin >> liczba;
																								////Do Poprawki/////
	do {
		
		for (int i = 1; i <= 2; i++)
		{
			cin >> liczba;
			if (liczba == -111)
				break;
			if (liczba < 0 && suma <= 0)
			{
				//suma = -suma;
				suma += liczba;
			}
			else if (liczba >= 0 && suma <= 0)
			{
				suma = liczba - suma;
				
				
			}
			else if (liczba > 0 && suma > 0)
				suma -= liczba;
			else if (liczba < 0 && suma > 0)
			{
				//suma = -suma;
				suma -= liczba;
			}
			



			cout << suma<<endl;
			
		}
		//cout << suma << endl;
	} while (liczba != -111);
	
	cout << " Koniec zabawy w numerze 9 ;)" << endl << endl;
		//system("pause");
}