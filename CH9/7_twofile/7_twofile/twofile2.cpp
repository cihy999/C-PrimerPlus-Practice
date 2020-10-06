#include <iostream>

extern int tom;
static int dick = 20;
int harry = 300;		// external variable definition

void remote_access() 
{
	using namespace std;

	cout << "remote_access() reports the following addresses:\n"
		 << &tom << " = &tom, " << &dick << " = &dick, "
		 << &harry << " = &harry\n";
}