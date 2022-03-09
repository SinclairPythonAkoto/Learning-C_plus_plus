# Switch Staements #

A switch statement takes a single value, then compares it to a bunch of other values using a boolean expression.  When the boolean expression is **true** then the piece of code will be executed.

A switch statement is essentially a specialised version of an *if statement* which would otherwise have an excessive amount of *else if* type statements.

You would use a switch statement if you had many conditions to check against a single value - 5, 10, 20 or even more!

*With an if statement you would need a boolean expression inside their parenthesis, but for switch statements all you need to do is pass in the value you want to check against.*

```
char myGrade = 'A';
switch(myGrade){
    case 'A':
          cout << "You Pass" << endl;
          break;
    case 'F':
          cout << "You fail" << endl;
          break;
    default:
          cout << "Invalid grade" << endl;
}
````

*We use the* **break** *keyword to tell C++ that when we find the value we are looking for to execute the code then to stop*

The **default** keyword acts like *else* in an if statement; if none of the cases above are matched the code within the default statement will be executed.  When using the default statement you will not need the *break* keyword.

**Most of the time you will want to include a default statement in your switch statement.** 
