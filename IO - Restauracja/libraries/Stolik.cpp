#include <exception>
#include <string>
using namespace std;

#include "Stolik.h"
#include "Rezerwacja.h"
#include "Zamowienie.h"

void zmianaStokilow();

void nowyStolik(int nidStolika, int nliczbaMiejsc) {
	_idStolika = nidStolika;
	_liczbaMiejsc = nliczbaMiejsc;
	_czyZarezerwowany = false;
}

void dodajRezerwacje(Rezerwacja& rezerwacja) {
	_czyZarezerwowany = true;


	_unnamed_Rezerwacja_ = &rezerwacja;
}

void statusStolika() {
	cout << "Nr Stolika: " << _idStolika << endl;
	cout << "Liczba miejsc: " << _liczbaMiejsc << endl;



	if (_czyZarezerwowany == true) {
		cout << "Zarezerwowany dla: " << endl;
		_unnamed_Rezerwacja_->statusRezerwacji();
	}
	else
		cout << "Brak rezerwacji" << endl;
}

//void aktualizacja(Rezerwacja *rezerwacja) {
	//_czyZajety = true;


//}
};