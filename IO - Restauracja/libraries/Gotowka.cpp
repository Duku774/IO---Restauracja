#include <exception>
#include <iostream>
using namespace std;

#include "Gotowka.h"
#include "Platnosc.h"

void Gotowka::zatwierdzeniePlatnosci(double aOtrzymane, double _suma) {
	if (aOtrzymane < _suma) {
		cout << "Zaplacono za malo" << endl;
	}
	else {
		double reszta = _suma - aOtrzymane;
	}

}

