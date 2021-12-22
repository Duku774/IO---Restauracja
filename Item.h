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
	private: string _ilosc;
	public: Zamowienie* _unnamed_Zamowienie_;
	public: std::vector<Danie*> _unnamed_Danie_;

	public: void getItem();
};

#endif
