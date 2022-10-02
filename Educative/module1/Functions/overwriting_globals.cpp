#include <iostream>
using namespace std;

int global = 3;

void function () {
    int function_local = 10;
    cout << "global = " << global << endl;
    global = 9;
}

int main() {
    cout << "\t\t\tOverwriting a global variable" << endl;
    int main_local = 20;
    global = 7;
    cout << "global = " << global << endl;
    global = 7;

    function();
    cout << "global = " << global << endl;

    return 0;
}

/*
From the code above, we can see that we can overwrite global variables
*/