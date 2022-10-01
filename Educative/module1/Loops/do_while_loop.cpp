#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tDo-While Loops" << endl;
    int money = 0;
    int icecream_price = 5;
    cout << "Initial money = " << money << endl;
    cout << "Ice-cream price =" << icecream_price << endl;
    // start do-while loop
    do {
        cout << "Buy an ice-cream" << endl;
        money = money - icecream_price;
        cout << "Remaining money = " << money << endl;
    } while (money >= icecream_price);
    // end loop
    cout << "You can't buy any more ice-cream." << endl;

    return 0;
}

/*
A do-while lop is also known as an exit-controlled loop.
This is because it executes the block of code first then 
checks the given condition.
    1st: Execute the code in the body of do-while loop.
    2nd: After executing the code block, evaluates the condition.
    3rd: If the condition is true, the do-while loop body is executed again.
         If the condition is false, the code exits the loop.

Here is what the syntax of a do-while loop looks like:

    do{
        code block of do while loop goes here
    } while (condition) ;
*/