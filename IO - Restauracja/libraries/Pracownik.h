#include <string>
using namespace std;

#ifndef __Pracownik_h__
#define __Pracownik_h__

#include "Osoba.h"

// class Osoba;
class Pracownik;

class Pracownik: public Osoba
{
private: 
	int _wiek{};
	string _adres;
	int _idPracownika{};
public:
	Pracownik() {}
	Pracownik(int wiek, string adres, int id)
	{
		_wiek = wiek;
		_adres = adres;
		_idPracownika = id;
	}
	~Pracownik() 
	{
	}
	void set_wiek(int wiek)
	{
		this->_wiek = wiek;
	}
	void set_adres(string adres)
	{
		this->_adres = adres;
	}
	void set_idPracownika(int id)
	{
		this->_idPracownika = id;
	}
};

#endif
