/*
Write a function that will multiply two matrices together
*/

#include <iostream>

using namespace std;

// multiplication function
void multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2, int result[][2]) {
  // Check if col of first array equal to row of second array
  if (col1 == row2) {
    // Traverse first array row
    for (int x = 0; x < row1; x++) {
      // Traverse second array columns
      for (int y = 0; y < col2; y++) {
        // Traverse first array columns and second array rows
        for (int z = 0; z < col1; z++) {
          // Multiplication
          result[x][y] = result[x][y] + arr1[x][z] * arr2[z][y];
        }
      }
    }
  }
  else{
  // Traverse first array row
    for (int x = 0; x < row1; x++) {
      // Traverse second array columns
      for (int y = 0; y < col2; y++) {
        // Fill the elements of array by -1
        result[x][y] = -1;
      }
    }
  } 

}

// print_array function
void print_array(int arr[3][2], int row, int column) {
  // Outer loop 
  for (int i = 0; i < row; i++) {
    // Inner loop
    for (int j = 0; j < column; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// main function
int main() {
    cout << "\t\t\tCHALLENGE 5" << endl;
    cout << "\t\tMultiply two matrices" << endl;
  // Initialize arr1
  int arr1[3][2] = {{1,2},{3,4},{5,6}};
  // Initialize arr2
  int arr2[2][2] = {{10,20},{30,40}};
  // Initialize result
  int result[3][2] = {{0,0},{0,0},{0,0}};
  // Call function multiplication
  multiplication(arr1,3,2,arr2,2,2,result);
  // Call function print_array
  print_array(result,3,2);
  return 0;
}