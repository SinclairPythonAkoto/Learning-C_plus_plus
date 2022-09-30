/*
In this challenge, you are given the total number of seconds.
- Your task is to display the number of hours, minutes and seconds in it.

*/

#include <iostream>
using namespace std;

int main()
{
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tCalculate hours, minutes, seconds" << endl;
    
    int total_seconds = 3870;
    cout << "total_seconds = " << total_seconds << endl; 
    int hours, minutes, seconds;
    // Convert seconds in hours and store the output in hours variable
    hours = total_seconds/3600;
    cout << "Time in hours, minutes and seconds = ";
    // Prints value of hours
    cout << hours << "h :";
    // Store the remaining seconds in total_seconds
    total_seconds = total_seconds % 3600;
    // Convert seconds in minutes and store the output in minutes variable
    minutes = total_seconds/60;
    // Prints value of minutes
    cout << minutes << "m :";
    // Store the remaining seconds in seconds variable
    seconds = total_seconds % 60;
    cout << seconds << "s";
    
    return 0;
}