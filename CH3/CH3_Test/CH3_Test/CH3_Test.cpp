// CH3_Test.cpp : C++ Primer Plus CH 3 程式測驗
#include<iostream>
using namespace std;

int main()
{
	double gasline;
	cout << "輸入你的油耗( 公升/100公里)：";
	cin >> gasline;

	const double toMile = 62.14;
	const double toGal = 3.875;
	double gallon = gasline / toGal;

	cout << gasline << " 公升/100公里 = "
		<< long(toMile / gallon) << " mpg"
		<< endl;

	return 0;
}
