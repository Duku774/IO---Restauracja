#include <exception>
#include <vector>
using namespace std;

#ifndef __Klient_h__
#define __Klient_h__

#include "Rezerwacja.h"
// #include "Zamowienie.h"
#include "Osoba.h"

class Rezerwacja;
class Zamowienie;
// class Osoba;
class Klient;

class Klient: public Osoba
{
	public: std::vector<Rezerwacja*> _unnamed_Rezerwacja_;
	public: Zamowienie* _unnamed_Zamowienie_;

	public: void zamow();

	public: void rezerwuj();
};

#endif
