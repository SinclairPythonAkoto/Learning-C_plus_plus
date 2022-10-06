/*
Calculate the area of a triangle using pointers
    - the function has to return a double data type
    - it has 3x parameters => length, width, result (all doubles)

*/

#include <iostream>

void area (double *length, double *width, double *result) {
    *result = *length * *width;
}

int main() {
    std::cout << "\t\t\tCHALLEGE 1" << std::endl;
    std::cout << "\t\tCalculate area of a triangle" << std::endl;

    // initialise values
    double length=8.9, width=2.1, result=0;

    std::cout << "Becfore calling the function:" << std::endl;
    std::cout << "result = " << result << std::endl;
    // call the pointer function
    area(&length, &width, &result);
    std::cout << "After calling function area:" << std::endl;
    std::cout << "result = " << result << std::endl;

    return 0;

}