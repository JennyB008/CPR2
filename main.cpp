#include "Vektor2D.h"
#include <iostream>

int main() {
	{
		Vektor2D a(3, 1), b(1, 2);
		a.addiere(b);
		std::cout << a.betrag() << std::endl;
		a.ausgabe();

		/*
		* Aufgabenblatt 3
		*/
		Vektor2D *z = new Vektor2D(-3, 1);
		Vektor2D *w = new Vektor2D();

		a.addiere(*z);
		a.ausgabe();
		w->addiere(*z);
		w->ausgabe();
		w->addiere(b);
		w->ausgabe();
		/*
		*  Kopien von addieren usw werden auch gelöscht
		*/

		Vektor2D u(1, 2);
		u.kopiereIn(*w);
		u.kopiereIn(a);
		w->ausgabe();
		a.ausgabe();

		Vektor2D::tausche(z, &a);
		z->ausgabe();
		a.ausgabe();

		/*
		* Aufgabenblatt 4
		*/

		Vektor2D v(1, 2), h(3, 4);
		Matrix M;
		Matrix *Mpointer;
		M = v;
		Mpointer = &v;
		std::cout << "Ausgabe von M und ueber Mpointer" << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();
		v.addiere(h);
		std::cout << "Ausgabe von v nach Addieren" << std::endl;
		v.ausgabe();
		std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();

		/*
		* Aufgabenblatt 5
		*/

		Vektor2D v5(1, 1), v51(-5, 0);
		std::cout << std::endl;
		std::cout << v5.winkel(v51) << std::endl;
		std::cout << "ist der Winkel" << std::endl;

	}
	/*
	* Aufgabenblatt 4
	* Zahl geht ins Minus, da je nach Anzahl der Kopien ( addiere, kopiereIn, ...) der Konstruktor unterschiedlich oft
	* aufgerufen wird
	*/
	std::cout << Matrix::getCounter() << std::endl;
	system("PAUSE");

}
