#include <iostream>
#include <exception>
#include <string>
using namespace std;

#include "Danie.h"
#include "Zamowienie.h"
#include "Menu.h"
#include "Item.h"

void Danie::pokazDanie()
{
	cout << "Nazwa: " << _nazwaDania;
	cout << " ID: " << _idDania;
	cout << " Cena: " << _cenaDania << " PLN" << endl;
}
void Danie::setDanie(int aId,string a_nazwaDania,double a_cenaDania) 
{
	_idDania = aId;
	_nazwaDania = a_nazwaDania;
	_cenaDania = a_cenaDania;
	if (czyIstnieje == 0) {
		cout << "Numer ID: " << aId << endl;
		cout << "Nazwa: " << a_nazwaDania << endl;
		cout << "Cena: " << a_cenaDania << endl;
	}

	else
		cout << "To danie nie istnieje" << endl;
}
