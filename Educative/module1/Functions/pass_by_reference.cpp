#include <iostream>
using namespace std;

void passReference(int &number) {
    number = number * 10;
    cout << "Value of number inside the function = " << number << endl;
}

int main(){
    cout << "\t\t\tPass by reference in functions" << endl;

    int number = 10;
    cout << "Value of number before the function call = " << number << endl;
    passReference(number);
    cout << "Value of number after function call = " << number << endl;

    return 0;
}

/*
Pass by reference will pass the address of the actual parameter(s) to the the 
formal parameters in the function.
    - This means the actual & formal parameters refer to the same location 
      in memory
    - The syntax is the same, you just have to add a '&' before the function parameter
*/