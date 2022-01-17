#include <exception>
#include <string>
using namespace std;

#ifndef __Wlasciciel_h__
#define __Wlasciciel_h__

#include "Pracownik.h"

// class Pracownik;
//class Wlasciciel;

class Wlasciciel: public Pracownik
{
private: string _haslo;

public: 
	bool czyAdmin();

	void zmianaHasla(string haslo)
	{
	this->_haslo = haslo;
	}
	string getHaslo()
	{
		return _haslo;
	}
	static void dodajPracownika(string aImie, string aNazwisko, string aNrTelefonu, string aAdres, int aWiek);
	static void pokazPracownikow();
	static void usunPracownika(int aIdPracownika);
};

#endif
