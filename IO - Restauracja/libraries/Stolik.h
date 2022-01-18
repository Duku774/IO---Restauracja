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
	private: 
		string _idStolika;
		int _liczbaMiejsc;
		bool _czyZajety;
		bool _czyZarezerwowany;

	public: 
		Rezerwacja* _unnamed_Rezerwacja_;
		Zamowienie* _unnamed_Zamowienie_;

		void zmianaStokilow();

		void nowyStolik();

		void aktualizacja();
};

#endif
