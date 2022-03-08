# Getting User Input #

In this example we are accepting a user input in a form of a string, but we can accept different data types.  The main basis of this is to get the user to input data so we can then use that data for soemthing else within the code.

First we create a variable of what we will store the user input data *(we have to be mindful of the type of data we are storing - so this needs to be correct when creating the variable)*.

Then we will prompt the user by writing a simple string; for example this could be asking the user for their name, age, city of birth, country of origin - anything that the user would have to respond back to.

Then we use the keyword `cin >>` followed by the name of the variable.  This is essentially storing what the user has written into the chosen variable.  Once we have this then we can use that data as we please, in our case we will print out the data back to the user.

```
int age;
cout << "Enter your age: ";
cin >> age;
cout << "Your age is: " << age << endl;
``` 

**Note**
If the input variable is an integer/float and the user enters a string instead, the program will not crash but it will return a `0`.  This is another way of saying that the data is **false**.

#### Get line function ####
You can also  use the same format above to extract data from a string; you can also use the `getline()` function which will allow you to get an entire line of text from the user input.  The function takes 2x arguements, the 1st would be `cin` *(which is basically the character input)*; and the 2nd would be the name of the variable in which we want to store the data.

```
string name;
cout << "Enter your name: ";
getline(cin, name);
cout << "Hello " << name << endl;
```

#### What is the difference between cin & getline? ####
- If you want to get an integer, float or a single character from the user, it is best to use `cin`
- If you want to get a string from the user then use `getline()`
