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

Danie danie[20];


void Zamowienie::wyswietlZamowienie() 
{
	for (int i = 1; i < _liczbaPotraw + 1; i++) 
	{
		cout << endl;
		cout << i << ". " << endl;
		danie[i].getDanie();
	}
}

void Zamowienie::noweZamowienie(int aIlePotraw) 
{
	_liczbaPotraw = aIlePotraw;
	string aNazwa;
	int AID;
	double aCena;
	for (int i = 1; i < _liczbaPotraw + 1; i++) 
	{

		cout << "Podaj nazwe: " << endl;
		cin >> aNazwa;
		cout << "Podaj ID: " << endl;
		cin >> AID;
		cout << "Podaj cene: " << endl;
		cin >> aCena;
		danie[i].setDanie(AID, aNazwa, aCena);


	}
	wyswietlZamowienie();
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
	danie[wybor].setDanie(AID, aNazwa, aCena);
}

void Zamowienie::platnosc() {
	throw "Not yet implemented";
}

