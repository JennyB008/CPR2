#include "Vektor.h"
#include <math.h>

Vektor::Vektor()
{
}

Vektor::~Vektor()
{
}

float Vektor::betrag()
{
	float b = skalarprodukt(*this);
	return sqrt(b);
}

void Vektor::addiere(Vektor v)
{
	for (int i = 0; i < m_Zeilen * m_Spalten; i++)
	{
		m_Element[i] += v.m_Element[i];
	}
}

int Vektor::skalarprodukt(Vektor v)
{
	int sum = 0;
	if (v.m_Spalten == m_Spalten && v.m_Zeilen == m_Zeilen)
		for (int i = 0; i < m_Zeilen * m_Spalten; ++i)
			sum += m_Element[i] * v.m_Element[i];
	else
		return nan("NAN");
	return sum;
}

double Vektor::winkel(Vektor v)
{
	if (m_Zeilen == v.m_Zeilen && m_Spalten == v.m_Spalten)
	{
		double skalarprodukt = this->skalarprodukt(v);
		double vektor1Betrag = this->betrag();
		double vektor2Betrag = v.betrag();

		double zwischenErgebnis = 0.0;
		zwischenErgebnis = (skalarprodukt) / (vektor1Betrag * vektor2Betrag);

		double winkel = acos(zwischenErgebnis);

		winkel = (winkel * 180) / 3.141592653589793238462643;

		return winkel;
	}
	else
		return nan("NAN");
}
