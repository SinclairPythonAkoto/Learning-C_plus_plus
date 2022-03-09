#include <iostream>

using namespace std;

double power(double baseNum, double powNum);

int main()
{
	double num1;
	double num2;

	cout << "Pick a number: ";
	cin >> num1;
	cout << "Pick another number: ";
	cin >> num2;

	cout << num1 << " To the power of  " << num2 << " is: " << endl;
	cout << power(num1, num2) << endl;
	return 0;
}

double power(double baseNum, double powNum){
	int result = 1;
	for(int num = 0; num < powNum; num++){
		result = result * baseNum;
	}
	return result;
}
