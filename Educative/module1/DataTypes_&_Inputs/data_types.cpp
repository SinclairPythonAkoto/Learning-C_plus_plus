#include <iostream>

using namespace std;

int main()
{
    int number = 10;
    cout << "Number = " << number << endl;
}

/*
Computer memory is just like an Excel sheet that contains cells of data arranged
in a logical order.

Each cell in memory can store 1 byte of data.
 - 1 byte = 8bit
 - each cell can store any value from 0 - 255.

 In the variable declaration, we need to specify the data type before the identifier.
 This is why C++ is a statically-typed language.

The data type tells the compiler what type of data a paticular variable can store.
The compiler allocates the memory to the variable based on its data.

Data types do TWO things:
  - Specify the value a variable it can store (i.e. a variable with an int data type can
    only have integer values).
  - Reserve the number of bytes of a variable in memory (i.e an int variable type will
    keep 4x bytes in memory. With 4bytes we can represent any value from -2147483648 to
    2147483647. This means that the range of values depends on it's data type.)


Primitive / fundermental data types are predefined data types.
eg.
    - Integer
    - Floating point
    - Double
    - Void
    - Character
    - Boolean

Derived data types are from primitive data types.
eg.
    - Function
    - Arrays
    - Pointers
    - Reference

User-defined data types are data types that are defined by the user.
eg.
    - Structure
    - union
    - Enum
    - Typedef
*/