#ifndef __VEKTOR2D_H__
#define __VEKTOR2D_H__

#include "Vektor.h"

class Vektor2D :
	public Vektor {
public:
	Vektor2D();

	Vektor2D(float x, float y);

	static void tausche(Vektor2D* a, Vektor2D* b);

	void kopiereIn(Vektor2D v);

	void ausgabe();

	virtual ~Vektor2D();
};

#endif
