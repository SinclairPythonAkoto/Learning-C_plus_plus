#include <iostream>
using namespace std;

int main()
{
    // when the condition is true
    int money = 21;
    if (money >= 20) {
        cout << "You can buy a watch";
    }

    // when condition is false
    money = 9;
    if (money >= 20) {
        cout << "You can buy a watch";
    }

    return 0;
}

/*
An if statement intstructs the compiler to execute a particular
block of code when the conditions evaluates to true.

- We can use relational and logical operators for comparison in the condition 
  inside the round brackets.
- A zero or null value is considered false; non-zero values are considered true.
- In the code above, in line 8, if yes then the condition returns 1, and the code
  inside the curly brackets will be executed.
- The code will not be executed if the condition is false
*/