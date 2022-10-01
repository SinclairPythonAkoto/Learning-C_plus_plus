#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tConditional Operator" << endl;
    int money = 10;
    string result;
    // ternary operator 
    result = (money >= 20) ? "You can gift a watch" : "You can gift a pen";
    // print result
    cout << result;
    return 0;
}

/*
The conditional operator evaluates the given condition and returns the result accordingly.
- The coditional operates on the three operands. This is a ternary operator.
- The conditional operator operates like to an if-else statement.

Here is the syntax:

    variable = (condition) ? statement1 : statement2 ;

*/