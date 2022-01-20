#include <exception>
#include <vector>
using namespace std;

#ifndef __Item_h__
#define __Item_h__

// #include "Zamowienie.h"
#include "Danie.h"

class Zamowienie;
class Danie;
class Item;

class Item
{
	private: int _ilosc;
	public: 
		Danie* _rodzaj_Dania_; // jesli to klasa '_' na koniec
		void setItem(int aIlosc, Danie* aDanie);
};

#endif
