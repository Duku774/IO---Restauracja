#include <exception>
using namespace std;

#include "Gotowka.h"
#include "Platnosc.h"

void Gotowka::zatwierdzeniePlatnosci(double aOtrzymane, double _suma) {
	if (aOtrzymane < _suma) {
		throw "Zaplacono za malo";
	}
	else {
		double reszta = _suma - aOtrzymane;
	}

}

