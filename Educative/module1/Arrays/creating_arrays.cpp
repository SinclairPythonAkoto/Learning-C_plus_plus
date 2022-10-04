#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCreating an array" << endl;

    // declare array
    int first_array[5];

    // initialise array
    first_array[0] = 100;
    first_array[0] = 101;
    first_array[0] = 102;
    first_array[0] = 103;
    first_array[0] = 104;

    // declare & initialise array
    int second_array[ ] = { 100, 101, 102, 103, 104 };

    // arrar with fewer elements than size
    int thrid_array[5] = {101, 102};
    
    return 0;
}

/*
An array is a collection of elements of the same data type (think of an array
like a list in Python).

The syntax to declare an array:

    data_type array_name [array_size] ;


The syntax to initialise array:

    array_name [array_index] = value ;

The syntax to declare & initialise an array in one go:

    data_type array_name [ ] = { value };

Notice when we decalre & initialise an arrary in one go we do no tneed to
add the array size.  This is because C++ will automatically determines the 
size in the compiler.
    - The same applies when we create a array with values less than it's size

REMEMBER!!
    An int reserves 4 bytes of memory, so for our example our array would hold
    20 bytes (5 * 4 bytes). 
*/