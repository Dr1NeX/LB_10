#include<iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double r, PI = 3.141592653589793238, S, P;
	r = 20;
	S = PI * (r * r);
	P = 2 * PI * r;
	cout << "Площа = " << S << endl;
	cout << "Периметр = " << P << endl;
	system("pause>>voice");
	return 0;
}