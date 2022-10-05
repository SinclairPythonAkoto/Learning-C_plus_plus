#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tAddress-of Operator" << endl;

    int john = 10;
    // print memory address of variable
    cout << "variable address = " << &john << endl;

    cout <<"variable value = " << john << endl;

    return 0;
}

/*
Everytime we create a variable, we give it a unique ID in the program's memory.

We use the address-of operator to find the memory address of a given variable.

    - '&' is the key to accessing the address from the variable
    - the '&' sign needs to be in front of the variable name.

The syntax to use an address-of operator:

    & variable_name ;
*/