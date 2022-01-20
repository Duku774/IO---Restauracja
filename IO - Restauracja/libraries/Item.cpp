#include <exception>
#include <vector>
using namespace std;

#include "Item.h"
#include "Zamowienie.h"
#include "Danie.h"

/*
Metoda setItem
Ustawia dane odnosnie dania w zamowieniu
_ilosc -> ilosc danej potrawy
_rodzaj_Dania -> jaka to potrawa
*/

void Item::setItem(int aIlosc, Danie* aDanie) {
    _ilosc = aIlosc;
    _rodzaj_Dania_ = aDanie;
}