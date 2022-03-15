#include <iostream>

class VisitorLogin 
{
	private:
		std::string adminPass;

	public:
		void mainMenu();
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
					   std::cout << "HR LOGIN" << std::endl;
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

int main()
{
	VisitorLogin visitorlogin;
	visitorlogin.mainMenu();
		//std::cout << "hello world!" << std::endl;

	return(0);
}
