#include <iostream>

extern double warming; // use warming from another file

void update(double dt);
void local();

using std::cout;

void update(double dt) 
{
	//extern double warming;	// Optional redeclaration
	warming += dt;
	cout << "Update global warming to " << warming << " degress.\n";
}

void local() 
{
	double warming = 0.8;

	cout << "Local warming = " << warming << " degress.\n";
	cout << "But global warming = " << ::warming << " degress.\n";
}