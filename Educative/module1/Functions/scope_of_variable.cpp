#include <iostream>
using namespace std;

int global = 3;

void function () {
    int function_local = 10;
    cout << "global = " << global << endl;
}

int main() {
    cout << "\t\t\tUsing global variables" << endl;
    
    int main_local = 29;
    cout << "global = " << global << endl;
    function();

    return 0;
}

/*
A global variable allows you to access the value from the moment they are 
declared all they way to the end of the program.
    - This means any function created and the main function have access to the 
      global variable
    - They are declared at the very top of the program
    - If you try to create a global variable in the middle of the script,
      you will come accross an error (global variables always has to be at the top)
*/