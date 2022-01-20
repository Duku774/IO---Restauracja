#include <exception>
#include <string>
using namespace std;

#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

// #include "Klient.h"
// #include "Stolik.h"

class Klient;
class Stolik;
class Rezerwacja;

class Rezerwacja
{
private: 
	string _data;
	string _nazwisko;
	int _godzina;
	int _nrRezerwacji;
	int _Ilosc_ludzi;
	bool _czyIstnieje;

public: 
	Klient* _unnamed_Klient_;
	Stolik* _unnamed_Stolik_;

	void nowaRezerwacja(string aNazwisko, int aGodzina, string aData, int aIlosc_ludzi);
	void zmianaRezerwacji();
	void usunRezerwacje();
	void statusRezerwacji();
};

#endif
