
#include "stdafx.h"
#include <iostream>
using namespace std;

void Zadanie_3()

{
	int x, y;
	cout << endl;
	cout << " Witaj tutaj bede sprawdzal czy dwie liczby podane z Twojej klawiatury znajda sie w przedzialach." << endl
		<< " Pierwsza liczba powinna sie miescic w przedziale (20;40)" << endl
		<< " Druga liczba powinna sie znajdowac w przedziale [23;27)" << endl<<endl
		<< " Podaj pierwsza liczbe: ";
	cin >> x;

	cout << endl;
	cout << " Podaj druga liczbe: ";
	cin >> y;

	cout << endl;
	if ((20 < x && x < 40) && (23 <= y && y < 27))

		cout << " Brawo Twoje liczby znajduja sie w podanych przedzialach. " << endl;

	if ((-20 < x && x <= 5) && (23 > y || y > 27))

		cout << " Tylko pierwsza liczba nalezy do przedzialu." << endl;

	if ((20 >= x || x >= 40) && (23 <= y && y <= 27))

		cout << " Tylko druga liczba nalezy do przedzialu. " << endl;

	if ((20 >= x || x >= 40) && (23 > y || y > 27))

		cout << " Zadna z liczb nie nalezy do przedzialu." << endl << endl;


	//system("pause");





}