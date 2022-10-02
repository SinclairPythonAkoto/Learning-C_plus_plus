#include <iostream>
using namespace std;

int make_juice(int water = 1, int fruit = 3) {
    int juice;
    juice = water + fruit;
    cout << "Your juice is ready" << endl;
    return juice;
}

int main() {
    cout << "\t\t\tFuntion Parameters" << endl;
    
    int juice_glass;
    // calls the function without any parameters
    juice_glass = make_juice();
    cout << "Number of juice glass = " << juice_glass << endl;
    // calls the function with 1x parameter
    juice_glass = make_juice(5);
    cout << "Number of juice glass = " << juice_glass << endl;
    // using both parameters
    juice_glass = make_juice(2, 5);
    cout << "Number of juice glass = " << juice_glass << endl;

    return 0;
}

/*
We can add default values to our function by assigning values to our 
parameters when we declare them.  This is known as a formal parameter.
    - With the default we can choose which parameter to specify by using the
      parameter name followed by the value.
    - We can just pass in the value without the variable name but it will
      be applied to the first function parameter.

Define function:
    return_function_type function_name ( formal parameter / parameter = value ) ;

Call function:
    function_name ( actual parameter / argument ) ;

*/