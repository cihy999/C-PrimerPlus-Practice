// CH2_Test.cpp : C++ Primer Plus CH 2 程式測驗

#include <iostream>

using namespace std;

void ShowTime(int, int);

int main()
{
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int min;
	cin >> min;
	ShowTime(hour, min);
	cin.get();
	cin.get();
	return 0;
}

void ShowTime(int h, int m) 
{
	cout << "Time: " << h << ":" << m << endl;
}