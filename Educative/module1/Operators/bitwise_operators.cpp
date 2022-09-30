#include <iostream>
using namespace std;

int main() 
{
    cout << "Bitwise Operators" << endl;
    int operand1 = 3;
    int operand2 = 2;
    cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
    // bitwise AND
    cout << "operand1 & operand2 = " << (operand1 & operand2) << endl;
    // Bitwise OR
    cout << "operand1 | operand2 = " << (operand1 | operand2 )<< endl;
    // Bitwise XOR
    cout << "operand1 ^ operand2 = " << (operand1 ^ operand2) << endl;
    
    operand1 = 2;
    operand2 = 1;

    // right shift
    cout << "operand1 >> operand2 = " << (operand1 >> operand2) << endl;
    // left shift
    cout << "operand1 << operand2 = " << (operand1 << operand2) << endl; 

    int operand = 5;
    // tilde operator
    cout << "2's complement of " << operand << " = " << ~operand<< endl;
  
    return 0;
}

/*
A bitwise operator performs bit-by-bit processing on the operands.

- Bitwise operators operate on binary numbers 
- They convert the number from decimal form to binary form, 
  perform the biwise operation, then retun the result after 
  converting back to a decimal form.

Bitwise AND
- & syntax : operand1 & operand2
- If the corresponding bits in both operands is 1, it returns 1.
  Otherwise it returns 0.

Bitwise OR
- | syntax : operand1 | operand2
- If the corresponding bit in at least one of the operands is 1,
  it returns 1. Otherwise it returns 0.

Bitwise XOR
- ^ syntax : opernad1 ^ operand2
- If the corresponding bits in both operands are opposite, it 
  returns 1.  Otherwise it returns 0.

Right shift
- >> is the syntax : operand1 >> operand2
- This is equivalent to dividing operand1 by 2**operand2 (2 to the power of operand2)
- This essitially shifts all the digits from the binary number to right by 1 place
  - 10 --> 01 --> 1
  - Here in the binary number the value 1 would shift to the right

Left shift
- << is the syntax : operand1 << operand2
- The same as multiplying operand1 by 2**operand2 (2 to the power of operand2)
- This moves all the digits in the bits to the right
  - 10 --> 100 --> 4

Tilde operator
- ~ is the syntax : ~operand
- This inverts all the bits in a number
- So if a bit number is -5 it will change it to -5
- We must remember to add 1 to it to get the correct index position
- The tilde operator is also useful for image processing applicatoions 
  where we have to invert bits of an image 
*/