#include <exception>
#include <vector>
#include<iostream>
#include "Menu.h"
#include "Danie.h"

using namespace std;

Danie dania[40];
int z = 0;

void Menu::dodajPotrawe(int aId, string nazwaDania,double cenaDania) 
{
	if(z<40)
    {
        dania[z].set_idDania(aId);
        dania[z].set_nazwaDania(nazwaDania);
        dania[z].set_cenaDania(cenaDania);
    	z++;
    	pokazMenu();
    }
    else 
        cout << "Nie można dodać kolejnej potrawy" << endl;
}

void Menu::usunPotrawe(int aId) 
{
	for (int i = aId; i < z; i++)
    	{
        dania[i].set_idDania(dania[i + 1].get_idDania());
        dania[i].set_nazwaDania(dania[i + 1].get_nazwaDania());
        dania[i].set_cenaDania(dania[i + 1].get_cenaDania());
    	}
    	dania[aId].pokazDanie();
    	z--;
}

void Menu::pokazMenu() 
{
	    int i=0;
    	while(dania[i].get_nazwaDania()!="")
    	{

    		cout << "Id: " << dania[i].get_idDania() << endl;
    		cout << "Nazwa Dania" << dania[i].get_nazwaDania() << endl;
    		cout << "Cena: " << dania[i].get_cenaDania() << endl;
    		cout << "\n";
            i++;
    	}
}

void Menu::dodajDanieDoMenu() {
	throw "Not yet implemented";
}

void Menu::usunDanieZMenu() {
	throw "Not yet implemented";
}

