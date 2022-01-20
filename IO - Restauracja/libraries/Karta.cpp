#include <exception>
#include <iostream>
using namespace std;

#include "Karta.h"
#include "Platnosc.h"

/*
Metoda setPin
Ustawia nowy pin karty - moze byc dowolny
*/

void Karta::setPin() {
	cout << "Podaj nowy pin: ";
	cin >> Pin;
}

/*
Metoda autoryzacja
Sprawdza czy podany pin jest poprawny i taki sam jak pin karty
*/

void Karta::autoryzacja(int aPin) {
	if (aPin == Pin) {
		cout << "Autoryzacja poprawna" << endl;
	}
	else {
		cout << "Autoryzacja nie powiodla sie" << endl;
	}
}

