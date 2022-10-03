/*
- create a void function called minimum
- parameter will accept 2x values by reference
- it will compare number1 and number2 and set the smallest to -1
- if both are equal then both set to -1

*/ 

#include <iostream>
using namespace std;

void minimum (int &number1, int &number2){
    if (number1 > number2){
        number2 = -1;
    }
    else if ( number1 < number2){
        number1 = -1;
    }
    else {
        number1 = -1;
        number2 = -1;
    }
}

int main() {
    // Write C++ code here
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tFind the smallest number" << endl;
    
    int number1 = 9;
    int number2 = 95;
    int mini_num;
    
    cout << "\nBefore function call:" << endl;
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    minimum(number1, number2);
    cout << "\nAfter function call:" << endl;
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
    
    return 0;
}