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
	private: int _liczbaPotraw;
	private: bool _naWynos;
	private: string _idStolika;
	private: string _idZamówienia;
	public: Klient* _unnamed_Klient_;
	public: Stolik* _unnamed_Stolik_;
	public: Platnosc* _unnamed_Platnosc_;
	public: Danie* _unnamed_Danie_;
	public: std::vector<Item*> _unnamed_Item_;

	public: void wyswietlZamowienie();

	public: void noweZamowienie(int aIlePotraw);

	public: void edytujZamowienie();

	public: void platnosc();
};

#endif
