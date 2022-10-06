#include <iostream>
using namespace std;

struct student {
    string name;
    int roll_number;
    int marks;
};

int main() {
    cout << "\t\t\tArray of structures" << endl;

    struct student people[100];

    people[0] = {"John", 1, 50};
    people[1] = {"Jane", 2, 43};
    people[2] = {"Alice", 3, 83};

    cout << "person 1 Information:" << endl;
    cout << "Name = " << people[0].name << endl;
    cout << "Roll Number = " << people[0].roll_number << endl;
    cout << "Marks = " << people[0].marks << endl;
    cout << endl;
    cout << "person 2 Information:" << endl;
    cout << "Name = " << people[1].name << endl;
    cout << "Roll Number = " << people[1].roll_number << endl;
    cout << "Marks = " << people[1].marks << endl;
    cout << endl;
    cout << "person 3 Information:" << endl;
    cout << "Name = " << people[2].name << endl;
    cout << "Roll Number = " << people[2].roll_number << endl;
    cout << "Marks = " << people[2].marks << endl;
    cout << endl;

    return 0;
}

/*
We can also create arrays of structures if we view the emaple above
*/