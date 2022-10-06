#include <iostream>
using namespace std;

void passPointer(int *number) {
    // multiply number by 10
    *number = *number * 10;
    cout << "Value of number inside the function = " << *number << endl;
}

int main() {
    cout << "\t\t\tFunctions and Pointers" << endl;

    int num = 10;
    cout << "Value of number before function call = " << num << endl;

    // call function
    passPointer(&num);
    cout << "Value of number after the function call = " << num << endl;

    return 0;
}

/*
We can also pass pointers to a function! to do this when declaring the function we 
need to pass the pointer as a parameter. When doing this we need to make sure we pass the 
pointer using the '*' (*var_ptr); then when we call the function, we pass an argument 
using the variable's address-of operator.

Syntax to declare a pointer in a function:

    data_type function_name ( *variable ) {
        code for function goes here
    }

Syntax to use a pointer when calling the function

    function_name ( &variable );

REMEMBER!! 
    - Always use void when creating a function that doesn't return anything
    - When using a pointer in the function, use *variable_name everytime when
      refering to your pointer varible.
    - You need to use the address-of of the variable when passign it as an 
      argument to the function.
*/