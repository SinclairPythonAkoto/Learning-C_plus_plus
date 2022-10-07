/*
Calculate the sum and the absoloute difference

*/

#include <iostream>
using namespace std;

void sum_difference (int *value1, int *value2) {
    int diff=0, sum=0;
    sum = *value1 + *value2;
    diff = *value1 - *value2;
    // check if difference is negative
    if (diff < 0){
        diff = diff * -1;   // multiply by -1 to make positive
    }
    // store sum in pointer 1
    *value1 = sum;
    // store difference in pointer 2
    *value2 = diff;
}

int main() {
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tCalculate sum and absolute difference" << endl;

    int num1=5, num2=4;

    cout << "Values before the function call:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    // call function
    sum_difference(&num1, &num2);
    cout << "Values after calling function:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}