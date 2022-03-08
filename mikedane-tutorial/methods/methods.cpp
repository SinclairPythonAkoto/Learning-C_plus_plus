#include <iostream>

using namespace std;

void sayHi();
void sayHello(string name, int age);

int main()
{
    sayHi();
    sayHello("Mike", 32);
    sayHello("Sinclair", 35);
}

void sayHi(){
    cout << "Hi how are you?" << endl;
}

void sayHello(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}
