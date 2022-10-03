/*
Write a rescursive function that will take the number given and count the 
total number of digits before returning the value
    - the function should be named count_digits which will be an int type
    - the function will have a parameter called number
    - check if the number is divisible by 10 => it will tell you how many digits a number has

*/

#include <iostream>
using namespace std;

int count_digits(int number) {
    if (abs(number)/10 == 0) {
        return 1;
    }
    else {
        return 1 + count_digits(number / 10);
    }
}

int main() {
    cout << "\t\t\tCHALLENGE 2" << endl;
    int number = 8625;
    int result;
    result = count_digits(number);

    cout << "Number of digits = " << result;
    return 0;
}