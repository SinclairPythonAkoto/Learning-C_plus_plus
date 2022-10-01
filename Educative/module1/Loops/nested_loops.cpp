#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tNested Loops" << endl;
    int inner, outer;
    // outer for loop
    for (outer = 6; outer <= 8; outer++) {
        cout << "Table of " << outer << " is:" << endl;
        // inner for loop
        for (inner = 1; inner <= 5; inner++) {
            cout << outer << " * " << inner << " = " << (outer * inner) << endl;
        }
    }

    return 0;
}

/*
A loop inside of another loop is known as a nested loop.
There are different types of nested loops:
    - Nested while loops
    - Nested do-while loops
    - Nested for loops

- We can have multiple loops inside a nested loop

Here is how the syntax would look like:

    for (outer = 0; outer < 2; outer++) {
        code for outer loop goes here

        for (inner = 0; inner < 2; inner++) {
            code for inner loop goes here
        }
    }

*/