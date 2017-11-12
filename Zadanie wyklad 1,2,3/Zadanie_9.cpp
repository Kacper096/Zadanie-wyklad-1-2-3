
#include"stdafx.h"
#include <iostream>

using namespace std;



void MAIN( float suma,  float liczba  )
{
	cout << "							KOMUNIKAT:	Aby zakonczyc program wpisz -111. ; )" << endl << endl;

	do {

		for (int i = 1; i <= 2; i++)
		{


			cout << " Wpisz swoja liczbe: ";

			cin >> liczba;

			if (liczba == -111)
				break;

			
			bool dodatnia(liczba > 0);


			if (dodatnia == true)
			{
				cout << " Odejmowanie: " << suma << " - " << liczba << " = ";

				if (liczba >= suma && suma != 0)
					suma -= liczba;

				else if (liczba < suma && suma != 0)
					suma -= liczba;

				else if (suma == 0)
					suma -= liczba;

					
				
			}



			if (dodatnia == false)
			{
				cout << " Odejmowanie: " << suma << " - ( " << liczba << " ) = ";
				if (liczba >= suma && suma != 0)
					suma = liczba - suma;

				else if (liczba < suma && suma != 0)
					suma -= liczba;

				else if (suma == 0)
					suma -= liczba;
				
			}



			cout << suma << endl << endl;

		}

	} while (liczba != -111);

	cout<<endl << " Koniec zabawy w numerze 9 ;)" << endl << endl;
	cout << " DO ZOBACZENIA ;) " << endl << endl;
}



void Zadanie9()
{
	float druga_liczba = 0;
	float suma = 0;
	float liczba = 0;
	
	cout <<endl << "                   WITAJ W ZADANIU NR.9 " << endl << endl;
	cout << " Wpisz dwie liczby ktore chcesz odjac: " << endl << endl
		<< " Pierwsza liczba: ";

	cin >> liczba;   

	cout << " Druga liczba: ";
	cin >> druga_liczba;

	suma = liczba - druga_liczba;

	cout << " Odejmowanie: " << liczba << " - " << druga_liczba << " = " << suma << endl << endl;



	cout << " Teraz bede odejmowal twoj wynik (" << suma << ") od liczby wpisanej przez Ciebie. ;)" << endl << endl;
	MAIN(suma, liczba);
	//system("pause");
}