#include <iostream>
#include "linear_equation.h"
using namespace std;

void linear_equation::Read()
{
	cout << "first?: ";
	cin >> first;
	cout << "second?: ";
	cin >> second;
}
void linear_equation::Show()
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}
void linear_equation::Init(float A, float B)
{
	first = A;
	second = B;
}
void linear_equation::root()
{
	float x;
	if (first != 0)
	{
		x = -(second / first);
		cout << "Êîðåíü ðàâåí: " << x << endl;
	}
	else
	{
		cout << "A ðàâíî íóëþ" << endl;
	}
}
