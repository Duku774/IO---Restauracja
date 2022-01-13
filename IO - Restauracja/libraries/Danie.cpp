#include <exception>
#include <string>
using namespace std;

#include "Danie.h"
#include "Zamowienie.h"
#include "Menu.h"
#include "Item.h"

void Danie::getDanie() {
	throw "Not yet implemented";
}

void Danie::setDanie(string aId, string aNazwa, double aCena) {
	_idDania = aId;
	_nazwaDania = aNazwa;
	_cenaDania = aCena;	
}

