/*
Create a function that will shift all the elements of an array to the left.
    - The function should be called left_rotate that accepts int array and int size
*/

#include <iostream>

using namespace std;

// left_rotate function
void left_rotate(int arr[], int size) {
  // Declares a loop counter variable
  int j;
  // Store the element at index 0
  int temp = arr[0];
  // Traverse array
  for (j = 0; j < size - 1; j++) {  // we - 1 to get previous element
    // Left Shift element
    arr[j] = arr[j + 1];  // we + 1 to add element in new position (index)
  }
  // Store the value of temp at the last index of an array 
  arr[j] = temp;

}

// Function to print values of an array
void print_array(int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Print value at index i
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tShift elements of a list to the left" << endl;
    
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5 };
    
    cout << "Array before left rotation" << endl;
    // Call print_array function
    print_array(arr, size);
    // Call left_rotate function
    left_rotate(arr, size);

    cout << "Array after left rotation: " << endl;
    print_array(arr, size);

  return 0;
}