#include <iostream>
#include "Vektor2D.h"

Vektor2D::Vektor2D(void) {
}

Vektor2D::~Vektor2D(void) {
}

Vektor2D::Vektor2D(float x, float y) {
	m_Element[0] = x;
	m_Element[1] = y;
}

void Vektor2D::kopiereIn(Vektor2D v) {
	v.m_Zeilen = m_Zeilen;
	v.m_Spalten = m_Spalten;
}

void Vektor2D::tausche(Vektor2D* a, Vektor2D* b)
{
	Vektor2D temp = *a;
	b->kopiereIn(*a);
	temp.kopiereIn(*b);
}

void Vektor2D::ausgabe() {
	std::cout << "Vektor2D:" << std::endl;
	Matrix::ausgabe();
}
