#include <iostream>

using namespace std;

int main()
{
    cout << "C++ primitive data types: " << endl;

    // integer
    int integer_num = 100;

    // floating-point
    float float_num = 10.7;

    // double
    double double_num = 10.65417;

    // character
    char character = 'b';

    // boolean
    bool boolean = true;
}

/*
Integer data types
- Use the int keyword to define the integer data type
- An int type is allocated 4bytes of memory
- It can store any value from -2**32 to (2**31)-1
eg.
    int integer_number = 100;


Floating-point data type
- Use the float keyword to define a floating-point
- A float type is allocated 4bytes of memory
- It can store any value from -2**32 to (2**31)-1
eg.
    float float_number = 10.7;


Double data type
- Use the double keyword to define the double data type
- Double data type contains the number with the fractional part
- The double type is allocated 8bytes of memory
- It can store any value from -2**63 to (2**63)-1
eg.
    double double_number = 10.65417;

- A float can store 7x digits after the decimal point, whereas a double
can store 15 digits after the decimal point.
- You should use a double for floating point values
- We can also store a scientific number in a double or float data type.
  - The number after e shows the power of 10
  - 97e4 = 97 x (10**4)


Character data type
- Use the char keyword to define teh character type
- The character data type contains a single character from the ASCII set
- A char type is allocated 1byte of memory
- It can store any Unicode value from -2**7 to (2**7)-1
- A char value is always written in single qoutation marks
eg.
    char character = 'b';


Boolean data type
- Use the bool keyword
- The boolean data type stores a logical value (stores true / false)
- We use 1 to represent true & 0 to represent false.
- A bool type is allocated 1byte of memory
eg.
    bool boolean = false;
*/