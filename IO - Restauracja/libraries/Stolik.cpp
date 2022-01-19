#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "Stolik.h"
#include "Rezerwacja.h"
#include "Zamowienie.h"


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

void Stolik::nowyStolik(string aId, int aMiejsca) {
	_idStolika = aId;
	_liczbaMiejsc = aMiejsca;
	_czyZajety = false;
	_Rezerwacja_ = NULL;
	_Zamowienie_ = NULL;
}

void statusStolika() {
	cout << "Nr Stolika: " << _idStolika << endl;
	cout << "Liczba miejsc: " << _liczbaMiejsc << endl;

	if (_czyZarezerwowany == true) {
		cout << "Zarezerwowany dla: " << endl;
		_Rezerwacja_->statusRezerwacji();
	}
	else
		cout << "Brak rezerwacji" << endl;
}

//void aktualizacja(Rezerwacja *rezerwacja) {
	//_czyZajety = true;


//}
};