#include <iostream>
using namespace std;

int main()
{
    cout << "\t\t\tNested else-if Statement" << endl;
    int money = 6;
    if (money >= 20){
        cout << "You can gift a watch." << endl;
    }
    else if (money >= 10) {
        cout << "You can gift a comic book." << endl;
    }
    else if (money >= 5) {
        cout << "You can gift a chocolate." << endl;
    }
    else {
        cout << "You can gift a pen." << endl;
    }

    return 0;
}

/*
A nested else-if statement basically allows you to check multiple 
conditions.

Here is how we write an else-if statement

if (condition){
    code block if true
} else if (condition) {
    code block if else if true
} else {
    code block if else true
}
*/
