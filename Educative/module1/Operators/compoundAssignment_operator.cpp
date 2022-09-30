#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tAssignment and Compound Assignment Operators" << endl;
    int operand1 = 50;
    int operand2 = 26;
    cout << "Before using the compound assignment operator:" << endl;
    cout << "operand1 = " << operand1 << endl;
    operand1 += operand2;
    cout << "After using the compound assignment operator:" << endl;
    cout << "operand1 += operand2 = " << operand1 << endl;

    return 0;
}

/*
Assignment operator
In C++ there is only one assignment operator ( = sign)

Compound assignment operator 
The compound assignment operator is used to perform an operation and then assign the 
result to the operand on the left hand side.

We can view a list of some of the compound assignment operators:

+= :    Addition & assignment           : adds operand1 & operand2, then assigns updated value to oprand1
-= :    Subtraction & assignment        : subtracts operand2 from operand1, then assigns updated value to operand1
*= :    Multiplication & assignment     : multiplies operand1 & operand2, then assigns updated value to operand1
/= :    Division & assignment           : divide operand1 by operand2, then assign updated value to operand1
%= :    Modulus & assignment            : returns remainder after dividing operand1 by operand2, then assigns updated value to operand 1

*/