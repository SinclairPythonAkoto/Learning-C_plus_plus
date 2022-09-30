#include <iostream>

using namespace std;

int main()
{
    // declare variable
    float number;
    cout << "\t\t\tC++ User Input" << endl;
    // prompt user for user input
    cout << "Please enter your number:" << endl;
    // user input
    cin >> number;
    // display the users input
    cout << "Your number: " << number;
}

/*
- To create a user input we use the cin keyword followed by >>
eg.
    cin >> variable_name ;

- cin is connected to the keyboard. It takes anythign from the keyboard
  and sends it to the extraction operator (>> is the extraction operator)
*/