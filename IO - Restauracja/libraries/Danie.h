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
	private: string _idDania;		//_nazwaNazwa - zmienne klasy
	private: string _nazwaDania;
	private: double _cenaDania;
	public: Menu* _unnamed_Menu;

	public: void getDanie();
	public: void setDanie(string aId, string aNazwa, double aCena);	//aNazwa - argumenty
};

#endif
