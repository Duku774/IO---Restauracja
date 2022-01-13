#include <exception>
#include <string>
using namespace std;

#include "Stolik.h"
#include "Rezerwacja.h"
#include "Zamowienie.h"

void Stolik::zmianaStokilow(Stolik* aMiejsce, Stolik* bMiejsce) {
	if (aMiejsce->_liczbaMiejsc == bMiejsce->_liczbaMiejsc) {
		bool pom = aMiejsce->_czyZajety;
		aMiejsce->_czyZajety = bMiejsce->_czyZajety;
		bMiejsce->_czyZajety = pom;

		Rezerwacja* pomRez = aMiejsce->_Rezerwacja_;
		aMiejsce->_Rezerwacja_ = bMiejsce->_Rezerwacja_;
		bMiejsce->_Rezerwacja_ = pomRez;

		Zamowienie* pomZam = aMiejsce->_Zamowienie_;
		aMiejsce->_Zamowienie_ = bMiejsce->_Zamowienie_;
		bMiejsce->_Zamowienie_ = pomZam;

		delete pomRez;
		delete pomZam;
	}
	else {
		throw "Liczba miejsc w zamienianych stolikach nie jest rowna";
	}
}

void Stolik::nowyStolik(string aId, int aMiejsca) {
	_idStolika = aId;
	_liczbaMiejsc = aMiejsca;
	_czyZajety = false;
	_Rezerwacja_ = NULL;
	_Zamowienie_ = NULL;
}

void Stolik::aktualizacja() {
	throw "Not yet implemented";
}

