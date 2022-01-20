#include <exception>
#include <vector>
#include <iostream>
#include "Menu.h"
#include "Danie.h"

using namespace std;

Danie dania[40];
int z = 0;
void Menu::setup()
{
    string nazwatab[] = {"Rosol","Pierogi"};
    double cenatab[] = {10,15};
    for (int i = 0; i < sizeof(nazwatab) / sizeof(nazwatab[0]); i++)
    {
        dodajPotrawe(i+1,nazwatab[i],cenatab[i]);
    }
}

void Menu::dodajPotrawe(int aId, string nazwaDania,double cenaDania) 
{
	if(z<40)
    {
        dania[z].set_idDania(aId);
        dania[z].set_nazwaDania(nazwaDania);
        dania[z].set_cenaDania(cenaDania);
    	z++;
    }
    else 
        cout << "Nie można dodać kolejnej potrawy" << endl;
}

void Menu::usunPotrawe(int aId) 
{
	for (int i = aId-1; i < z; i++)
    	{
        dania[i].set_idDania(dania[i + 1].get_idDania());
        dania[i].set_nazwaDania(dania[i + 1].get_nazwaDania());
        dania[i].set_cenaDania(dania[i + 1].get_cenaDania());
    	}
    	z--;
}

void Menu::pokazMenu() 
{
	    int i=0;
    	while(dania[i].get_nazwaDania()!="")
    	{

    		cout << "Id: " << dania[i].get_idDania() << endl;
    		cout << "Nazwa Dania: " << dania[i].get_nazwaDania() << endl;
    		cout << "Cena: " << dania[i].get_cenaDania() << endl;
    		cout << "\n";
            i++;
    	}
}

