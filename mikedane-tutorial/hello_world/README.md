# Hello World! #

Here is a simple C++ program that prints `Hello world!` onto the terminal.

```
#include <iostream>

using namespace std;
```
This is esentially the configuration options for the C++ file.  This needs to be included to be able to run our program.

#### iostream ####
`<iostream>` stands for the **input & output stream**.  This basically allows you to print onto the console as well as take in data from the console *(like a user input)*.  For the purpose of this tutorial we have used this throughout because we have been printing back onto the terminal; but as you develop yourself into a more advanced developer, you will be writing C++ code that may not necessarily need to print to the console or take in a user input.

The `#include` is used for when we want to import a library or configuraton.  

#### Using namespace std; ####
This again has been used throughout the tutorial, but the **proper** way would be to ignore this line and when printing to the console to use this key word instead `std::`

**Remember, to use** `cin` **or** `cout` **you will need to use** `std::`**!**

#### int main() ####
You can create your functions and classes out of the `main()` method, but when you want to run your code ***all functions, classes and your code should be in the main method!!*** *This is because C++ runs the main method first before anything else!*

```
#include <iostream>

int main()
{
    std::cout << "Helloe World!" << endl;
}
```

We have created a function `int main()` which will be used to contain the C++ code in which we want to execute.

- `cout` - console output / character output
- `endl` - end line
- Always end each line with a semicolon `;`
- Use `std::` before printing with `cout`

*You can find more on compiling and running a C++ program here:* ***https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/***
