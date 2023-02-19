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
	if (a == 0) { return "ãîä îáåçüÿíû"; }
	if (a == 1) { return "ãîä ïåòóõà"; }
	if (a == 2) { return "ãîä ñîáàêè"; }
	if (a == 3) { return "ãîä ñâèíüè"; }
	if (a == 4) { return "ãîä êðûñû"; }
	if (a == 5) { return "ãîä áûêà"; }
	if (a == 6) { return "ãîä òèãðà"; }
	if (a == 7) { return "ãîä êðîëèêà"; }
	if (a == 8) { return "ãîä äðàêîíà"; }
	if (a == 9) { return "ãîä çìåè"; }
	if (a == 10) { return "ãîä ëîøàäè"; }
	if (a == 11) { return "ãîä êîçû"; }
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int year;
	cout << "ââåäèòå ãîä: ";
	cin >> year;
	char a = ost(year);
	cout << year << " " << ost(a) << endl;
}
