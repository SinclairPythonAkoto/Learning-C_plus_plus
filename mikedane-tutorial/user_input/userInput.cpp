#include <iostream>

using namespace std;

int main()
{
    // user input - string
    string name;
    cout << "What is your name? ";
    getline(cin, name);

    // user input - integer
    int age;
    cout << "What is your age? ";
    cin >> age;
    cout << "Hello " << name << ". You are " << age << " years old" << endl;

    return 0;
}
