#include <iostream>

using namespace std;

int main() {
    cout << "\t\t\tArithmetic Operators" << endl;
    // initialise operand1 and operand2
    float operand1 = 50.0;
    float operand2 = 26.0;

    // display original values
    cout << "Values of your operands are: " << endl;
    cout << "operand1 = " << operand1 << ", operand2 = " << operand2 << endl;

    // add & display result
    cout << "Addition = " << operand1 + operand2 << endl;

    // subtract & display result 
    cout << "Subtraction = " << operand1 - operand2 << endl;

    // multiply & show results
    cout << "Multiply = " << operand1 * operand2 << endl;

    // divide & show results
    cout << "Division = " << operand1 / operand2 << endl;

    // modulus & display results
    // cout << "Modulus = " << operand1 % operand2 << endl;
}

/*
Arithmetic operators are used to perform numeric operations on operands.

Here is a list of the commom operators in C++

 + :    Addition        :   Adds operand1 to operand2
 - :    Subtraction     :   Substracts operand2 from operand 1
 * :    Multiplication  :   Multiplies operand1 and operand2
 / :    Division        :   Divides operand1 by operand2
 % :    Modulus         :   Returns remainder after dividing operand1 by operand2

- Notice you CANNOT use modulus with floats so we have commented out line 28.
- We can also apply arithmetic operators to char data type operands.
  - The operators operate on the ASCII value of the characters 
    (meaning it does the math operatoion on the character's number from the ASCII table)
    eg.
        int main(){
            char operand1 = 'n';
            char operand2 = 'C';
            cout << "Division = " << operand1 / operand2 << endl;
            cout << "Modulus = " << operand1 % operand2 << endl;
        }

        If we refer to teh ASCII table, n = 110 and C = 67.
        The result would be:
        Division = 1
        Modulus = 43

- When we check strings, C++ will compare each character for their ASCII values.
*/