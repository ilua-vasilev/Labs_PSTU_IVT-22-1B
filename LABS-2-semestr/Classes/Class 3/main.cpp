#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
	Money a;
	Money b;
	Money c;
	Money d;
	cin >> a;
	cin >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	c = a + b;
	cout << "c = a + b = " << c << endl;
	d = a - b;
	cout << "d = a - b = " << d << endl;
	return 0;
}
