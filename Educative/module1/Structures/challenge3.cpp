/*
Your task is to return all account numbers with a balance of less than £500
    - your function should return a new array of the results
    - if the balance is less than 500 add the account number to the new array
    - if the balance is over 500, add -1 to the new array
*/

#include <iostream>
using namespace std;

// create class
struct Account {
    string name;
    int number;
    double balance;
};

// check account
void check_account(struct Account p[], int arr[], int size) {
    for (int i=0; i < size; i++) {
        if (p[i].balance < 500) {
            arr[i] = p[i].number;
        } else {
            arr[i] = -1;
        }
    }
}

// print arr 
void print_arr(int arr[], int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

// print Account
void print_Account(struct Account p[], int size) {
    for (int i=0; i < size; i++) {
        cout << "Person" << i + 1 << " details: " << endl;
        cout << p[i].name << endl;
        cout << p[i].number << endl;
        cout << p[i].balance << endl;
        cout << endl;
    }
}


int main() {
    std::cout << "\t\t\tCHALLENGE 3" << endl;
    cout << "\t\tCalculate account balances less than £500" << endl;
    
    int arr[3];
    struct Account account_holder[3];
    
    account_holder[0] = {"John", 578328,890};
    account_holder[1] = {"Alex", 908210,430.2 };
    account_holder[2] = {"Kim",165216,98.5};
    
    print_Account(account_holder, 3);
    check_account(account_holder, arr, 3);
    print_arr(arr, 3);
    
    return 0;
}