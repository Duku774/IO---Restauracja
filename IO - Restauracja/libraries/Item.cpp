#include <exception>
#include <vector>
using namespace std;

#include "Item.h"
#include "Zamowienie.h"
#include "Danie.h"

public void Item::getItem(string a_ilosc ) {
    _ilosc = a_ilosc
    cout << "Wprowadz numer zamóweinia: " << endl;
    	cin >> _nrzamówienia;
    	czyIstnieje = 0;
}