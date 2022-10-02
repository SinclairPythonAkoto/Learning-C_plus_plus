#include <iostream>
using namespace std;

// define function 
int make_juice(int water, int fruit);

int main() {
    cout << "\t\t\tCall Functions 1" << endl;
    cout << "\t\tCalling a function before defining it after the main function" << endl;

    int apples = 5;
    int water_glass = 3;
    int juice_glass;
    // call function and store in variable
    juice_glass = make_juice(water_glass, apples);
    cout << "Number of juice glass = " << juice_glass;

    return 0;
}

// define function
int make_juice(int water, int fruit) {
    int juice;
    juice = water + fruit;
    cout << "Your juice is ready" << endl;
    return juice;
}

/*
The functions created in a program are not executed until they are called.
Above you can see how the function is called (very similar to Python)
    - To call a function we write the function name, followed by the values of arguements
      in the parenthesis and the semi-colon
    - We can store the result from function into a variable
    - We can call the function explicitly without putting it into a variable
    - We can call the function from any other function in the program
    - If you look at call_function2.cpp you will see we can define the function at the same time when we declare it,
      meaning that we just have to call the function in the main function.  This also 
      means that we don't have to define the function below the main function.


The syntax to call a function:
    function_name( values of parameters );

eg.
    make_juice(5, 3);
*/