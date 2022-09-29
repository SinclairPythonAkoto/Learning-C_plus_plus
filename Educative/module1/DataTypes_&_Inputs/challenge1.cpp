/*
In this challenge, your task is to:

  - Declare a variable: int var
  - Initialise var to 5000
  - Print the value of var
  - Overwrite the value of var to 1000
  - print the value of var again in a new line

Your code should have the following output:

var = 5000
var = 1000

*/

#include <iostream>

using namespace std;

int main()
{
    // /t = tab (4x spaces)
    cout << "\t\t\tCHALENGE 1 :" << endl;
    cout << "\t\tCreate a variable and overwrite it" << endl;

    // declare & initialise var
    int var = 5000;
    // print var
    cout << "var = " << var << endl;

    // overwrite var
    var = 1000;
    // print new value
    cout << "var = " << var;
}