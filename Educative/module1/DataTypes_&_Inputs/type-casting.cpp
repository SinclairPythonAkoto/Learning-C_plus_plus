#include <iostream>

using namespace std;

int main() 
{
    cout << "\t\t\tType-Casting" << endl;
    cout << "\t\tImplicit & Explicit casting" << endl;

    cout << "\nImplicit casting" << endl;
    int int_value = 13.9;
    cout << "int_value = " << int_value;
    cout << " : This automatically converts the floating-point to an integer." << endl;

    cout << "\nExplicit casting" << endl;
    char character = 'A';
    int ASCII;
    // converts char data to int explicitly
    ASCII = (int) character;
    cout << "character = " << character << endl;
    cout << "ASCII value = " << ASCII;
    cout << " : this is the converted char value of the character variable.";

}

/*
There are two types of type-casting: implicit casting & explicit casting

Implicit casting
- The compiler automatically converts one data type to another
- If you store a floting-point value in a integer, the compiler will convert 
  the float value into an int automatically.  
- We should always do type-casting from smaller to larger data types.
  Otherwise, you can lose your data. In the example above we are losing 
  the information after the decimal point.

Explicit casting
- The user manually converts one data type to another
- The syntax to manually convert: (data type) variable_name;
  - We put in brackets what we want the new data type to be in 
    front on the variable we want to change
- In the example above, we take the char data type and convert it
  into an int before storing it in the character varaible (line)

*/
