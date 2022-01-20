#include <exception>
using namespace std;

#ifndef __Karta_h__
#define __Karta_h__

#include "Platnosc.h"

// class Platnosc;
class Karta;

class Karta: public Platnosc
{
	private:
		int Pin = 0;

	public:
		void setPin();
		void autoryzacja(int aPin);
};

#endif
