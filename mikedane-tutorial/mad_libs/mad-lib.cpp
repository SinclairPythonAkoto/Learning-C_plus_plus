#include <iostream>

using namespace std;

int main()
{
    string colour, pluralNoun, celeb;

    cout << "Enter colour: ";
    getline(cin, colour);
    cout << "Enter plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter celebrity: ";
    getline(cin, celeb);

    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are blue," << endl;
    cout << "I love " << celeb << endl;

    return 0;

}
