#include <iostream>
using namespace std;

int main() {
  
  bool operand1 = 2 > 3;
  bool operand2 = true;
  cout << "Values of operands are:";
  
  cout << " operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
  cout << "operand1 && operand2 = " << (operand1 && operand2) << endl;
  cout << "operand1 || operand2 = " << (operand1 || operand2) << endl;
  cout << "!operand1 = " << (!operand1) << endl;
  cout << "!operand2 = " << (!operand2) << endl;
  
  return 0;
}

/*
Logical operators are either used to combine two or more boolean operands, or to 
negate the result of the originak boolean operand.

- The difference between relational & logical operators is that relational operators
  can only compare the value of two operands; whereas a logical operator can compare
  as many operands as you want!

- Logical operators are generally used to control the flow of the program.
- They allow the program to decide the flow of execution depending on if it's conditions are met.

Here is a list of logical operators:

&& :    AND     : returns 1 if operand1 and operand2 are both true
|| :    OR      : returns 1 if either operand1 or operand2 (or both) are true
!  :    NOT     : negates the value of operand1

*/