# Class Object Functions #

Class functions are functions within the class, in which the class objects can use.

You can create object functions that can check against the object's class attributes or even modify the values within it.

For our example we will create an object function that will check against the score of a test that some students took.  If their test results scored **higher or equal to**  a specified mark then the function will tell them that they passed; if their test results scored **lower** then they failed.

*object function*

```
bool testResults(){
    if(score >= 75){
        return true;
    }
    return false;
}
```

Now we will see how we can use the object function on the two different student objects below - each with different test results.

*checking object attribute with object function*

```
Student student1("Jim", "Buisness", 60);
Student student2("Claire", "Science", 80);

cout << student1.testResults() << endl;    // 0
cout << student2.testResults() << endl;    // 1
```

**Note**
With boolean values, if the value is **false** then it will print `0`, and if the value is **true** then it will print `1`.

*Check* **objectFunction.cpp** *for the full source code.*
