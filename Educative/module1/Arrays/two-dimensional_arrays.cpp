#include <iostream>
using namespace std;

int main() {
    cout << "Creating a Two-Dimensional Array" << endl;

    // declare 2D array
    int student[10][5];

    // initialise values
    student[0][0] = 100;
    student[0][1] = 134;
    student[1][0] = 34;
    student[1][1] = 189;

    // declare & initialise array
    int student2[][3] = {{100, 134, 234}, {43, 189, 221}, {109, 139, 56}};
    

    return 0;
}

/*
A two-dimensional array is basically an array within another array.  Instead of declaring the 
size of the array, we state the row size and the column size of the matrix.

Declare two-dimensional array:

    data_type array_name [ row_size ][ column_size ] ;


Initialise two-dimensional array:

    array_name [ row ][ column ] = value ;

Initialise two-diemsional array in the declaration:

    data_type array_name [ ][ ] = { { value1 }, { value2 }, ... } ;

If we initialise fewer than the array size, it will automatically initialises the remaining 
elements with their default values.
    - if we do not specify the row but specify the column the code will still run. BUT if 
      we do not specifiy both, or we just specify the row (without the column), then it will
      throw an error.
    - specifying the rows and columns is optional both can be left empty; but if you do to 
      follow the rule outlined above.
*/