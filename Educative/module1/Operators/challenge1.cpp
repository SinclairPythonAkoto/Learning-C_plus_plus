/*
In this challenge you are given a character that is stored in a variable named character.

- Write a code that makes the same variable, character,
- then store the character preceding the one originally stored in it
- (if the character is B, the character before is A)
*/

#include <iostream>
using namespace std;

int main()
{
    // Stores B in a character variable
    char character = 'B';
    // Prints character value
    cout << "Given character = " << character << endl;
    // Initializes another variable character_before
    char character_before ;
    // Decrement 1 from the character and then 
    //store the updated value in character_before
    character_before = character - 1;
    // Prints updated value
    cout << "Character before = " << character_before << endl;

    return 0;
}