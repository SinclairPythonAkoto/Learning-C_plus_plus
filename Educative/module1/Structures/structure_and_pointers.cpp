#include <iostream>
using namespace std;

struct student {
    string name;
    int roll_number;
    int marks;
};

int main() {
    cout << "\t\t\tStructure and pointers" << endl;

    // Declare structure variable
    struct student s1;
    // Declare structure pointer
    struct student *ptrs1;
    // Store address of structure variable in structure pointer
    ptrs1 = &s1;
    
    // Set value of name
    (*ptrs1).name = "John";
    // Set value of roll_number{}
    (*ptrs1).roll_number = 1;
    // Set value of marks
    (*ptrs1).marks = 50;

    // Print value of structure member
    cout << "s1 Information:" << endl;
    cout << "Name = " << (*ptrs1).name << endl;
    cout << "Roll Number = " << (*ptrs1).roll_number << endl;
    cout << "Marks = " << (*ptrs1).marks << endl;

    return 0;

}

/*
We can create a pointer that points to an existing structure, and access the values
from there.  We can also insert data into a struct by using the pointer.

There are two ways we can create & access structure members trhough a structure pointer.

Indirection and dot operator:

    ( *structure_pointer ) . structure_member ;

(A structure member are the different data types you can store in a structure).

Arrow operator:

    structure_pointer -> structure_member ;

eg.
    ptrs2 -> name = "John";

As you can see, using the pointer with the arrow operator uses a lot less syntax.
    - Uing the dot operator or arrow operator is the same thing.
    - If we are using the dot operator, we must encase the struct pointer in
      brackets, then followed by the dtrucct member

*/