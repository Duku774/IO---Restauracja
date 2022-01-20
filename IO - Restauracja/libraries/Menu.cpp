#include <exception>
#include <vector>
#include <iostream>
#include "Menu.h"
#include "Danie.h"

using namespace std;

Danie dania[40]; // Tablica wszystich dan
int z = 0;  // Liczba edytowanego ostatnio dania
void Menu::setup()
{
    string nazwatab[] = {"Rosol","Pierogi"};
    double cenatab[] = {10,15};
    for (int i = 0; i < sizeof(nazwatab) / sizeof(nazwatab[0]); i++)
    {
        dodajPotrawe(i+1,nazwatab[i],cenatab[i]);
    }
}

/*
Metoda dodajPotrawe
Dodaje potrawe do menu z podanych argumentow
*/

void Menu::dodajPotrawe(int aId, string nazwaDania, double cenaDania) {
	if(z<40) {
        dania[z].setDanie(aId, nazwaDania, cenaDania);
    	z++;
    }
    else 
        cout << "Nie można dodać kolejnej potrawy" << endl;
}

/*
Metoda usunPotrawe
Usuwa potrawe z menu po podanym ID
*/

void Menu::usunPotrawe(int aId) {
	for (int i = aId; i < z; i++) {
        dania[i].setDanie(dania[i + 1].get_idDania(), dania[i + 1].get_nazwaDania(), dania[i + 1].get_cenaDania());
    }

    z--;
}

/*
Metoda pokazMenu
Wyswietla cale menu klientowi
*/

void Menu::pokazMenu() {
    int i=0;

    while(dania[i].get_nazwaDania()!="") {
    	cout << "Id: " << dania[i].get_idDania() << endl;
    	cout << "Nazwa Dania" << dania[i].get_nazwaDania() << endl;
    	cout << "Cena: " << dania[i].get_cenaDania() << endl;
    	cout << "\n";
        i++;
    }
}
