#include "Triangle.h"

Triangle::Triangle():m_EgdeNum(3)
{
	m_EgdeSize = new int[3];
};

void Triangle::sortEdges()
{
	if (m_EgdeSize[0] < m_EgdeSize[1]) swap(m_EgdeSize[0], m_EgdeSize[1]);
	if (m_EgdeSize[0] < m_EgdeSize[2]) swap(m_EgdeSize[0], m_EgdeSize[2]);
	if (m_EgdeSize[1] < m_EgdeSize[2]) swap(m_EgdeSize[1], m_EgdeSize[2]);
};

float Triangle::Perimeter()
{
	float Peri = 0;
	for (int i = 0; i < m_EgdeNum; i++)
	{
		Peri += *(m_EgdeSize + i);
	}
	return Peri;
}

float Triangle::Area()
{
	float Area = (float)Perimeter() / 2;
	int i = 0;
	for (; i < 3; i++)	Area *= (Area - m_EgdeSize[i++]);
	return sqrt(Area);
};

bool Triangle::isPytago()
{
	if (m_EgdeSize[0] * m_EgdeSize[0] == m_EgdeSize[1] * m_EgdeSize[1] + m_EgdeSize[2] * m_EgdeSize[2])
		return true;
	else return false;
};

istream& operator >> (istream& input, Triangle& M)
{
	cout << "\nEnter size of " << M.m_EgdeNum << " edges Triangle: ";
	int i = 0;
	while (i < M.m_EgdeNum) input >> *(M.m_EgdeSize + (i++));
	M.sortEdges();
	return input;
};

ostream& operator << (ostream& output, const Triangle& M)
{
	output << "\nSize of edges in Triangle: ";
	int i = 0;
	while (i < M.m_EgdeNum) output << *(M.m_EgdeSize + (i++)) << "\t";
	return output;
};