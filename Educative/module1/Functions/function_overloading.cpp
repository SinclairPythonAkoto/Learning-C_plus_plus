#include <iostream>
#include <string.h>
using namespace std;

const char* min(const char* s, const char* t) {
    return (strcmp(s,t) < 0) ? s : t;
}

float min(float x, float y) {
    return (x < y) ? x : y;
}

int main() {
    cout << "\t\t\tFunction Overloading"<< endl;

    const char* s = min("abc", "xyz");
    float f = min(4.45F, 1.23f);
    int f2 = min(2011, 2014);

    // float f3 = min("abc", 1.23f);

    cout << s << endl;
    cout << f << endl;
    cout << f2 << endl;
}

/*
Function overloading is the concept of affecting a functions behaviour 
based on the number of parameters or their types.
    - Allows you to create multiple functions with the same name,
      but with different parameters
    - Functions with different parameters can coexist with the same name
    - The function prototype can change and the return type changes
      according to parameters being returned.

In the code block above we are using a pointer method which we will take a closer 
look into later in the module.

Rules for choosing the right function
    - We need to search for a function with the exact type
    - We need to apply type promotion to the arguments
    - We need to convert arguments
    - The compiler ignores references when overloading functions
    - const & volatile qualifiers are also ignored

Why do we overload?
    - By overloading we can increase simplicity & readability in our code
    - We only need to provide the correct arguments and the compiler will
      handle the rest of the functionality
*/