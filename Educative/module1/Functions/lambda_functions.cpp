#include <iostream>
using namespace std;

// normal function
int addFunc(int a, int b){ return a + b; }

int main(){
    cout << "\t\t\tLambda Functions 1" << endl;
    
    // lambda function
    auto addObj = [](int a, int b){ return a + b; };

    addObj(3, 4) == addFunc(3, 4);

    return 0;
}

/*
A lambda is an anonymous function - a function without a name.
This means it can be written in-place and doesn't require you 
to declare it outside of the scope of the main function.

Lambdas can be treated as data, hence they can be stored or
copied into variables.

The general syntax of a lambda would be:

    [ captured variable ] ( optional parameters ) { code for function goes here }

- Lambdas are function objects that get automatically created by the compiler
- A function object is basically a class instance where the operator() is overloaded
  - This makes the function object behaves like a function
  - The function object is an object so has a state.

*/