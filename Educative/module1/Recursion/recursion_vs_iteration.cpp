#include <iostream>
using namespace std;

int factorial(int num){
    int fact = 1;

    if (num == 0){
        fact = 1;
    }

    for (int counter = 1; counter <= num; counter++){
        fact = fact * counter;
    }
    return fact;
}

int main(){
    cout << "\t\t\tRecursion vs Iteration" << endl;
    
    int number = 5;
    int result;
    result = factorial(number);
    cout << "Factorial of " << number << " = " << result;

    return  0;
}

/*
In the example above, we have solved the same problem but instead with a 
for loop.  Instead of creating a recursive function, we have created a counter
variable and incremented it by 1 until the condition is met.

There are some differences between recusrions and loops:
    - Loops take less memory and are faster to execute
    - Recursive functions take long and more memory
    - Loops achieve repitition through repetitive structure, recursion achieves
      repitition through reptitive function calls
    - Recursion is good for problems and makes debugging easier 

*/