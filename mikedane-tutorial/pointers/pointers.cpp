#include <iostream>

using namespace std;

int main()
{

	int age = 35;
	double height = 5.11;
	string name = "Sinclair";

	cout << "Variables:" << endl;
	cout << age << endl;
	cout << height << endl;
	cout << name << endl;

	// printing pointers
	cout << "\nPointers:" << endl;
	cout << &age << endl;
	cout << &height << endl;
	cout << &name << endl;

	// pointer variables 
	int *pAge = &age;
	double *pHeight = &height;
	string *pName = &name;

	// printing pointer variables
	cout << "\nPointer Variables:" << endl;
	cout << pAge << endl;
	cout << pHeight << endl;
	cout << pName << endl;

	// dereferencing a pointer variable
	cout << "\nDereferencing Pointer Variables:" << endl;
	cout << *pAge << endl;
	cout << *pHeight << endl;
	cout << *pName << endl;

	return 0;
}
