#include <string>
using namespace std;

#ifndef __Osoba_h__
#define __Osoba_h__

class Osoba;

class Osoba
{
	private: string _imie;
	private: string _nazwisko;
	private: string _nrTelefonu;
public:
	void set_imie(string imie)
	{
		_imie = imie;
	}
	void set_nazwisko(string nazwisko)
	{
		_nazwisko = nazwisko;
	}
	void set_nrTelefonu(string nr)
	{
		_nrTelefonu = nr;
	}
	string get_imie()
	{
		return _imie;
	}
	string get_nazwisko()
	{
		return _nazwisko;
	}
	string get_nrTelefonu()
	{
		return _nrTelefonu;
	}
};

#endif
