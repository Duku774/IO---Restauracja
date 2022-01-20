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
		bool czyIstnieje = 1;
	public: 
		Menu* _unnamed_Menu;
		void pokazDanie();
		void getDanie();
		void setDanie(int aId, string aNazwa, double aCena);	//aNazwa - argumenty
		void set_idDania(int id)
		  {
			 this->_idDania = id;
		  }
		int get_idDania()
		  {
			  return _idDania;
		  }
		void set_nazwaDania(string nazwa)
		  {
			  _nazwaDania = nazwa;
		  }
		string get_nazwaDania()
		  {
			  return _nazwaDania;
		  }
		void set_cenaDania(double cena)
		  {
			  _cenaDania = cena;
		  }
		double get_cenaDania()
		  {
			  return _cenaDania;
		  }
		void set_czyIstnieje()
		{

		}
		bool get_czyIstnieje()
		{
			return czyIstnieje;
		}
};

#endif
