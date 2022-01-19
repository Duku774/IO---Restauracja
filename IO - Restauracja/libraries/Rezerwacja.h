#include <exception>
#include <string>
using namespace std;

#ifndef __Rezerwacja_h__
#define __Rezerwacja_h__

// #include "Klient.h"
// #include "Stolik.h"

class Klient;
class Stolik;
class Rezerwacja;

class Rezerwacja
{
private: string _dataRezerwacji;
private: string _data;
private: string _nazwisko;
private: int _godzina;
private: int _nrRezerwacji;
private: int _Ilosc_ludzi;
private: int czyIstnieje;
public: Klient* _unnamed_Klient_;
public: Stolik* _unnamed_Stolik_;

public: int nowaRezerwacja(string aNazwisko, int aGodzina, string aData, int aIlosc_ludzi);

public: void zmianaRezerwacji();

public: void usunRezerwacjie();

public: void statusRezerwacji();
};

#endif
