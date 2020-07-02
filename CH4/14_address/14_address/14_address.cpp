// 14_address.cpp : using the & operator to find address

#include <iostream>

int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and dounts address = " << &donuts << endl;
    cout << "cups values = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}