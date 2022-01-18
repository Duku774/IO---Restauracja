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
public:
	Pracownik() {}
	Pracownik(string imie,string nazwisko,string nr, string adres, int wiek)
	{
		_wiek = wiek;
		_adres = adres;
		this->set_imie(imie);
		this->set_nazwisko(nazwisko);
		this->set_nrTelefonu(nr);
	}
	~Pracownik(void) {}
	void set_wiek(int wiek)
	{
		this->_wiek = wiek;
	}
	void set_adres(string adres)
	{
		this->_adres = adres;
	}
	int get_wiek()
	{
		return _wiek;
	}
	string get_adres()
	{
		return _adres;
	}
};

#endif
