/*
You are given a radius r of the sphere.
- Your task is to find the area of the sphere using the following formula:

    area = 4 * pi * (r**2)
    pi = 3.14
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\t\t\tCHALLENGE 3";
    cout << "\t\tCalculate the area of the sphere";
    double r = 10.1;
    cout << "r = " << r << endl;
    const double pi = 3.14;
    double area;
    area = 4 * pi * r*r;
    cout << "area = " << area;
}