/*
Create a function that will accept a list as a parameter, amd also an integer,
to calculate the avarage of the given list.
    - the function should be called average
    - double average (double marks[], int size) should be the function layout
Eample intput:

    average({10.5, 67.8, 98.6, 31.2}, 4);

Example output:
    52.025

*/

#include <iostream>
using namespace std;

// average function
double average(double marks[], int size) {
    double average = 0;
    for (int index=0; index < size; index++) {
        average += marks[index];    // add each element together
    }
    average = average / size;   // divide sum of array by size of array
    return average;
}

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tCalculate average from a list" << endl;

    int size = 8;
    double result;
    double number [size] = {67, 89, 56, 43, 29, 15, 90,67};

    result = average(number, size);
    cout << "average = " << result;

    return 0;
}