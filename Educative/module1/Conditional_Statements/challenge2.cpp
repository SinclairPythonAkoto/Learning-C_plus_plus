/*
In this challenge you have to find whether the given character is an upper-case 
alphabet, a lower-case alphabet or a non-alphabetic character.

- If the character is an upper-case alphabet, it should print the 'upper-case alphabet' to 
  the console.
- If the character is lower-case alphabet, it should print the 'lower-case alphabe't to the console.
- If the character is a non-alphabetic character, it should print 'not an alphabet' to the console.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\tCHALLENGE 2" << endl;
    cout << "\t\tCheck if the given character is an alphabet" << endl;
    char character = 'a';
    
    if (character >= 'A' && character <= 'Z') {
        cout << "upper-case alphabet";
    }
    else if (character >= 'a' && character <= 'z') {
        cout << "lower-case alphabet";
    }
    else {
        cout << "not an alphabet";
    }
    return 0;
}