#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tAccessing an array" << endl;
    
    int size = 5;
    // create array
    int roll_number[size] = {100, 101, 102, 103, 104};

    cout << "V\nalues of array before update:" << endl;
    // for loop to print values
    for (int i = 0; i < size; i++) {
        cout << roll_number[i] << " ";
    }
    cout << endl;
    // update values via array index
    roll_number[3] = 22222;
    roll_number[4] = 33333;
    cout << "\nValues of array after update:" << endl;
    // Print updated values 
    for (int i = 0; i < size; i++) {
        cout << roll_number[i] << " ";
    }
    cout << endl;
    
    return 0;
}

/*
To access an element within an array, we write the array name followed 
by the index in square brackets.

The syntax would look like this:

    array_name[ array_index ] ;

    - If we try to access an index which doesn't exist we may get an unexpected output,
      rather than an error.
    - To print all the elements within an array we would need to loop through it via iteration
      - Loop through the size of the array
      - Compare the loop's counter variable is less to the size of the list (or range you want to loop)
      - It will then loop through each element, storing it in the counter variable, which you will have access to
        (in order to control each element dynamically)

We update the array by referring to the arary name followed by the index in square brackets, then assign
the new value.

eg.
    
    array_name[ array_index ] = value;
*/