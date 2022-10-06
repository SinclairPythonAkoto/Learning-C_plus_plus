/*
Calculate mean and standard deviation from array

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int size = 10;

  //Declare dynamic array
  int *Array = new int[size];

  //Initialize dynamic array
  for(int i = 0 ; i < size; i++){
    Array[i] = rand() % 100; 
  }   

  //Prints dynamic array
  cout << "Elements of array: ";
  for(int i = 0 ; i < size; i++){
    cout << Array[i] << " ";
  } 
  cout << endl;

  //Calculate mean and print
  float sum = 0;
  for(int i = 0 ; i < size; i++){
    sum += Array[i];
  } 
  float mean = sum/size ;
  cout << "Mean: " << mean << endl;

  //Calculate standard deviation and print
  float stdDev = 0;
  for(int i = 0 ; i < size; i++){
    stdDev += pow(Array[i] - mean, 2);
  }
  stdDev = sqrt(stdDev / size);
  cout << "Standard Deviation: " << stdDev << endl;
  // Deletes a memory allocated to dynamic array
  delete[] Array;

  return 0;
}