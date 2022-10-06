#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tAllocation of dynamic memory" << endl;
    // declare pointer variable
    int *ptr = nullptr;

    // dynamically reserved int
    ptr = new int;

    // store 100 in dynamic space
    *ptr = 100;

    // print value from ptr
    cout << *ptr;

    return 0;
}

/*
In C++ we are able to create dynamic memory variables, where we can 
create the variable and then add variables to it later on.

When the dynamic variable is first created, we use the 'new' keyword
which tells C++ to save some memory to the variable when it is used.

The new operator allocates memory in bytes during the run time the
free store.

Syntax for getting memory during the run-time:

    new data_type ;

We can can also store a pointer to the dynamic variable

    data_type *pointer = new data_type

We use the dereferencing operator - we use the astrisk.

*/