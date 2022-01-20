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
	public: 
		Danie* _unnamed_Danie_;

		void dodajPotrawe(int aId, string nazwaDania, double cenaDania);
		void usunPotrawe(int aId); 
		void pokazMenu();

};

#endif
