#include <iostream>
using namespace std;

int ost(int year)
{
	int a;
	a = year % 12;
	return a;
}

string ost(char a)
{
	setlocale(LC_ALL, "RUS");
	if (a == 0) { return "год обезьяны"; }
	if (a == 1) { return "год петуха"; }
	if (a == 2) { return "год собаки"; }
	if (a == 3) { return "год свиньи"; }
	if (a == 4) { return "год крысы"; }
	if (a == 5) { return "год быка"; }
	if (a == 6) { return "год тигра"; }
	if (a == 7) { return "год кролика"; }
	if (a == 8) { return "год дракона"; }
	if (a == 9) { return "год змеи"; }
	if (a == 10) { return "год лошади"; }
	if (a == 11) { return "год козы"; }
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int year;
	cout << "введите год: ";
	cin >> year;
	char a = ost(year);
	cout << year << " " << ost(a) << endl;
}