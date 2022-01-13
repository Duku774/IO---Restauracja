#include <exception>
#include <string>
using namespace std;

#ifndef __Stolik_h__
#define __Stolik_h__

// #include "Rezerwacja.h"
// #include "Zamówienie.h"

class Rezerwacja;
class Zamowienie;
class Stolik;

class Stolik
{
	private: string _idStolika;
	private: int _liczbaMiejsc;
	private: bool _czyZajety;
	public: Rezerwacja* _Rezerwacja_;
	public: Zamowienie* _Zamowienie_;

	public: void zmianaStokilow(Stolik* aMiejsce, Stolik* bMiejsce);

	public: void nowyStolik(string aId, int aMiejsca);

	public: void aktualizacja();
};

#endif
