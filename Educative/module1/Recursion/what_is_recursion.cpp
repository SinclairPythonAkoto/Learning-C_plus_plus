#include <iostream>
using namespace std;

int ticket_price(int person){
    int price;
    if (person == 1){
        price = 100;
        return price;
    }
    else
        person--;
    return ticket_price(person);      // returns back the function with argument
}

int recursive_sum(int num1, int num2){
    if (num1 == num2)
        return num1;
    return num1 + recursive_sum(num1 + 1, num2);
}


int main(){
    cout << "\t\t\tRecursion" << endl;
    
    int price;
    price = ticket_price(5);
    cout << "\nExample 1" << endl;
    cout << "Ticket price = " << price << endl;

    int number1 = 1, number2 = 5;
    cout << "\nExample 2" << endl;
    cout << "Sum = " << recursive_sum(number1, number2);

    return 0;
}

/*
Recursion is when a function repeats itself until a condition is met.
    - The function will complete its process, then retun the same function
      with the result as a parameter.
    - The function will continue this process until a condition is met,
      this condition is known as the base case.

*/