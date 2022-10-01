#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tWhile loops" << endl;
    int money = 20;
    int icecream_price = 5;
    cout << "Initial money = " << money << endl;
    cout << "Ice-cream price = " << icecream_price << endl;
    //start while loop
    while (money >= icecream_price){
        cout << "Buy an ice cream" << endl;
        money = money - icecream_price;
        cout << "Remaining money = " << money << endl;
    }
    // end of while loop
    cout << "You can't buy anymore ice-cream" << endl;
    
    return 0;
}

/*
A while loop will check if the condition is true and execute the code block until
the condition is false.
- The condition is evaluated before executing the statements inside its body,
  so a while loop can be called an entry-controlled loop.

Here is the syntax for writing a while loop:

    while (condition) {
        write cod here if the condition is true
    }
*/