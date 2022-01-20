#include <exception>
#include <iostream>
using namespace std;

#include "Gotowka.h"
#include "Platnosc.h"

/*
Metoda zatwierdzeniePlatnosci
Po podaniu otrzymanej sumy pienedzy oraz oczekiwanej sumy metoda zwraca reszte
Lub gdy aOtrzymane jest za male wyswietli odpowiedni komunikat
*/

void Gotowka::zatwierdzeniePlatnosci(double aOtrzymane, double aWymagane) {
	if (aOtrzymane < aWymagane) {
		cout << "Zaplacono za malo" << endl;
	}
	else {
		double reszta = aWymagane - aOtrzymane;
	}

}

