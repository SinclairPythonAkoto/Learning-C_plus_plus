#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tUsing the continue statement" << endl;
    int icecream;
    for (icecream = 5; icecream > 0; icecream--) {
        cout << "Number of free ice-cream = " << icecream << endl;
        // continue statement
        if (icecream == 2) {
            cout << "Sorry! We ran out of ice-cream" << endl;
            continue;
        }
        cout << "Buy an ice-cream" << endl;
    }

    // another example 
    cout << "\nExample" << endl;
    int number = 1;
    for (number; number < 4; number += 1) {
        if (number == 2) {
            continue;
        }
        cout << number << endl;
    }
    return 0;
}

/*
To use the continue statement, we just need to write it before the statements
we would like to skip within a loop iteration.
    - We would use the if statement to check our condition within the loop, 
      if it evaluates to true then the code will skip the current iteration.
*/