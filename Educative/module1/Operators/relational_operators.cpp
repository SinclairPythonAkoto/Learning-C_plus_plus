#include <iostream>

using namespace std;

int main() 
{
    cout << "\t\t\tRelational Operators" << endl;
    cout << "\t\t0 = false" << endl;
    cout << "\t\t1 = true" << endl;
    int operand1 = 50;
    int operand2 = 26;

    cout << "\nChecking integers:" << endl;
    cout << "operand1 = " << operand1 << ", operand2 = " << operand2 << endl;
    cout << "Is operand1 less than operand2? " << (operand1 < operand2) << endl;
    cout << " Is operand1 less than operand2? " << (operand1 < operand2) << endl;
    cout << " Is operand1 less than or equal to operand2? " << (operand1 <= operand2 )<< endl;
    cout << " Is operand1 greater than operand2? " << (operand1 > operand2) << endl;
    cout << " Is operand1 greater than or equal to operand2? " << (operand1 >= operand2) << endl;
    cout << " Is operand1 equal to operand2? " << (operand1 == operand2) << endl;
    cout << " Is operand1 not equal to operand2? " << (operand1 != operand2) << endl;

    string str_operand1 = "Microsoft";
    string str_operand2 = "Samsung";
    cout << "\nChecking strings:" << endl;
    cout << "str_operand1 = " << str_operand1 << ", str_operand2 = " << str_operand2 << endl;
    cout << "Is str_operand1 greater than str_operand2? " << (str_operand1 > str_operand2) << endl;
    cout << "Is str_operand1 equal to str_operand2? " << (str_operand1 == str_operand2) << endl;
    cout << "str_operand1 is NOT equal to str_operand2? " << (str_operand1 != str_operand2) << endl;

}

/*
- Relational operators compares the value of two operands.
- The ouput of a relational operator is a bool data type
- Retruns 1 if true, 0 if false

>  :    Greater than            : returnss 1 if operand1 is greater than operand2
>= :    Greater or equal to     : returns 1 if operand1 is greater than or equal to operand2
<  :    Less than               : returns 1 if operand1 is less than operand2
<= :    Less or equal to        : returns 1 if operand1 is less or equal to operand2
== :    Equal to                : returns 1 if operand1 is equal to operand2
!= :    Not equal to            : returns 1 if operand1 is not equal to operand2

*/