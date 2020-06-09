// CharType.cpp

#include <iostream>

int main()
{
    using namespace std;

    // the char type
    char ch;

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hello! ";
    cout << "Thank you for the " << ch << " character." << endl;

    //----------------------------------------------------
    cout << endl;
    // the char type and int type contrasted
    ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');

    cout << endl << "Done" << endl;

    return 0;
}
