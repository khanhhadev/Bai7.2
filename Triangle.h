#pragma once
#include "Polygon.h"

class Triangle :public Polygon {
private:
	int m_EgdeNum;
public:
	Triangle();
	float Perimeter();
	float Area();
	bool isPytago();
	void sortEdges();
	friend istream& operator >> (istream& input, Triangle& M);
	friend ostream& operator << (ostream& output, const Triangle& M);
};
