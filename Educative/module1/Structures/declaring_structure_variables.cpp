#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll_number;
    int marks;
};

// declaring structure variable in structure definition
struct Student1 {
    string name;
    int roll_number;
    int marks;
} s1, s2, s3;

int main() {
    cout << "\t\t\tDeclare structure variables in C++" << endl;

    Student s1, s2, s3;     // we havecreated 3x intances of the structure

    return 0;
}

/*
A structure variable is like building construct from the blueprint.

The syntax to create a structure variable:

    struct_name variable_name ;

To declare a structure variable in a program, we write the name of the structure
followed by the name of structure variable, which is further followed by a semi-colon

We can also declare a structure variable in the structure definition.

    struct struct_name {

        data_type member1;
        data_type member2;

    } variable1, variable2, variable3;
*/