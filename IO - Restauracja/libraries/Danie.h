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
	private: 
		int _idDania;		//_nazwaNazwa - zmienne klasy
		string _nazwaDania;
		double _cenaDania;

	public: 

		void pokazDanie();
		void setDanie(int aId, string aNazwa, double aCena);	//aNazwa - argumenty
		int get_idDania();
		string get_nazwaDania();
		double get_cenaDania();

};

#endif
