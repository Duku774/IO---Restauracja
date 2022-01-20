#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "Stolik.h"
#include "Rezerwacja.h"
#include "Zamowienie.h"


/*
Metoda zmianaStolikow
Zamienia ze soba dwa stoliki (rezerwacje i zamowienia odnoszace sie do miejsca)
Dziala tylko gdy obydwa stoliki maja rowna ilosc miejsc
*/

void Stolik::zmianaStokilow(Stolik* bMiejsce) {
	if (_liczbaMiejsc == bMiejsce->_liczbaMiejsc) {
		bool pom = _czyZajety;
		_czyZajety = bMiejsce->_czyZajety;
		bMiejsce->_czyZajety = pom;

		Rezerwacja* pomRez = _Rezerwacja_;
		_Rezerwacja_ = bMiejsce->_Rezerwacja_;
		bMiejsce->_Rezerwacja_ = pomRez;

		Zamowienie* pomZam = _Zamowienie_;
		_Zamowienie_ = bMiejsce->_Zamowienie_;
		bMiejsce->_Zamowienie_ = pomZam;

	}
	else {
		cout << "Liczba miejsc w zamienianych stolikach nie jest rowna" << endl;
	}
}

/*
Metoda nowyStolik
Tworzy nowy stolik z podanym ID oraz dana liczba miejsc
*/

void Stolik::nowyStolik(string aId, int aMiejsca) {
	_idStolika = aId;
	_liczbaMiejsc = aMiejsca;
	_czyZajety = false;
	_Rezerwacja_ = NULL;
	_Zamowienie_ = NULL;
}

/*
Metoda statusStolika
Wyswietla status danego stolika:
id, liczba miejsc i czy jest zarezerwowany
*/

void Stolik::statusStolika() {
	cout << "ID Stolika: " << _idStolika << endl;
	cout << "Liczba miejsc: " << _liczbaMiejsc << endl;

	if (_czyZarezerwowany) {
		cout << "Zarezerwowany dla: " << endl;
		_Rezerwacja_->statusRezerwacji();
	}
	else
		cout << "Brak rezerwacji" << endl;
}

/*
Metoda aktualizacja
Sluzy do aktualizowania danych o danym stoliku
Przypisuje danemu stolikowi rezerwacje lub zamowienie w zaleznosci od wywolania
*/

void Stolik::aktualizacja(Rezerwacja* aRezerwacja) {
	if (_czyZajety) {
		_Rezerwacja_ = aRezerwacja;
	}
	else
		cout << "Taki stolik nie istnieje" << endl;
}

void Stolik::aktualizacja(Zamowienie* aZamowienie) {
	if (_czyZajety) {
		_Zamowienie_ = aZamowienie;
	}
	else
		cout << "Taki stolik nie istnieje" << endl;
}