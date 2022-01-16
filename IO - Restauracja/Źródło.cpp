#include <iostream>
using namespace std;
#include "libraries/Zamowienie.h"
#include "libraries/Wlasciciel.h"
int main()
{
	Wlasciciel admin;
	admin.zmianaHasla("1234");
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
		break;

	};
	}
	return 0;
}