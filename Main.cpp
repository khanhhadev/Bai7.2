#include "Triangle.h"
#include "Quadrilateral.h"

int main()
{
	int n;
	cout << "\nEnter number of Triangle: "; 
	cin >> n;
	Triangle* TriArr = new Triangle[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter size of Triangle number " << i + 1;
		cin >> *(TriArr + i);
	}
	
	cout << "\n\nList of Pytago Triangle:\n";
	for (int i = 0; i < n; i++)
	{
		if ((TriArr + i)->isPytago()) cout << *(TriArr + i) <<"satisfies the Pythagoras theorem";
	}
	cout << endl;
	delete[] TriArr;
	return 0;
}