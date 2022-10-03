/*
Write a function that will convert an integer to a string.
    - The function should be called digit_text
    - Convert a digit from 0 to 5 into words
    - If a number is other than 0 -5, it should return 'invalid number'
    - Store your result in a variable of a string type 
*/

#include <iostream>
using namespace std;

// create function 
string digit_text(int number){
    string result;
    switch(number){
        case 0:
            result = "zero";
            break;
        case 1:
            result = "one";
            break;
        case 2:
            result = "two";
            break;
        case 3:
            result = "three";
            break;
        case 4:
            result = "four";
            break;
        case 5:
            result = "five";
            break;
        default:
            result = "invalid number";
    }
    return result;
}

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tConvert an integer to a string using a function" << endl;

    int num = 3;
    string get_num;
    get_num = digit_text(num);

    cout << "num = " << num << endl;
    cout << "num = " << get_num << endl;

    return 0;

}
