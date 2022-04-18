#include <iostream>
#include <string>
#include <fstream>  // library for file input & output 

using namespace std;

const int maxrow = 10;  // max number of rows is 10

string EmployeeName[maxrow] = {};
string EmployeeID[maxrow] = {};

// CREATE a new record
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

// READ all records
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

    // if there is no match, counter is zero
    if (counter == 0)
    {
        std::cout << "No Record found!" << endl;
    }
    std::cout << "======================================" << endl;
}

// Search for a single record (READ)
void SearchRecord(string search)
{
    system("clear");
    std::cout << "Current Record(s)" << endl;
    std::cout << "======================================" << endl;
    int counter = 0;
    for (int value = 0; value < maxrow; value++)
    {
        if (EmployeeID[value] == search)
        {
            counter++;
            std::cout << " " << counter << "    " << EmployeeID[value] << "        " << EmployeeName[value] << endl;
            break;
        }
    }

    if (counter == 0)
    {
        std::cout << "No Record found!" << endl;
    }

    std::cout << "======================================" << endl;
}

// UPDATE a single record
void UpdateRecord(string search)
{
    char name[50];
    char employeeNumber[5];
    int counter = 0;

    for (int value = 0; value < maxrow; value++)
    {
        if (EmployeeID[value] == search)
        {
            counter++;

            std::cout << "Employee Name: ";
            std::cin.getline(name, 50);

            // new updated name stored in variable
            EmployeeName[value] = name;

            std::cout << "Update Successfull!" << endl;
            break;
        }
    }

    if (counter == 0)
    {
        std::cout << "ID does not exist!" << endl;
    }
}

// DELETE a single record
void DeleteRecord(string search)
{
    int counter = 0;
    for (int value = 0; value < maxrow; value++)
    {
        if (EmployeeID[value] == search)
        {
            counter++;

            // reset selected values to empty
            EmployeeName[value] = "";
            EmployeeID[value] = "";

            std::cout << "Successfully Deleted!" << endl;
            std::cout << "Press ENTER to continue.";
            break;
        }
    }

    if (counter == 0)
    {
        std::cout << "ID Number does not exist!" << endl;
        std::cout << "Press ENTER to continue.";
    }
}



int main()
{
    std::cout << "MENU\n";
    int option;
    string empID;
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
        case 2:
            // ingore or clear input buffer
            std::cin.ignore();
            std::cout << "Search by ID >> ";
            getline(cin, empID);
            UpdateRecord(empID);
            system("clear");
            break;
        case 3:
            std::cin.ignore();
            std::cout << "Delete by ID >> ";
            getline(cin, empID);
            DeleteRecord(empID);
            std::cin.ignore();
            system("clear");
            break;
        case 4:
            std::cin.ignore();
            std::cout << "Serach by ID >> ";
            getline(cin, empID);
            SearchRecord(empID);
            break;
        case 5: ListRecord();
            break;
        }
    } while (option != 6);
}
