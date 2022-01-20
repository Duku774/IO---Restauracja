#include <exception>
using namespace std;

#ifndef __Gotowka_h__
#define __Gotowka_h__

#include "Platnosc.h"

// class Platnosc;
class Gotowka;

class Gotowka: public Platnosc {
	public: 
		void zatwierdzeniePlatnosci(double aOtrzymane, double aWymagane);
};

#endif
