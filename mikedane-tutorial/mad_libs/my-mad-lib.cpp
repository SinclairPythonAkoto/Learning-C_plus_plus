#include <iostream>

using namespace std;

int main()
{
    string mood, dream, food, music, body;

    cout << "Describe your mood two days ago: ";
    getline(cin, mood);
    cout << "What is the weirdest dream you've had? ";
    getline(cin, dream);
    cout << "What did you eat for lunch yesterday? ";
    getline(cin, food);
    cout << "What is your favourite music? ";
    getline(cin, music);
    cout << "What is the least favourite part of your body? ";
    getline(cin, body);

    cout << "\n****** MAD LIBS GAME!! ******\n" << endl;
    cout << "This morning I woke up feeling " << mood << endl;
    cout << "It maybe because last night  I had a dream about " << dream << endl;
    cout << "Today I had " << food << " for breakfast, before I went to work." << endl;
    cout << "I was listening to " << music << " while I was at the gym, but hurt my " << body << " so I went back home!" << endl;

    return 0;
}
