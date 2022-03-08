#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    string hello = "Hello";

    cout << phrase << endl;
    cout << hello << endl;
    cout << hello[0] << endl;
    cout << phrase.length() << endl;

    phrase[0] = 'B';
    string subPhrase;
    subPhrase = phrase.substr(0, 8);

    cout << subPhrase << endl;

    return 0;
}
