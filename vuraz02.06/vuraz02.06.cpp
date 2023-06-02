
#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "математичний вираз" << endl;
	int x, p;
	cout << "write ur x: ";
	cin >> x;
	p = (3 * pow(x, 3)) - (2 * pow(x, 2)) + (3 * x) - 1;
	cout << p;
}
