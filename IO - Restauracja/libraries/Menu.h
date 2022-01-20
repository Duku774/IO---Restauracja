#include <exception>
#include <vector>
using namespace std;

#ifndef __Menu_h__
#define __Menu_h__

#include "Danie.h"

class Danie;
class Menu;

class Menu
{
	public: Danie* _unnamed_Danie_;
	public: std::vector<Danie*> _unnamed_Danie_2;

	public: void dodajPotrawe(int aId, string nazwaDania, double cenaDania);

	public: void usunPotrawe(int aId);

	public: void pokazMenu();

	public: void dodajDanieDoMenu();

	public: void usunDanieZMenu();
};

#endif
