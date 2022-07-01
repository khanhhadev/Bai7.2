#include "Quadrilateral.h"

float Quadrilateral::Perimeter()
{
	float Peri = 0;
	for (int i = 0; i < m_EgdeNum; i++)
	{
		Peri += *(m_EgdeSize + i);
	}
	return Peri;
}

istream& operator >> (istream& input, Quadrilateral& M)
{
	cout << "\nEnter size of " << M.m_EgdeNum << " edges Quadrilateral: ";
	int i = 0;
	while (i < M.m_EgdeNum) input >> M.m_EgdeSize[i++];
	return input;
}

ostream& operator << (ostream& output, const Quadrilateral& M)
{
	output << "\nSize of edges in Quadrilateral: ";
	int i = 0;
	while (i < M.m_EgdeNum) output << M.m_EgdeSize[i++];
	return output;
};