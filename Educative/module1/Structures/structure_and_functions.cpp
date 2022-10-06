#include <iostream>
using namespace std;

struct student {
    string name;
    int roll_number;
    int marks;
};

// create a new student
student new_student(string name, int roll_number, int marks) {
    student s;
    s.name = name;
    s.roll_number = roll_number;
    s.marks = marks;
    return s;
}

// print student
void print_student(struct student pupil) {
    cout << "Student information" << endl;
    cout << "Name = " << pupil.name << endl;
    cout << "Roll Number = " << pupil.roll_number << endl;
    cout << "Marks = " << pupil.marks << endl;
}

int main() {
    cout << "\t\t\tStructure and functions" << endl;

    struct student pupil[100];

    pupil[0] = new_student("John", 1, 50);
    print_student(pupil[0]);

    pupil[1] = new_student("Jane", 2, 43);
    print_student(pupil[1]);

    return 0;
}

/*
We can also pass structres into functions, the syntax to do this below.

Initialise function:

    data_type function_name ( struct_name structure_variable );

Call function:

    function_name ( structure_variable ) ;

REMEMBER!!
    - By returning a structure from a function, we can can return multiple
    variables of different data types.
*/