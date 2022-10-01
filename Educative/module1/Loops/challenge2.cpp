/*
In this challenge you have to find out if the given number is a prime number.
(A prime number is only divisible by 1 and itself)

    - if the number is a prime, it should print 'prime'
    - if the number is not a prime, it should print 'not prime'

Input:
    int number = 31;

Output:
    prime
*/

#include <iostream>
using namespace std;

int main(){
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tFind out if a number is a prime" << endl;
    int number = 7;
    bool isPrime = true;
    
    if (number <= 1) {
        isPrime = false;
    }

    for (int counter = 2; counter <= number /2; counter++ ) {
        if (number % counter == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Number is prime";
    } else {
        cout << "Number is not prime";
    }
    
    return 0;
}