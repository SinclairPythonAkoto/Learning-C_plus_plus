#include <iostream>
using namespace std;

// function to print the values of an array
void print_array(int number[], int size) {
    for (int index=0; index < size; index++) {
        cout << number[index] << " ";
    }
    cout << endl;
}

// function to modify an array
void modify_array(int number[], int size) {
    for (int index=0; index < size; index++) {
        // if the value is less than 50 change to -1
        if (number[index] < 50) {
            number[index] = -1;
        }
    }
    cout << "Values of array inside the function:" << endl;
    // call the function to print values
    print_array(number, size);
}

int main() {
    cout << "\t\t\tArrays and Functions" << endl;

    int size = 8;
    int number[size] = {67, 87, 56, 43, 29, 15, 90, 67};
    cout << "Values of array before function call" << endl;
    // print the array
    print_array(number, size);
    // modify array values
    modify_array(number, size);

    cout << "Values of array after fucnction call:" << endl;
    print_array(number, size);

    return 0;

}

/*
We can apply arrays in functions; to do this we pass in the function name
and its square brackets as the function parameters.
    - We must keep the square brackets empty because it will automatcially
      calculate how many elements are in the array.
    - The array's elements are value by reference (meaning the whole array is 
      a referenced array when used in a function)
    - This means that any changes made to the array in the function will be applied 
      to the actual array.
    
Lets look at how the syntax of an array would look like in a function:

    / in function /
    return_type function_name ( data_type array_name[ ]){
        code goes here
    }

    / in main function /
    int main() {
        ...
        function_name( array_name ) ;
    }

REMEMBER!!
    - When we are passing an array to a function we using the original array,
      so any changes made in the function will be applied to the array
*/