#include <iostream>
#include <exception>
#include <string>
using namespace std;

#include "Rezerwacja.h"
#include "Klient.h"
#include "Stolik.h"

/*
Metoda nowaRezerwacja
Tworzy nowa rezerwacje z podanych przez admina danych
_nazwisko -> nazwisko na jakie jest rezerwacja
_godzina -> godzina na ktora jest rezerwacja (bez minut, tylko pelna godzina)
_data -> dzien na ktory jest rezerwacja
_Ilosc_ludzi -> na ile osob jest rezerwacja
_czyIstnieje -> uzywana pozniej w tworzeniu nowej rezerwacji (stara pozostaje w pamieci)
*/
	
void Rezerwacja::nowaRezerwacja(string aNazwisko, int aGodzina, string aData, int aIlosc_ludzi) 
{
	_nazwisko = aNazwisko;
	_godzina = aGodzina;
	_data = aData;
	_Ilosc_ludzi = aIlosc_ludzi;

	cout << "Wprowadz numer rezerwacji: " << endl;
	cin >> _nrRezerwacji;
	_czyIstnieje = true;
}

/*
Metoda zmianaRezerwacja
wybor -> lokalna zmienna wybierajaca dane do zmiany we wczesniej stworzonej rezerwacji
_czyIstnieje -> uzywana do sprawdzenia czy dana rezerwacja istnieje i czy jest mozliwa do zmiany
*/

void Rezerwacja::zmianaRezerwacji() {
	if (_czyIstnieje) {
		cout << "Co chcesz zmienic?" << endl;
		cout << "1. Nazwisko 2. Godzina 3. Data 4. Ilosc ludzi " << endl;

		int wybor;
		cin >> wybor;

		switch (wybor) {
		case 1:
			cout << "Podaj nowe nazwisko: " << endl;
			cin >> _nazwisko;
			break;
		case 2:
			cout << "Podaj nowa godzine: " << endl;
			cin >> _godzina;
		case 3:
			cout << "Podaj nowa date: " << endl;
			cin >> _data;
			break;
		case 4:
			cout << "Podaj nwoa ilosc ludzi: " << endl;
			cin >> _Ilosc_ludzi;
			break;
		}
	}
	else
		cout << "Ta rezerwacja nie istnieje" << endl;
}

/*
Metoda usunRezerwacje
Zmienia _czyIstnieje na falsz -> blokuje tym niepotrzebna zmiane
Jak tworzona jest nowa rezerwacja zmiana na true -> mozna modyfikowac
*/

void Rezerwacja::usunRezerwacje() 
{
	_czyIstnieje = false;
}

/*
Metoda statusRezerwacji
Wyswietla dane odnosnie danej rezerwacji
*/

void Rezerwacja::statusRezerwacji() 
{
	if (_czyIstnieje) {
		cout << "Numer rezerwacji: " << _nrRezerwacji << endl;
		cout << "Nazwisko: " << _nazwisko << endl;
		cout << "Godzina: " << _godzina << endl;
		cout << "Data rezerwacji: " << _data << endl;
		cout << "Ilosc ludzi: " << _Ilosc_ludzi << endl;
	}
	else
		cout << "Ta rezerwacja nie istnieje" << endl;
}

