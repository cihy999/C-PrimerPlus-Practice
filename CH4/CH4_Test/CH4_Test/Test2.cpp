#include <iostream>
#include <string>

using namespace std;

void Test2()
{
    string name;
    string dessert;
    const int ArSize = 20;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}