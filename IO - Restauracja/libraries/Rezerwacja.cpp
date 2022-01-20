#include <iostream>
#include <exception>
#include <string>
using namespace std;

#include "Rezerwacja.h"
#include "Klient.h"
#include "Stolik.h"


	
	void Rezerwacja::nowaRezerwacja(string aNazwisko, int aGodzina, string aData, int aIlosc_ludzi) {
	_nazwisko = aNazwisko;
	_godzina = aGodzina;
	_dataRezerwacji = aData;
	_Ilosc_ludzi = aIlosc_ludzi;

	cout << "Wprowadz numer rezerwacji: " << endl;
	cin >> _nrRezerwacji;
	czyIstnieje = 0;
}

	void Rezerwacja::zmianaRezerwacji() {
	int wybor;
	if (czyIstnieje == 0) {
		cout << "Co chcesz zmienic? " << endl;
		cout << "1. Nazwisko 2. Godzina 3. Data 4. Ilosc ludzi " << endl;
		cin >> wybor;
		switch (wybor) {
		case 1:

			cout << "Podaj nazwisko: " << endl;
			cin >> _nazwisko;
			break;
		case 2:
			cout << "Podaj godzine: " << endl;
			cin >> _godzina;
		case 3:
			cout << "Podaj date: " << endl;
			cin >> _dataRezerwacji;
			break;
		case 4:
			cout << "Podaj ilosc ludzi: " << endl;
			cin >> _Ilosc_ludzi;
			break;

		}
	}
	else
		cout << "Ta rezerwacja nie istnieje" << endl;


}

	void Rezerwacja::usunRezerwacjie() {
	czyIstnieje = 1;

}

	void Rezerwacja::statusRezerwacji() {
	if (czyIstnieje == 0) {
		cout << "Numer rezerwacji: " << _nrRezerwacji << endl;
		cout << "Nazwisko: " << _nazwisko << endl;
		cout << "Godzina: " << _godzina << endl;
		cout << "Data rezerwacji: " << _dataRezerwacji << endl;
		cout << "Ilosc ludzi: " << _Ilosc_ludzi << endl;
	}
	else
		cout << "Ta rezerwacja nie istnieje" << endl;
}

