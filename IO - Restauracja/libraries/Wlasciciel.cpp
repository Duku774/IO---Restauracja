#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "Wlasciciel.h"
#include "Pracownik.h"
#include"Menu.h"

Pracownik pracownicy[30];
int n = 0;
void Wlasciciel::dodajPracownika(string aImie, string aNazwisko, string aNrTelefonu, string aAdres, int aWiek) 
{
	

	if (n < 30)
	{
		pracownicy[n].set_wiek(aWiek);
		pracownicy[n].set_adres(aAdres);
		pracownicy[n].set_imie(aImie);
		pracownicy[n].set_nazwisko(aNazwisko);
		pracownicy[n].set_nrTelefonu(aNrTelefonu);
		n++;
		pokazPracownikow();
	}
	else cout << "brak miesjca, usun pracownika!" << endl;
}
void Wlasciciel::pokazPracownikow()
{
	int i=0;
	while(pracownicy[i].get_imie()!="")
	{
		cout << "Pracownik nr. " << i + 1 << endl;
		cout << "Imie: " <<pracownicy[i].get_imie() << endl;
		cout << "Nazwisko: " <<pracownicy[i].get_nazwisko() << endl;
		cout << "Nr telefonu: " <<pracownicy[i].get_nrTelefonu() << endl;
		cout << "Adres: " <<pracownicy[i].get_adres() << endl;
		cout << "Wiek: "<<pracownicy[i].get_wiek() << endl;
		cout << "\n";
		i++;
	}
}
void Wlasciciel::usunPracownika(int aIdPracownika) 
{
	for (int i = aIdPracownika; i < n; i++)
	{
		pracownicy[i].set_wiek(pracownicy[i + 1].get_wiek());
		pracownicy[i].set_adres(pracownicy[i + 1].get_adres());
		pracownicy[i].set_imie(pracownicy[i + 1].get_imie());
		pracownicy[i].set_nazwisko(pracownicy[i + 1].get_nazwisko());
		pracownicy[i].set_nrTelefonu(pracownicy[i + 1].get_nrTelefonu());
	}
	pokazPracownikow();
	n--;
}
void Wlasciciel::dodajPotrawe() 
{
	int aId;
	string nazwaDania;
	double cenaDania;
	Menu::pokazMenu();
	cout << "\nPodaj id, nazwe dania oraz cene" << endl;
	cin >> aId >> nazwaDania >> cenaDania;
	Menu::dodajPotrawe(aId,nazwaDania,cenaDania);
}
void Wlasciciel::usunPotrawe() 
{
	int aId;
	Menu::pokazMenu();
	cout << "\nPodaj id potrawy ktora chcesz usunac: " << endl;
	cin >> aId;
	Menu::usunPotrawe(aId);

}