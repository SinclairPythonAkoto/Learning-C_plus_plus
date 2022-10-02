#include <iostream>
using namespace std;

void passValue(int number) {
    number = number * 10;
    cout << "Value of number inside the function = " << number << endl;
}
void cube(int num) {
    num = num * num * num;
    cout << "number = " << num << endl;
}

int main() {
    cout << "\t\t\tPass by value in functions" << endl;
    
    cout << "\nExample 1" << endl;
    int number = 10;
    cout << "Value of number before the function call = " << number << endl;
    passValue(number);
    cout << "Value of number after the function call = " << number << endl;

    cout << "\nExample 2" << endl;
    int num = 5;
    cube(num);
    cout << "number = " << num << endl;

    return 0;
}

/*
Pass by value is just like sending a copy of a file to another person

In this case we are passing a copy of the variable to the function as an 
formal parameter.
    - This means that the actual parameter / argument in the main function is not changed
    - In C++, by default actual parameters are passed by value into the function
*/