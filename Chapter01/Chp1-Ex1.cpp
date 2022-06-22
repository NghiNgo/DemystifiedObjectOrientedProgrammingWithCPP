#include <iostream>

using namespace std;

int main()
{
    char name[20];
    int age;
    cout << "Please enter a name and an age: ";
    cin >> name >> age;
    cout << "Hello " << name;
    cout << ". You are " << age << " years old." << endl;
    return 0;
}
