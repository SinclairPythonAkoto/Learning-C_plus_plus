/*
In this challenge, your task is to convert the variable value from a double to an int

Your code should have the following output:


int_value = 70

*/



#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tConvert a double to an integer" << endl;
    
    double double_value = 70.986;
    // declare variable
    int int_value;
    // initialise variable
    int_value = double_value;
    // print value
    cout << "int_value = " << int_value;
}