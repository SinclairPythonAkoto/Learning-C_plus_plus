#include <iostream>
using namespace std;

struct student {
    string name;
    int roll_number;
    int marks;
};

int main() {
    
    return 0;
}

/*
When we want to use a struct we have to define it first - this will tell the compiler 
what the structure will look like.

The syntax to define a struct below:

    struct struct_name {
        
        data_type member1 ;
        data_type member2 ;
    };

If we forget the semi-colon at the end of the struct, it will generate an error.

A structure cannot contain a member of its own type.

REMEMBER!!
    - Do not get confused with classes, a struct is a also a data structure but 
      does not store functions unlike classes

*/