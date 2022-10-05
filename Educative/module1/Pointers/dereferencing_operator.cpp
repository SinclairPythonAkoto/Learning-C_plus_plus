#include <iostream>
using namespace std;

int main() {
    cout <<"\t\t\tThe deferencing operator" << endl;

    int Alice = 5;
    // Declares a pointer variable John that can point to int value
    int *John = nullptr;
    // Stores the address of Alice in John
    John = &Alice;
    // Prints value of Alice
    cout << "Value of Alice = " << Alice << endl;
    // Prints value (address of Alice) of John 
    cout << "Value of John = " << John << endl;
    // Prints value from pointer
    cout << "Value of Alice = " << *John << endl;

    return 0;
}


/*
When we store an address to a pointer, we can also gain access to the value(s) stored
in the address.
    - To unpack the values in a pointer we use '*' before the given varaible
    - Trying to dereference an uninitialised / null pointer you will cause an error
*/