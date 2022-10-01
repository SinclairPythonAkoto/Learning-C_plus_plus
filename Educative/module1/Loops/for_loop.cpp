#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tFor Loops" << endl;
    int icecream;
    // for loop
    for (icecream = 5; icecream > 0; icecream--) {
        cout << "Number of free icecream = " << icecream << endl;
        cout << "Buy an icecream" << endl;
    }

    return 0;
}

/*
A for loop keeps executing the code until the condition is false.
This is also known as a count controlled loop (since the program knows in 
advance the number of times the loop should be executed).

Here is how the syntax should look like :

    for ( var = 0; var < 2; var++; ) {
        code block goes here - on
    }
*/