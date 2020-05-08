// Carrots.cpp : food processing program uses and display a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots = 25;

    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots--;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots.";
    cin.get();
    return 0;
}
