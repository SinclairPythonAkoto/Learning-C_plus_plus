/*
Write a function that will add elemnts of a matrix (2D array) diagonally
*/

#include <iostream>
using namespace std;

// add_diagonal function
int add_diagonal(int arr[3][3], int row, int col) {
  // Initialize sum
  int sum = 0;
  // Outer loop to traverse rows in a 2D array
  for (int i = 0; i < row; i++) {
    // Inner loop to traverse values in each row
    for (int j = 0; j < col; j++) {
      // Check if row index is equal to column index
      if (i == j) {
        // Add element at row index i and column index j in sum
        sum = sum + arr[i][j];
      }
    }
  }
  return sum;
}

// print_array function
void print_array (int arr[3][3], int row, int column){
  // Outer loop 
  for (int i = 0; i < row; i++) {
    // Inner loop
    for (int j = 0; j < column; j++) {
       cout << arr[i][j] << " ";
  }
  cout << endl;
  }
}

int main() {
  int result;
  int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  // Call print_array function
  print_array(arr, 3, 3);
  // Call add_diagonal function and store your output in result
  result = add_diagonal(arr, 3 , 3);
  // Print the value of result
  cout << "sum = " << result;
  return 0;
}