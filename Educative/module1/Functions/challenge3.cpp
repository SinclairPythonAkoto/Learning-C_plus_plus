/*
Build a calculator
- create a function that will take 3x parameters.
- the name of the function should be called test
- 2x double and 1x char as parameters
- the double will be number1 & number2
- the char will be operate
- operate can take +, -, /, * 
- if they use any other value other than operate 
  it should return -1
  - each function should retrun the result to the user in the function
  - store your answer in result (this should be inside the function)
  
 i should create a switch from the operate parameter
 if the user enters incorrect operate then renturn -1
*/ 

#include <iostream>
using namespace std;

double add(double number1, double number2){
    double result = number1 + number2;
    return result;
}

double subtract(double number1, double number2){
    double result = number1 - number2;
    return result;
}

double multiply(double number1, double number2){
    double result = number1 * number2;
    return result;
}

double divide(double number1, double number2){
    double result = number1 / number2;
    return result;
}

double test(double number1, char operate, double number2){
    double result;
    switch(operate){
        case '+':
            result = add(number1, number2);
            break;
        case '-':
            result = subtract(number1, number2);
            break;
        case '*':
            result = multiply(number1, number2);
            break;
        case '/':
            result = divide(number1, number2);
            break;
        default:
            result = -1;
    }
    return result;
}

int main() {
    // Write C++ code here
    cout << "\t\t\tCHALLENGE 3" << endl;
    cout << "\t\tCreate a calculator function" << endl;
    
    double num1 = 5;
    char operate = '+';
    double num2 = 3;
    double result;
    
    cout << num1 << operate << num2 << " = ";
    result = test(num1, operate, num2);
    cout << result;
    
    return 0;
}