#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tDeclaring a function" << endl;
    // function declaration
    int make_juice(int water_glass, int fruit);

    // another way to declare a function
    int make_juice2(int, int);

    return 0;
}

/*
When declaring a function we have to specify the data type it will return, then 
the function's name, followed by the function's parameters in parenthesis.
    - When declaring the parameters, we also have to include their data type.
    - We can also just include the paramter data types without their names.

The syntax for declaring a function:

    return_data_type function_name ( function_parameters ) ;

eg.
    string display_name(string name, string gender);

REMEMBER!!
When creating a function we have to include:
    - The return type of the function
    - The function name 
    - The number of parameters and their data types
    
*/