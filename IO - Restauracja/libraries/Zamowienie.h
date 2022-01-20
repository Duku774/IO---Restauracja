#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Zamowienie_h__
#define __Zamowienie_h__

// #include "Klient.h"
// #include "Stolik.h"
// #include "Platnosæ.h"
// #include "Danie.h"
#include "Item.h"

class Klient;
class Stolik;
class Platnosc;
class Danie;
class Item;
class Zamowienie;

class Zamowienie
{
	private: 
		int _liczbaPotraw;
		bool _naWynos;
		string _idStolika;
		string _idZamówienia;
		double suma;
	public:
		Klient* _unnamed_Klient_;
		Stolik* _unnamed_Stolik_;
		Platnosc* _unnamed_Platnosc_;
		Danie* _unnamed_Danie_;
		std::vector<Item*> _unnamed_Item_;

		void wyswietlZamowienie();

		static void noweZamowienie();

		void edytujZamowienie();

		void platnosc();

		void set_suma();

		double get_suma();

		
};

#endif
