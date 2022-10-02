#include <iostream>
using namespace std;

// declare function
int make_juice(int water, int fruit);

int main() {
    cout << "\t\t\tDefining a function" << endl;
    return 0;
}

// define function 
int make_juice(int water, int fruit) {
    int juice;
    juice = water + fruit;
    cout << "Your juice is ready" << endl;
    // returns end result of function
    return juice;
}

/*
When defining a function we create the code block whcih the function 
will execute.

The syntax of defining a function:

    return_data_type function_name ( function_parameters )
    {
        the code for the function goes here
    }

eg.
    int number_sum(int num1, int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
*/