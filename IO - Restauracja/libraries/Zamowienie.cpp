#include <iostream>
#include <exception>
#include <string>
#include <vector>
using namespace std;

#include "Zamowienie.h"
#include "Klient.h"
#include "Stolik.h"
#include "Platnosc.h"
#include "Danie.h"
#include "Item.h"
#include "Menu.h"

Item itemy[100];
void Zamowienie::wyswietlZamowienie() 
{
	
}
void Zamowienie::noweZamowienie() 
{
	int id=9999,ilosc;
	while (id!=0)
	{
		cout << "aby wyjsc kliknij 0" << endl;
		Menu::pokazMenu();
		cout << "wybierz danie oraz ilosc:" << endl;
		cin >> id >> ilosc;
		//itemy[id - 1].setItem(ilosc,);
	}

}

void Zamowienie::edytujZamowienie() 
{
	int wybor;
	string aNazwa;
	int AID;
	double aCena;
	cout << "Ktora pozycje chcesz zmienic? " << endl;
	cin >> wybor;
	if (wybor)
		cout << "Podaj nazwe: " << endl;
	cin >> aNazwa;
	cout << "Podaj ID: " << endl;
	cin >> AID;
	cout << "Podaj cene: " << endl;
	cin >> aCena;
	//danie[wybor].setDanie(AID, aNazwa, aCena);
}

void Zamowienie::platnosc() {
	throw "Not yet implemented";
}

