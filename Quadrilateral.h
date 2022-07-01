#pragma once
#include "Polygon.h"

class Quadrilateral :public Polygon {
private:
	const int m_EgdeNum = 4;
public:
	float Perimeter();
	float Area();
	friend istream& operator >> (istream& input, Quadrilateral& M);
	friend ostream& operator << (ostream& output, const Quadrilateral& M);
};
