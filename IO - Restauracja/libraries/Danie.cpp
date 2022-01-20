#include <iostream>
#include <exception>
#include <string>
using namespace std;

#include "Danie.h"
#include "Zamowienie.h"
#include "Menu.h"
#include "Item.h"

/*
Metoda pokazDanie
Wyswietla dane o danym daniu
Nazwe, ID oraz cene
*/

void Danie::pokazDanie() {
	cout << "Nazwa: " << _nazwaDania;
	cout << " ID: " << _idDania;
	cout << " Cena: " << _cenaDania << " PLN" << endl;
}

/*
Metoda setDanie
Tworzy nowe danie z podanych argumentow
aId -> _idDania
aNazwa -> _nazwaDania
aCena -> _cenaDania
*/

void Danie::setDanie(int aId, string aNazwa, double aCena) {
	_idDania = aId;
	_nazwaDania = aNazwa;
	_cenaDania = aCena;
}

/*
Gettery odpowiednich elementow
Zwracaja zadana dana z podanego dania
ID, Nazwa lub Cena
*/

int Danie::get_idDania() {
	return _idDania;
}
string Danie::get_nazwaDania() {
	return _nazwaDania;
}
double Danie::get_cenaDania() {
	return _cenaDania;
}
