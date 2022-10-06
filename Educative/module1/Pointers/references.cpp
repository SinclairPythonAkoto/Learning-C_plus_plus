#include <iostream>

void func(int& x, int& y) {
    int t = x;
    x = y;
    y = t;
}

int main() {
    std::cout << "\t\t\t References" << std::endl;

    int a = 10;
    int b = 20;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    func(a, b);
    std::cout << std::endl;

    std::cout << "a: " << a << std::endl;
    std::cout << "b " << b << std::endl;

    return 0;
}

/*
A reference is an alias for an existing variable. It can be created by using the & 
operator.
    - If we change the value of the referenced variable it will chnage the value
      of the actual variable.
    - A reference must always refer to an existing variable, if you try to declare
      a reference wihtout a variable or try to initialise a null value it will cause
      an error
    - compared to using pointer, it's cleaner syntax (uses less lines of code)
    - References provide a more convenient way to access variables from indide functions
    - It uses less memory as passing by value would mean it would have to passs a 
      copy to the function
*/