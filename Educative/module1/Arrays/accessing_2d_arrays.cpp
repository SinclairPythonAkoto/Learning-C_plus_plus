#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tAccessing values from 2D arrays" << endl;

    int row=3, column=3;
    // initialise 2D array
    int student[row][column] = {{100, 134, 234}, {34, 189, 221}, {109, 139, 56}};

    // print all values of matrix
    for (int r=0; r < row; r++) {
        for (int c=0l; c < column; c++) {
            cout << student[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
To access data within a two-dimensional array we just have to apply the row index
and column index to the array name.

The syntax for the array will look like:

    array_name [ row_index ][ column_index ] ;

To print out all the values in a matrix we would use a nested loop
(loop through the rows & loop through the columns)
*/