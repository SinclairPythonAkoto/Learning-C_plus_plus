#include <iostream>
#include <string>
#include <fstream>  // library for file input & output 

using namespace std;

const int maxrow = 10;  // max number of rows is 10

string EmployeeName[maxrow] = {};
string EmployeeID[maxrow] = {};

int main()
{
    std::cout << "MENU\n";
    int option;
    system("CLS");  // "clear" for MacOS -> I think!

    do {
        std::cout << "1 - Create Records" << endl;
        std::cout << "2 - Update Records" << endl;
        std::cout << "3 - Delete Records" << endl;
        std::cout << "4 - Search Records" << endl;
        std::cout << "5 - Display all Records" << endl;
        std::cout << "6 - Exit and Save to Textfile" << endl;

        std::cout << "Select an option >> ";
        std::cin >> option;
    } while (option != 6);
}
