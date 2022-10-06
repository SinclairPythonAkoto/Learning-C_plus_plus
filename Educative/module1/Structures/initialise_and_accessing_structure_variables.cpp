#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll_number;
    int marks;
};

int main() {
    cout << "\t\t\tInitialising & accessing members" << endl;

    Student s1, s2, s3;

    // version 1 
    s1.name = "John";
    s1.roll_number = 1;
    s1.marks = 50;

    // version 2
    s2 = {"Jane", 2, 43};

    cout << "s1 Information:" << endl;
    cout << "Name = " << s1.name << endl;
    cout << "Roll Number = " << s1.roll_number << endl;
    cout << "Marks = " << s1.marks << endl;

    cout << "s2 Information:" << endl;
    cout << "Name = " << s2.name << endl;
    cout << "Roll Number = " << s2.roll_number << endl;
    cout << "Marks = " << s2.marks << endl;

    return 0;

}


/*
There ae two ways to store values of structure variable

version 1:

    structure_variable . member_variable = value ;

version 2:

    structure_value = { value1, value2, value3 } ;

As yo ucan see the sencond way of assigning values to a structure variable 
is much shorter - just one line.
*/