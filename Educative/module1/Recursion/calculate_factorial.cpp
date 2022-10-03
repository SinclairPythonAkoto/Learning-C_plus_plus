#include <iostream>
using namespace std;

int factorial(int num){
    // invalid value
    if (num < 0){
        return -1;
    }
    // base case
    if (num == 1 || num == 0){
        return 1;
    }
    // recursive case
    else{
        return num * factorial(num -1);
    } 
}

int main(){
    cout << "\t\t\tFactorial of a number" << endl;

    int number = 5;
    int result;
    result = factorial(number);
    
    cout << "Factorial of " << number << " = " << result;
    return 0;
}