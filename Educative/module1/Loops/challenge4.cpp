/*
In this challenge you have to find out if a number is a palindrome
(a palindrome is something that is the same if read backwards).

Input:
    int number = 212;

Output:
    is palindrome
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCHALLENGE 3" << endl;
    cout << "\t\tFind if the number if a palindrome" << endl;
    int number = 212;

    // first we need to reverse the number
    int remainder = 0, reverse = 0;
    int temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
    }
    
    // check is the reversed number is the same as original
    if (number == reverse) {
        cout << "is palindrome";
    } else {
        cout << "is not palidrome";
    }

    return 0;
}