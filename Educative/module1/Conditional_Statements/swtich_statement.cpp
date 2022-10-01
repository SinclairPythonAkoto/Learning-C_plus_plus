#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tSwitch Statements" << endl;
    // Initialize variable grade
    char grade = 'C';
    // switch statement
    switch (grade) {
        // first case 
        case 'A':
        cout << "Exceptional performance!";
        break;
        // second case  
        case 'B':
        cout << "Well done!";
        break;
        // third case    
        case 'C':
        cout << "Good!";
        break;
        // fourth case    
        case 'D':
        cout << "You need to do more hardwork!";
        break; 
        // fifth case    
        case 'F':
        cout << "Fail";
        break; 
        // default case    
        default:
        cout << "Invalid input";
    }
    return 0;
}

/*
Switch statements are generally used when we have to check a single variable
against a multiple number of choices (especially if it's really big!).
- The switch statement evaluates the given expression and then compares its value with 
  each case label.  If the value of the case label matches the value of the expression,
  the statement(s) specific to that case is executed.

Here is what the syntax would look like:

    switch (expression) {
        case value1:
        code goes here
        break;

        case value:
        code goes here
        break;

        default:
        code goes here
    }

- REMEMBER!! switch expression and case label can only accept variables of int or char data typess
- The default is also optional, it's used if none of the case labels are true.
- If you do not use the break keyword all the cases will run in the execution
- We can use switch statements to test the range of values but it's best NOT to do so 
  (this isn't a good reccomendation)

*/