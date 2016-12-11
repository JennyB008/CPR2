#include "Matrix.h"
#include <iostream>

static int counter = 0;

Matrix::Matrix(void) : m_Zeilen(2), m_Spalten(1) {
	std::cout << "Standardkonstruktor wird aufgerufen." << std::endl;
	m_Element[0] = m_Zeilen;
	m_Element[1] = m_Spalten;
	counter += 1;
}

Matrix::~Matrix() {
	std::cout << "Matrix ";
	ausgabe();
	std::cout << "wird zerstoert." << std::endl;
	counter -= 1;
}

void Matrix::ausgabe() {
	for (int i = 0; i < m_Zeilen * m_Spalten; i++)
		std::cout << m_Element[i] << " ";
	std::cout << std::endl;
}

int Matrix::getCounter() {
	return counter;
}
