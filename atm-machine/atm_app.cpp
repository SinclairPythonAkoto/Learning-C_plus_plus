#include <iostream>

using namespace std;

void showMeu() {
	cout << "**********MENU**********" << endl;
	cout << "1. Check balance " << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
}

int main()
{
	// check balance, deposit, withdraw, show menu
	int option;
	double balance = 500;

	do{
		showMeu();
		cout << "Select an option: ";
		cin >> option;
		system("clear");    // this will clear the console after user input
		switch(option){
			case 1:
				cout << "Your balance is: £" << balance << endl;
				break;
			case 2:
				cout << "Deposit amount: £";
				double depositAmount;
				cin >> depositAmount;
				balance += depositAmount;
				break;
			case 3:
				cout << "Withdraw amount: £";
				double withdrawAmount;
				cin >> withdrawAmount;
				if(withdrawAmount <= balance)
					balance -= withdrawAmount;
				else
					cout << "Insufficient funds in your account." << endl;
				break;
		}
	} while(option != 4);

	return(0);
}
