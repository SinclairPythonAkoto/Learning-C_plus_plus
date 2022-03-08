#include <iostream>

using namespace std;

int main()
{
    // creating array
    int myArray[] = {4, 8, 15, 16, 23, 42};
    cout << myArray[0] << endl;
    cout << myArray[3] << endl;
    
    // setting a size of the array (20  elements)
    int luckyNums[20] = {3, 5, 65, 10, 86, 40};
    luckyNums[10] = 100;
    cout << luckyNums[3] << endl;
    cout << luckyNums[10] << endl;

    // adding values to an empty list - by list index
    int phoneNum[11];
    phoneNum[1] = 7;
    phoneNum[10] = 9;
    cout << phoneNum[1] << endl;
    cout << phoneNum[10] << endl;

    return 0;
}
