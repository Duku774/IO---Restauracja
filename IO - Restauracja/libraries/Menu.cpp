#include <exception>
#include <vector>
using namespace std;

#include "Menu.h"
#include "Danie.h"


Danie[40];
int n = 0;

void Menu::dodajPotrawe(string aId, nazwaDania,double cenaDania) {
	if(n<40){
	        Danie[n].set_aID(aId);
    		Danie[n].set_nazwaDania(nazwaDania);
    		Danie[n].set_cenaDania(cenaDania);
    		n++;
    		pokazMenu();
    	}
    	else cout << "Nie można dodać kolejnej potrawy" << endl;
}

void Menu::usunPotrawe() {
	for (int i = aId; i < n; i++)
    	{
    		danie[i].set_aID(danie[i + 1].get_aId());
    		danie[i].set_nazwaDania(danie[i + 1].get_nazwaDania());
    		danie[i].set_cenaDania(danie[i + 1].get_cenaDania());
    	}
    	pokazDanie();
    	n--;
}

void Menu::sprawdzMenu() {
	int i=0;
    	while(Danie[i].get_nazwaDania()!="")
    	{
    		cout << "Id: " <<danie[i].get_aId() << endl;
    		cout << "Nazwa Dania" <<danie[i].get_nazwaDania() << endl;
    		cout << "Cena: " <<danie[i].get_cenaDania() << endl;
    		cout << "\n";
    		i++
    	}
}

void Menu::dodajDanieDoMenu() {
	throw "Not yet implemented";
}

void Menu::usunDanieZMenu() {
	throw "Not yet implemented";
}

