#include <exception>
using namespace std;

#ifndef __Platnosc_h__
#define __Platnosc_h__

// #include "Zamowienie.h"

class Zamowienie;
class Platnosc;

class Platnosc
{
	private: double _suma;
	private: bool _czyKarta;
	public: Zamowienie* _unnamed_Zamowienie_;

	public: bool wyborPlatnosci();
};

#endif
