#include <iostream>

using namespace std;

int main() 
{
    cout << "\t\t\tLong data type modifier" << endl;

    int num = 2147483649;
    long int long_integer = 2147483649;

    cout << "num = " << num << endl;
    cout << "long_integer = " << long_integer << endl;

    cout << "\n\t\t\tShort data type modifier" << endl;
    int num2 = 32768;
    short int short_integer = 32768;
    cout << "num2 = " << num2 << endl;
    cout << "short_integer = " << short_integer;
    cout << " : this returns a wrong result becasuse the maximum value for a short integer is 32767" << endl;


    cout << "\n\t\t\tUnsigned data type modifier" << endl;
    int num3 = -10;
    unsigned int unsigned_integer = -10;

    char letter1 = 'A';
    unsigned char unsigned_character = 'B';

    cout << "num3 = " << num3 << endl;
    cout << "unsigned_integer = " << unsigned_integer;
    cout << " : the modifier should be signed, this why we have an unexpected result " << endl;

    cout << "letter1 = " << letter1 << endl;
    cout << "unsigned_character = " << unsigned_character << endl;


    cout << "\n\t\t\tSigned data type modifier" << endl;
    int num4 = -90;
    signed int signed_integer = -90;
    char letter2 = 'A';
    signed char signed_character = 'A';
    cout << "num4 = " << num4 << endl;
    cout << "signed_integer = " << signed_integer << endl;
    cout << "letter2 = " << letter2 << endl;
    cout << "signed_character = " << signed_character << endl;
}

/*
The maximum that value can be stored in a variable of type int is 2147483647.
If we try store a value any higher, it will return a negative output.

We use data type modifiers to change the meaning of the data type according
to the situation. Here are some below:
  - long
  - short
  - unsigned
  - signed

We can use data type modifiers with int, double and char data types.

Long
- long is used to increase the length of a data type to 4x more bytes.
- We can use long with int and double data types
- We can see from the example above that using long will allow you to be 
  able to store values greater than the int range.

Short
- short decreases the available length of a data type to 2bytes
- We can use short with an int data type
- We need to remember that an int stores 4bytes of memory; so if we use short on an int,
  it will decrease the size of the amount of memory stored by 2bytes.
  This means that the maximum value that can be represented with a short int is 32767,
  and because long_integer is 32768 it returns -32768.
- You will see from the example above that the short_integer variable gives an unexpected 
  result; you need to be aware of the the data types and how to use them to avoid unexpected results.

Unsigned 
- unsigned ONLY allows you to store posituve numbers
- You can use unsigned with char and int data types.
- With unsigned int we can store any value from 0 to 4294967295. (4.29B)
- With unsigned char, we can store any value from 0 to 255. (ASCII table)
- We cannot represent signed values with an unsigned modifier

Signed
- signed allows you to store both positive and negative values.
- We can use signed with char and int data types
- With signed int we can store any value from -2,147,483,648 to 2,147,483,647
- With signed char we can store any value from -128 to 127

*/
