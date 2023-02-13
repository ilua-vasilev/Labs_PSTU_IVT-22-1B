#include <iostream>
using namespace std;
void main()
{
	int day;
	int month;
	int month1;
	setlocale(LC_ALL, "RUS");
	cout << "введите сначала день потом мес€ц: ";
	cin >> day >> month;

	if (day < 22)
	{
		month--;
	}

	switch (month)
	{
	case 0: cout << "козерог"; break;
	case 1: cout << "водолей"; break;
	case 2: cout << "рыбы"; break;
	case 3: cout << "овен"; break;
	case 4: cout << "телец"; break;
	case 5: cout << "близнецы"; break;
	case 6: cout << "рак"; break;
	case 7: cout << "лев"; break;
	case 8: cout << "дева"; break;
	case 9: cout << "весы"; break;
	case 10: cout << "скорпион"; break;
	case 11: cout << "стрелец"; break;
	default: cout << "такого мес€ца нет!";
	}
}