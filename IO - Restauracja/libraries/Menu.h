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

	static void dodajPotrawe(int aId, string nazwaDania, double cenaDania);

	static void usunPotrawe(int aId);

	static void pokazMenu();

	static void setup();

};

#endif
