/*
Write a code to swap the values of two variabes.

Your task is to swap variables var1 and var2, and swap their values.

Your code should have the following output:

var1 = 2
var2 = 1
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tCHALLENGE 2:" << endl;
    cout << "\t\tSwap the values of two variables" << endl;

    // initialise variables
    int var1, var2, temp;

    // declare values
    var1 = 1;
    var2 = 2;

    // print the original values
    cout << "\nOriginal values:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    // swap values
    temp = var2;
    var2 = var1;
    var1 = temp;

    // print new values
    cout << "\nNew Values:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
}

/*
What we have done here is created an empty int variale; we use temp to store
the value of var2. Then we change the value of var2 to var1, and change the
value of var1 to temp.
*/