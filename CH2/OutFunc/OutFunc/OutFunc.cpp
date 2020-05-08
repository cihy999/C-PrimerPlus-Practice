// OutFunc.cpp : difining your own function

#include <iostream>;

using namespace std;

void Simon(int);

int main()
{
	Simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	Simon(count);
	cout << "Done!" << endl;
	cin.get();
	cin.get();
	return 0;
}

void Simon(int n) 
{
	cout << "Simon says touch your toes " << n << " times" << endl;
}
