#include <exception>
#include <string>
using namespace std;

#include "Danie.h"
#include "Zamowienie.h"
#include "Menu.h"
#include "Item.h"

public void Danie::getDanie(string _nazwaDania) {
	_nazwaDania = a_nazwaDania;

	cout << "Wprowadz nazwe dania: " << endl;
    	cin >> _nazwaDania;
    	czyIstnieje = 0;

}

public void Danie::setDanie(string aId, _nazwaDania,double _cenaDania) {
f (czyIstnieje == 0) {
		cout << "Numer ID: " << aID << endl;
		cout << "Nazwa: " << _nazwaDania << endl;
		cout << "Cena: " << _cenaDania << endl;
	}
	else
		cout << "To danie nie istnieje" << endl;
}