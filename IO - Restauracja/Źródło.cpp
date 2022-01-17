#include <iostream>
using namespace std;
#include "libraries/Zamowienie.h"
#include "libraries/Wlasciciel.h"
void setup(Wlasciciel *admin);
int main()
{
	Wlasciciel admin;
	setup(&admin);
	while (1)
	{
	int menu_opt;
		cout << "witamy w restauracji wybierz odpowiednia funkcje z menu:\n1)Strefa klienta\n0)Strefa administratora" << endl;
		cin >> menu_opt;
	switch (menu_opt)
	{
	case 1:
		break;
	case 0:
		string pass;
		cout << "Podaj haslo" << endl;
		cin >> pass;
		while (pass != admin.getHaslo())
		{
			cout << "Podaj haslo" << endl;
			cin >> pass;
		}
		cout << "1)Zmiana hasla\n2)Dodaj pracownika\n3)Usun pracownika\n4)Pokaz wszystkich pracownikow\n" << endl;
		int menu_wyb;
		cin >> menu_wyb;
		switch (menu_wyb)
		{
		case 1:
		{
			string new_pass;
			cout << "zmiana hasla\npodaj haslo:" << endl;
			cin >> new_pass;
			admin.zmianaHasla(new_pass);
			break;
		}
		case 2:
		{
			string Imie, Nazwisko, NrTelefonu, Adres; 
			int Wiek;
			cout << "Podaj w kolejnosci Imie, Nazwisko, Nr Telefonu, Adres, Wiek. kazdy wyraz oddzielaj spacja" << endl;
			cin >> Imie >> Nazwisko >> NrTelefonu >> Adres>> Wiek;
			Wlasciciel::dodajPracownika(Imie, Nazwisko, NrTelefonu, Adres, Wiek);
			
			break;
		}
		case 3:
			Wlasciciel::pokazPracownikow();
			cout << "Podaj id pracownika ktorego chcesz usunac:" << endl;
			int id;
			cin >> id;
			Wlasciciel::usunPracownika(id-1);
			break;

		case 4:
			Wlasciciel::pokazPracownikow();
			break;
		};
		

	};
	
	}
	return 0;
}
void setup(Wlasciciel* admin)
{
	admin->zmianaHasla("1234");
	admin->set_wiek(22);
	admin->set_adres("Ulica w krakowie");
	admin->set_imie("Stefan");
	admin->set_nazwisko("Zapalka");
	admin->set_nrTelefonu("123456789");
}