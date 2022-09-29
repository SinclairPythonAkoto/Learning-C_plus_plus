#include <iostream>

using namespace std;

int main()
{
    cout << "Constants and Literals" << endl;
    const int number = 10;
    cout << "Number: " << number << endl;
    // if we uncomment the line below, it will give a compile error
    // number = 20;
}

/*
Constants - you cannot change once created (a bit like a tuple)
          - We use the const keyword to create a constant.
            This should be the first thing before we declare its datatype.

            const constant_type constant_name = constant_value;

REMEMBER !!
You have to initialise the constant at the time of declaration.  If you
don't do this an error will occur.

*/
