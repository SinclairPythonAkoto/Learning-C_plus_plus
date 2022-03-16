#include <iostream>
#include <fstream>

class VisitorLogin 
{
	private:
		std::string adminPass;

	public:
		void mainMenu();
		void adminMenu();
};

void VisitorLogin :: mainMenu(){
menu:
	int choice;

	std::cout << "Company Login System" << std::endl;
	std::cout << "\n\n1) HR login" << std::endl;
	std::cout << "\n\n2) Staff login" << std::endl;
	std::cout << "\n\n3) Exit" << std::endl;

	std::cout << "Please select the options below:" << std::endl;
	std::cin >> choice;

	switch(choice){
		case 1:{
				   std::string adminPass = "hr123";
				   std::string hrPass;
				   std::cout << "please login with your admin password." << std::endl;
				   std::cin >> hrPass;

				   if (hrPass == adminPass){
					   adminMenu();
					   break;
				   }
				   else{
					   goto menu;
				   }
				   break;
			   }

		case 2:{
				   std::cout << "STAFF LOGIN" << std::endl; break;
			   }

		case 3:{
				   exit(0); break;
			   }

		default:
			   std::cout << "Please select a valid number from the options listed." << std::endl;
			   goto menu;
	}
}

void VisitorLogin :: adminMenu(){
menu:
	int choice;
system("clear");
	std::cout << "Adminstration Menu" << std::endl;
	std::cout << "\n\n 1) Create staff member" << std::endl;
	std::cout << "\n\n 2) Remove staff member" << std::endl;
	std::cout << "\n\n 3) Back to main menu" << std::endl;
	std::cout << "\n\n 4) Exit" << std::endl;

	std::cout << "\n\n Please select from the options above: ";
	std::cin >> choice;

	switch(choice){
		case 1:{
				   int staffId;
				   std::string firstName, lastName, department, username, staffPass;

				   system("clear");
				   std::cout << "Create new staff member." << std::endl;
				   std::cout << "Please fill the details to create a new employee.\n\n" << std::endl;
				   std::cout << "Enter staff ID: ";
				   std::cin >> staffId;
				   std::cout << "\n\n Enter staff first name: ";
				   std::cin >> firstName;
				   std::cout << "\n\n Enter staff last name: ";
				   std::cin >> lastName;
				   std::cout << "\n\n Enter staff department: ";
				   std::cin >> department;
				   std::cout << "\n\n Enter staff username: ";
				   std::cin >> username;
				   std::cout << "\n\n Create staff password: ";
				   std::cin >> staffPass;

				   std::ofstream newStaff("companyEmployees.csv", std::ios::app|std::ios::out);
				   newStaff << staffId << "," << firstName << "," << lastName << "," << department << "," << username << "," << staffPass;
				   system("clear");
				   std::cout << "\n Employee successfully created!" << std::endl;
				   goto menu;
				   break;
			   }

		default:
			   std::cout << "Please select a correct option." << std::endl;
			   goto menu;

	}

}

int main()
{
	VisitorLogin visitorlogin;
	visitorlogin.mainMenu();
	//std::cout << "hello world!" << std::endl;

	return(0);
}
