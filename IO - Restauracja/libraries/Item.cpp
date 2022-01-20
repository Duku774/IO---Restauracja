#include <exception>
#include <vector>
using namespace std;

#include "Item.h"
#include "Zamowienie.h"
#include "Danie.h"

void Item::setItem(int aIlosc, Danie* aDanie)
{
	_ilosc = aIlosc;
	_rodzaj_Dania_ = aDanie;
}