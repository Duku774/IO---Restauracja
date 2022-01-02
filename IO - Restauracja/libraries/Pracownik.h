#include <string>
using namespace std;

#ifndef __Pracownik_h__
#define __Pracownik_h__

#include "Osoba.h"

// class Osoba;
class Pracownik;

class Pracownik: public Osoba
{
	private: int _wiek;
	private: string _adres;
	private: int _idPracownika;
};

#endif
