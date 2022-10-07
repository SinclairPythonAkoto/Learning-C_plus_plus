/*
Calculate percentage of students
*/

#include <iostream>
using namespace std;

struct Student {
    string name;
    double marks[4];
};

// function to calculate %
double calculate_percentage(struct Student s) {
    double percentage = 0, total=0;
    int size=4, total_marks=400;
    // add marks together
    for (int i=0; i < 4; i++) {
        total += s.marks[i];
    }
    // calculate percentage
    percentage = (total / total_marks) * 100;
    return percentage;
}

void print_data (struct Student s) {
    cout << "Student name = " << s.name << endl;
    cout << "Student marks:" << endl;
    for (int m=0; m < 4; m++) {
        cout << "subect 1 = " << s.marks[m] << endl;
    }
}

int main() {
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tCalculate the overall percentage";
    
    double result;
    struct Student stu;
    stu = {"John", {30.500000 , 49.700000 , 22.300000 , 32.900000 }};
    result = calculate_percentage(stu);
    
    print_data(stu);
    
    cout << "percentage = " << result << "%" << endl;
    
    return 0;
}