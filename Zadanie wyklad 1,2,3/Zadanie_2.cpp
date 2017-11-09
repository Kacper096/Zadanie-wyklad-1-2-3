
#include "stdafx.h"
#include <iostream>
using namespace std;

void Zadanie_2()
{
	int x, y;

	cout << " Witaj tutaj bede sprawdzal czy x i y podane z Twojej klawiatury beda w przedzialach." << endl
		<< " Pierwsza liczba powinna sie miescic w przedziale (-20;5]" << endl
		<< " Druga liczba powinna sie znajdowac w przedziale [15;100]" << endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;
	cout << " Podaj druga liczbe: ";
	cin >> y;

	if ((-20 < x && x <= 5) && (15 <= y && y <= 100))

		cout << " Brawo Twoje liczby znajduja sie w podanych przedzialach. " << endl;

	if ((-20 < x && x <= 5) && (15 > y || y > 100))

		cout << " Tylko pierwsza liczba nalezy do przedzialu, nie jest spelniony warunek zadania. " << endl
		<< " Poniewaz obie liczby powinny sie znajdowac w swoich przedzialach." << endl;

	if ((-20 >= x || x > 5) && (15 <= y && y <= 100))

		cout << " Tylko druga liczba nalezy do przedzialu, nie jest spelniony warunek zadania. " << endl
		<< " Poniewaz obie liczby powinny sie znajdowac w swoich przedzialach." << endl;

	if ((-20 >= x || x > 5) && (15 > y || y > 100))

		cout << " Zadna z liczb nie nalezy do przedzialu. Warunek zadania nie jest spelniony. " << endl;


	system("pause");

}
