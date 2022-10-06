#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tDeallocating dynamic memory" << endl;

    int *ptr = nullptr;
    ptr = new int;
    *ptr = 100;
    cout << *ptr << endl;

    // free up emmory
    delete ptr;

    int a = 70;
    // store new variable in ptr
    ptr = &a;

    cout << *ptr;

    return 0;
}

/*
Because we are using a dynamic memory, we will need to delete it ourselves 
when it is no longer in use.

We use the 'delete' operator to remove dynamically allocated space.
    - The pointer can still be used in the program after the memory 
      has been removed.  We can use the pointer of the same 
      data type afterwards.
    - It's always good practice to set the pointer variable to 'nullptr'
      after the memory is removed.

The syntax to remove memory from the pointer:

    delete pointer;
*/