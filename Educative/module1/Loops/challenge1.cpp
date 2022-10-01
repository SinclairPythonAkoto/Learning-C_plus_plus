/*
Your task is to calculate the power of a number.
    - Create a base variable equal to 2
    - Create a variable called exponent, make it equal to 3

The output should look like:
    result = 8
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tCalculating the power of a number with a for loop" << endl;
    int base = 2, exponent = 3, result = 1;
    for (int counter = 1; counter <= exponent; counter++) {
        result *= base;
    }
    cout << "result = " << result << endl;
}