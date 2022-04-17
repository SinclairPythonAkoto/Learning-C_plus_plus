#include <iostream>
#include <string>
#include <fstream>  // library for file input & output 

using namespace std;

const int maxrow = 10;  // max number of rows is 10

string EmployeeName[maxrow] = {};
string EmployeeID[maxrow] = {};

void AddRecord()
{
    char name[50];
    char employeeNumber[5];

    std:cin.ignore();

    std::cout << "Employee ID. ";
    std::cin.getline(employeeNumber, 5);
    std::cout << "Employee Name. ";
    std::cin.getline(name, 50);

    // loop through the arrays to find if array is empty
    for (int x = 0; x < maxrow; x++)
    {
        if (EmployeeID[x] == "\0")
        {
            EmployeeID[x] = employeeNumber;
            EmployeeName[x] = name;

            break;
        }
    }
}

void ListRecord()
{
    system("clear");
    std::cout << "Current Record(s)" << endl;
    std::cout << "======================================" << endl;

    // add a counter to keep track of list entries
    int counter = 0;
    // creating the header
    std::cout << "No.  |   ID   |     NAME    " << endl << "-------------------------------------\n";
    // display values inside array
    for (int value = 0; value < maxrow; value++)
    {
        if (EmployeeID[value] != "\0")
        {
            counter++;
            std::cout << " " << counter << "     " << EmployeeID[value] << "         " << EmployeeName[value] << endl;
        }
    }

    if (counter == 0)
    {
        std::cout << "No Record found!" << endl;
    }
    std::cout << "======================================" << endl;
}

int main()
{
    std::cout << "MENU\n";
    int option;
    system("clear");  // "CLS" for Windows 

    do {
        std::cout << "1 - Create Records" << endl;
        std::cout << "2 - Update Records" << endl;
        std::cout << "3 - Delete Records" << endl;
        std::cout << "4 - Search Records" << endl;
        std::cout << "5 - Display all Records" << endl;
        std::cout << "6 - Exit and Save to Textfile" << endl;

        std::cout << "Select an option >> ";
        std::cin >> option;

        switch (option)
        {
        case 1: AddRecord();
            system("clear");
            break;
        case 5: ListRecord();
            break;
        }
    } while (option != 6);
}