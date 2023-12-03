#include<iostream>
using namespace std;

int main()
{
	setlocale(0, ".1251");
	double h1,h2,g = 9.8, t1 = 1, t2 = 2;
	h1 = g * (t1 * t1) / 2;
	h2 = g * (t2 * t2) / 2;
	cout << "Пройдений шлях за 1 секунду = " << h1 << endl;
	cout << "Пройдений шлях за 2 секунди = " << h2 << endl;
	system("pause>>voice");
	return 0;
}
