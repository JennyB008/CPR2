#ifndef __VEKTOR_H__
#define __VEKTOR_H__

#include "Matrix.h"

class Vektor :
	public Matrix {
public:
	Vektor();

	virtual ~Vektor();

	float betrag(void);

	int skalarprodukt(Vektor v);

	double winkel(Vektor v);

	void addiere(Vektor v);
};

#endif
