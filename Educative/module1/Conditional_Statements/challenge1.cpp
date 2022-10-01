
/*
In this challenge you have to find the person with the highest salary.

- If person1 has the highest salary, it should print person1 to the console.
- If person2 has the highest salary, it should print person2 to the console.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tFind the person with the highest salary" << endl;
    int salary1 = 56;
    int salary2 = 89;
    if (salary1 > salary2) {
        cout << "person1";
    } else {
        cout << "person2";
    }
    
    return 0;
}