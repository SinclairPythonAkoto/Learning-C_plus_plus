#include <iostream>
using namespace std;

int ticket_price(int person){
    int price;
    if (person == 1){
        price = 100;
        return price;
    }
    else {
        cout << "Person" << person << " is asking the price" << endl;
        person--;
        price = ticket_price(person);
        cout << "Person" << person << " is telling the price" << endl;
        return price;
    }
}

int main(){

    int price;
    price = ticket_price(5);
    cout << "Ticket price = " << price << endl;
    
}


/*
Think of recursion as a while loop while an if statement; the function will
keep on executing its command until the condition is met.
    - There are two main points of a recursive function:
      - if : condition is met the function retuns result (base case)
      - else : condition the function repeats itself (recursive case)
      - If we do not add a base case program runs out of memory and give an error
      - The function will execute the recursive case until the base case it met,
        to return the result it will start from the last recursive value then work
        its way backwards (to its first recursive case), getting each value along its way

*/