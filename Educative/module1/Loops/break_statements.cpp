#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tUsing break stement" << endl;
    int iceream;
    for (iceream = 5; iceream > 0; iceream--) {
        cout << "Number of free ice-creams = " << iceream << endl;
        // break statement
        if (iceream == 2) {
            break;
        }
        cout << "Buy an ice-cream" << endl;
    }
    cout << "Sorry we're out of ice-cream." << endl;
    return 0;
}

/*
The break statement is used to jump out of the loop immediately
once a particular condition evaluates to true.
    - The break terminates the loop and proceeds to the next step of the 
    statement after the loop body.
    - An if condition will be normally created inside of the loop; we use the 
      break statement to exit the condition if true.  If not true, it goes 
      through the loop condition again.
*/