/*
Write a program that will calculate the nth Fibonacci number in the 
Fabonacci series.
    - The function should be called fibonacci, which should be an int data
      type that accepts an int parameter
    - The function will return a value of int type

Fabonacci series:
    0, 1, 1, 2, 3, 5, 8, 13, ...

    fibonacci(0) = 0
    fibonacci(1) = 1
    fibonacci(2) = 1
    *this referes to the index in series 

    fibonacci (n) = fibonacci(n-1) + fibonacci(n-2)
*/

#include <iostream>
using namespace std;

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    else {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main() {
    cout << "\t\t\tCHALLENGE 3" << endl;
    cout << "\t\tCalculate fibonacci number" << endl;

    int number = 4;
    int result;
    result = fibonacci(4);
    cout << number << "th Fibonacci number = " << result;

    return 0;
}