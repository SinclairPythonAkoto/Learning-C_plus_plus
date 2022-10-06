/*
Your challenge is to set the odd elements of a dynamic array to -1

*/

#include <iostream>
using namespace std;

// print array
void print_val(int *arr, int size) {
    for (int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// set odd function 
void set_odd(int *arr, int size) {
    for (int i=0; i < size; i++) {
        if ( arr[i] % 2 != 0) {  // if not equal to 0, is odd
            arr[i] = -1;
        }
    }
}

int main() {
    cout << "\t\t\tCHALLENGE 1" << endl;
    cout << "\t\tSet odd numbers to -1" << endl;
    cout << endl;
    
    int *ptr = nullptr;
    int size = 4;
    int numbers[5] = {10, 67, 31, 98};
    ptr = numbers;
    
    cout << "original numbers: ";
    print_val(numbers, size);
    cout << "changed numbers: ";
    set_odd(ptr, size);
    print_val(numbers, size);

    return 0;
}