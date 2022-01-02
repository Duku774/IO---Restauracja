#include <exception>
#include <string>
using namespace std;

#ifndef __Danie_h__
#define __Danie_h__

// #include "Zamowienie.h"
// #include "Menu.h"
// #include "Item.h"

class Zamowienie;
class Menu;
class Item;
class Danie;

class Danie
{
	private: int _idDania;
	private: string _nazwaDania;
	private: double _cenaDania;
	public: Zamowienie* _unnamed_Zamowienie_;
	public: Menu* _unnamed_Menu_;
	public: Item* _unnamed_Item_;
	public: Menu* _unnamed_Menu_2;

	public: void getDanie();

	public: void setDanie(string aId, string aNazwa, string aCena);
};

#endif
