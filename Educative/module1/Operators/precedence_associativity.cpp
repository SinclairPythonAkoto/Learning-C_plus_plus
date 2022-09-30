#include <iostream>

using namespace std;

int main()
{
    // precedence
    cout << 4-(8+10) * 3 << endl;

    // associativity
    cout << 4 - 8 + 10 + 3;
}

/*
Precedence
In case there is more than one operator in experssion, preceedence determines the 
order of which operators should be evaluated.
- The operator with the higher preceedence will be evalueated first in an expression,
  if there are parenthesis then we evaluate that first.
eg.
    4 - (8 + 10) * 3

    1. 8 + 10 = 18 => 4 - 18 * 3
    2. 18 * 3 = 54 => 4 - 54
    3. 4 - 54 = 50 

Associativity
This determines the order in which the operators with the same 
precedence should be evaluated.
- In left associativity, we evaluate the exoression from left to right if
  two or more operators have the same preceedence
eg.
    Addition & subtraction have the same precedence.  So if they appear 
    in the same expression, then we evaluate from left to right.

- In right associativity, we evaluate the expression from right to left
  if two or more operators have the same precedence.
- Addition & subtraction have left associateivity
eg.
    4 - 8 + 10 + 3

    1. 4 - 8 = -4 => -4 + 10 + 3
    2. -4 + 10 = 6 => 6 + 3
    3. 6 + 3 = 9

The operators below are in order of their precedence from the highest to lowest.
The operators that are listed in the same row have the same precedence.

Multiplicative  :   * / %                               :   Left to right
Additive        :   + -                                 :   Left to right
Shift           :   << >>                               :   Left to right
Equality        :   == !=                               :   Left to right
Bitwise AND     :   &                                   :   Left to right
Bitwise XOR     :   ^                                   :   Left to right
Bitwise OR      :   |                                   :   Left to right
Logical AND     :   &&                                  :   Left to right
Logical OR      :   ||                                  :   Left to right
Conditional     :   ?:                                  :   Right to left
Assignment      :   = += -= *= /= %= >>= <<= &= ^= |=   :   Right to left

*/