#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Polygon {
protected:
	int m_EgdeNum;
	int* m_EgdeSize = nullptr;
public:
	Polygon();
	Polygon(int num);
	~Polygon();
	virtual float Perimeter();
	void PrintSize();
	friend istream& operator >> (istream& input, Polygon& M);
	friend ostream& operator << (ostream& output, const Polygon& M);
};
