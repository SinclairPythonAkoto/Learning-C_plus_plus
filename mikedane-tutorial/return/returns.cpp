#include <iostream>

using namespace std;

// multiply a number to the power of 3
double cube(double num);

int main()
{
    double userNum;
    cout << "Please enter a number: ";
    cin >> userNum;

    double answer = cube(userNum);
    cout << answer << endl;

    return 0;

}

double cube(double num){
    return num * num * num;
}
