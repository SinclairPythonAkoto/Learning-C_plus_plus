/*
Your task is to subtract two complex numbers
*/

#include <iostream>
using namespace std;

struct complex_number {
    double real;
    double imaginary;
};

complex_number subtract(struct complex_number c1, struct complex_number c2) {
    struct complex_number c;
    c.real = c1.real - c2.real;
    c.imaginary = c1.imaginary - c2.imaginary;
    return c;
}

void print_complex(struct complex_number c) {
    cout << c.real << " + ";
    cout << c.imaginary << " i ";
    cout << endl;
}

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tSubtract two complex numbers" << endl;

    struct complex_number c1, c2, c;

    c1 = {-12.3, -67.4};
    c2 = {34, 89};
    
    cout << "First complex number = ";
    print_complex(c1);
    cout << "Second complex number = ";
    print_complex(c2);
    c = subtract(c1, c2);
    cout << "First complex number - Second complex number = ";
    print_complex(c);

    return 0;
}