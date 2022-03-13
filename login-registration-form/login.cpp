#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
	char choice;
	cout << "\t\t\t_______________________________________________________________________\n\n\n";
	cout << "\t\t\t                     Welecome to the Login Page                         \n\n\n";
	cout << "\t\t\t--------------------            MENU            -----------------------  \n\n";
	cout << "                                                                                \n\n";
	cout << "\t| Press 1 to LOGIN                        |" << endl;
	cout << "\t| Press 2 to REGISTER                     |" << endl;
	cout << "\t| Press 3 if you forgot your PASSWORD     |" << endl;
	cout << "\t| Press 4 to EXIT                         |" << endl;
	cout << "\n\t\t\t Please enter your choice: ";
	cin >> choice;
	cout << endl;

	switch(choice){
		case '1':{
				   login();
				   break;
			   }

		case '2':{
				   registration();
				   break;
			   }

		case '3':{
				   forgot();
				   break;
			   }

		case '4':{
				   cout << "\t\t\t Thank you! \n\n";
				   break;
			   }

		default:{
					system("clear");
					cout << "\t\t\t Please select a choice from the options below. \n" << endl;
					main();
                    //break;
				}
	}
}

void login()
{
	int count;
	string userID, password, id, pass;
	system("clear");
	cout << "\t\t\t Please enter the username and password: " << endl;
	cout << "\t\t\t USERNAME: ";
	cin >> userID;
	cout << "\t\t\t PASSWORD: ";
	cin >> password;

	ifstream input("records.txt");    // input is the object name

	while(input >> id >> pass){
		if(id == userID && pass == password){
			count = 1;
			system("clear");
		}
	}
	input.close();

	if(count==1){
		cout << "Your login was succesful \n Thanks for loggin in! \n";
		main();
	}
	else{
		cout << "\n LOGIN ERROR \n Please check your username and password.";
		main();
	}
}

void registration()
{
	string registerUserId, registerPassword, registerId, registerPass;
	system("clear");
	cout << "\t\t\t Enter the username: ";
	cin >> registerUserId;
	cout << "\t\t\t Enter the password: ";
	cin >> registerPassword;

	ofstream newUser("records.txt", ios::app);
	newUser << registerUserId << ' ' << registerPassword << endl;
	system("clear");
	cout << "\n\t\t\t Registration is successfull! \n";
	main();
}

void forgot()
{
	char option;
	system("clear");
	cout << "\t\t\t You forgot the password? No worries \n";
	cout << "Press 1 to search your ID by username " << endl;
	cout << "Press 2 to go back to the main menu " << endl;
	cout << "\t\t\t Enter your choice: ";
	cin >> option;

	switch(option){
		case '1':{
				   int count =0;
				   string searchUserId, searchId, searchPass;
				   cout << "\n\t\t\t Enter the username which you remembered: ";
				   cin >> searchUserId;

				   ifstream getUser("records.txt");
				   while(getUser >> searchId >> searchPass){
					   if(searchId == searchUserId){
						   count=1;
					   }
				   }
				   getUser.close();
				   if(count==1){
					   cout << "\n\n Your account is found! \n";
					   cout << "\n\n Your password is: " << searchPass;
					   main();
				   }
				   else{
					   cout << "\n\t Sorry, your account is not found! \n";
					   main();
				   }
				   break;
			   }
		case '2':{
				   main();
				   break;
			   }
		default:{
					cout << "\t\t\t Wrong choice! Please try again \n" << endl;
					main();
				}
	}
}
