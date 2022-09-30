#include <iostream>
using namespace std;

int main()
{
    cout << "\t\t\tIf-else Statements" << endl;
    int money = 10;
    if (money >= 20) {
        cout << "You can buy a watch" << endl;
    } else {
        cout << "You can buy a pen" << endl;
    }
    
    return 0;
}

/*
When the condition in an if statement is false, the compiler executes the code
inside the else block.

Here is how we write an if-else condition

if (condition) {
    code block runs if true
} else {
    code block runs if false
}

*/