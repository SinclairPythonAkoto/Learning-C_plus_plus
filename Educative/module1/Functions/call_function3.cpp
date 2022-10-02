#include <iostream>
using namespace std;

int make_juice(int water, int fruit) {
    int juice;
    juice = water + fruit;
    cout << "Your juice is ready" << endl;
    return juice;
}

int main() {
    cout << "\t\t\tCall Functions 3" << endl;
    cout << "\t\tUsing the same function miltiple times" << endl;

    int juice_glass;

    juice_glass = make_juice(2, 5);
    cout << "Number of juice glass = " << juice_glass << endl;
    juice_glass = make_juice(6, 11);
    cout << "Number of juice glass = " << juice_glass << endl;

    return 0;
}

/*
As you can see, we have used the same function multple times. 
We have also passed in the direct values into the function (instead 
of craeting a variable first, then passign the variables).
    - We can initialise a variable then pass the identifier to the 
      function parameter, or we can pass the value directly to the function parameters
*/