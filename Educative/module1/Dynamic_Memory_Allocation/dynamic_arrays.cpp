#include <iostream>
using namespace std;

// print array
void print_array(int arr[], int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "\t\t\tDynamic arrays" << endl;

    int size = 5;
    // create array
    int *arr = new int[size];
    // fill elements of an array
    for (int i=0; i < size; i++) {
        arr[i] = i;
    }
    // print array
    print_array(arr, size);
    // create new array
    int *resize_arr = new int[size + 2];
    // copy one array to another
    for (int i=0; i < size; i++) {
        resize_arr[i] = arr[i];
    }
    // delete old array
    delete[] arr;
    // pointer array will point to resize_arr
    arr = resize_arr;
    // store new values
    arr[size] = 99;
    arr[size + 1] = 100;
    // print new values
    print_array(arr, size+2);

    return 0;
}

/*
Dynamic arrays can grow or shrink during the program execution.

To declare a dynamic array the syntax is:

    data_type *array_name = new data_type [ size ] ;

To initialise a dynamic array the syntax is:

    array_name [ index ] = value ;

To deallocate a dynamic array the syntax is:

    delete [ ] array_name;

In the example above, we have changed the size of the array
by creating a new array and copy the element from the original array.
A for loop is done to get the value across from one array to another.
*/