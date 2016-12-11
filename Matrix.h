#ifndef __MATRIX_H__
#define __MATRIX_H__

class Matrix {
protected:
	float m_Element[2];
	int m_Zeilen;
	int m_Spalten;
public:
	Matrix(void);

	virtual ~Matrix();

	virtual void ausgabe();

	static int getCounter();
};

#endif
