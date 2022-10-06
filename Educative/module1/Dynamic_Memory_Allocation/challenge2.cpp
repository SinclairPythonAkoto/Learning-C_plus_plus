/*
Your task is to delete an element at a specified index
    - the function should have 3x int parameters, one being a pointer by reference
    - shoukd be a void type function
    - function name should be delete_element
*/


#include <iostream>
using namespace std;

void print_array (int *arr, int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// delete_element function
void delete_element(int *&arr, int size, int index) {
  // Declare new array dynamically
  int *new_arr = new int[size - 1];
  // Traverse array
  for (int i = 0; i < size - 1; i++) {
    // 
    if (i >= index) {
      new_arr[i] = arr[i + 1];
    } 
    else {
      // Copy elements in new array
      new_arr[i] = arr[i];

    }
  }
  // Free memory pointed out by arr
  delete[] arr;
  // Pointer arr will point to new_arr
  arr = new_arr;
  //return arr;
}

// main function
int main() {

  // Initialize variables
  int size = 5;
  int index = 3;
  // Initialize dynamic array
  int * arr = new int[size];
  // Fill elements in an array
  for (int i = 0; i < size; i++) {
    arr[i] = i;
  }
  // Call print_array function
  print_array(arr, size);
  // Call delete_element function
  delete_element(arr, size, index);
  // Call print_array function
  print_array(arr, size - 1);

  return 0;
}