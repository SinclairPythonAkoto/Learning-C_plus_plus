#include <iostream>
using namespace std;

// define function
int make_juice(int water, int fruit) {
    int juice;
    juice = water + fruit;
    cout << "Your juice is ready" << endl;
    return juice;
}

int main() {
    cout << "\t\t\tCall Fuctions 2" << endl;
    cout << "\t\tCalling a function after defining it before the main function" << endl;

    int apples = 5;
    int water_glass = 3;
    int juice_glass;
    // call function
    juice_glass = make_juice(water_glass, apples);
    cout << "Number of juice glass = " << juice_glass;

    return 0;
}

/*
From the example above we can see that wen define the function before we call it.
Doing this we do not have to separately declare the function.
*/