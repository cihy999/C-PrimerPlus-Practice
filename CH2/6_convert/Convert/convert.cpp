// Convert.cpp : converts stone to pounds

#include <iostream>;

int stoneTolb(int);

int main()
{
	using namespace std;

	cout << "Enter the weight in stone: ";
	int stone;
	cin >> stone;
	int pounds = stoneTolb(stone);
	cout << stone << " stone = " << pounds << " pounds." << endl;
	return 0;
}

int stoneTolb(int sts) 
{
	return sts * 14;
}