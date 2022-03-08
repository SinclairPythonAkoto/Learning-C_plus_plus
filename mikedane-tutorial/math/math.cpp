#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num = 10;

    cout << "Quick maths: " << 2 * 3 << endl;          // Basic mathmatics: +, -, /, *
    cout << "Modulus operator: " << 10 % 3 << endl;    // Returns the remainder of 10/3
    cout << "Order of math: " << 1 + 2 * 3 << endl;    // multiplication/division 1st, addition/subtraction 2nd
    
    // increment by 1
    num++;
    cout << "Increase by 1: " << num << endl;

    // decrease by 1
    num = 10;
    num--;
    cout << "Decrease by 1: " << num << endl;

    // Add specific value
    num  = 100;
    num += 10;
    cout << "Add value: " << num << endl;

    //Subtract specific value
    num = 100;
    num -= 10;
    cout << "Subtract value: " << num << endl;

    // Divide specific value
    num = 100;
    num /= 20;
    cout << "Divide value: " << num << endl;

    // Multiply specific value
    num = 100;
    num *= 2;
    cout << "Multiply value: " << num << endl;

    // To the power of..
    cout << "2 to the power of 3: " << pow(2, 3) << endl;

    // Square root
    cout << "Square root of 36: " << sqrt(36) << endl;

    // Round 
    cout << "Round to the nearest number: " << round(4.3) << endl;
    
    // Forcibly round up
    cout << "Force to up nearest number: " << ceil(4.1) << endl;

    // Forcibly round down
    cout << "Force down to nearest number: " << floor(4.8) << endl;
    
    // Max number
    cout << "Find max number: " << fmax(3, 10) << endl;
    
    // Min number
    cout << "Find min number :" << fmin(3, 10) << endl;
    
    return 0;
}
