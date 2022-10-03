/*
Write a recursive function to fund the power of a number
- the function should be called power 
- it should return an int type and accept two parameters (base & exponent)

*/ 

#include <iostream>
using namespace std;

int power (int base , int exponent ) {
    if (exponent == 0){
        return 1;
    }
    else {
        return base * power(base, exponent-1);
    }

    return 0;
}

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tFind the power of a number" << endl;
    
    int result;
    int base = 2, expo = 3;
    
    result = power(base, expo);
    
    cout << base << " rasied to the power of " << expo << " = " << result;
    
    return 0;
}