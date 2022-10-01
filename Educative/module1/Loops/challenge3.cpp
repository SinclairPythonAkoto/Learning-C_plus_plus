/*
In this challenge we will convert a decimal number to a binary number.

Input:
    int decimal = 10;

Outcome:
    binary = 1010
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCHALLENGE 3" << endl;
    cout << "\t\tConvert decimal number to binary" << endl;
    int decimal = 10, binary = 10 ;
    int remainder, product = 1;
    cout << "Decimal Number = " << decimal << endl;
    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    cout << "Binary Number = " << binary;
    return 0;
}
