#include <iostream>

using namespace std;

int main()
{
	double num1, num2;
	char op;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2; 

	double result;

	if(op == '+'){
		cout << num1 + num2 << endl;
	} else if(op == '-'){
		cout << num1 - num2 << endl;
	} else if(op == '/'){
		cout << num1 / num2 << endl;
	} else if(op == '*'){
		cout << num1 * num2 << endl;
	} else {
		cout << "Invalid Operator" << endl;
	}
}
