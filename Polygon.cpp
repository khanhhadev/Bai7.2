#include "Polygon.h"

Polygon::Polygon()
{}

Polygon::Polygon(int num):m_EgdeNum(num)
{
	m_EgdeSize = new int[m_EgdeNum];
}

//Polygon::Polygon()
//{
//	m_EgdeSize = new float[m_EgdeNum];
//}

Polygon::~Polygon()
{
	delete[] m_EgdeSize;
}

float Polygon::Perimeter()
{
	float Peri = 0;
	for (int i = 0; i < m_EgdeNum; i++)
	{
		Peri += *(m_EgdeSize + i);
	}
	return Peri;
};

istream& operator >> (istream& input, Polygon& M)
{
	cout << "\nEnter number of egdes in Polygon:";
	input >> M.m_EgdeNum;
	cout << "\nEnter size of " << M.m_EgdeNum << " edges in Polygon: ";
	int i = 0;
	while (i < M.m_EgdeNum) input >> M.m_EgdeSize[i++];
	return input;
}

ostream& operator << (ostream& output, const Polygon& M)
{
	output << "\nSize of edges in Polygon: "; 
	int i = 0;
	while (i < M.m_EgdeNum) output << M.m_EgdeSize[i++];
	return output;
};

void Polygon::PrintSize()
{
	cout << "Size of " << m_EgdeNum << " edges is:";
	for (int i = 0; i < m_EgdeNum; i++)
	{
		cout << "\t" << *(m_EgdeSize + i);
	}
}