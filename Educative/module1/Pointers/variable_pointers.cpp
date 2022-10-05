#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tVariable pointers" << endl;
    int Alice = 5;
    // Declares a pointer variable John that can point to int value
    int *John;
    // Stores the address of Alice in John
    John = &Alice;

    cout << "Value of Alice = " << Alice << endl;
    cout << "Value of John = " << John << endl;

    return 0;
}

/*
A pointer is a variable that stores the address of another variable.
    - To create a pointer you must use the '*' in front of the variable you declare
    - When you declare the pointer, it either has to contain a valid address or 
      amount to a null value.
        - To create a null value we write 'nullptr'
    - When declaring a pointer we should always include 'ptr' in the to let whoever 
      working on the script know to use the variable accordingly.

The syntax to declare a pointer :

    data_type * variable_name - nullptr ;

or
    data_type * variable2 = & variable1 ;

REMEMBER!!
    - You have to include '&' reference the address
    - You have to reference '*' for the pointer
    - Both of these should be in front of the variable you want
*/