#include <iostream>
using namespace std;
void main()
{
	int day;
	int month;
	int month1;
	setlocale(LC_ALL, "RUS");
	cout << "ââĺäčňĺ ńíŕ÷ŕëŕ äĺíü ďîňîě ěĺń˙ö: ";
	cin >> day >> month;

	if (day < 22)
	{
		month--;
	}

	switch (month)
	{
	case 0: cout << "ęîçĺđîă"; break;
	case 1: cout << "âîäîëĺé"; break;
	case 2: cout << "đűáű"; break;
	case 3: cout << "îâĺí"; break;
	case 4: cout << "ňĺëĺö"; break;
	case 5: cout << "áëčçíĺöű"; break;
	case 6: cout << "đŕę"; break;
	case 7: cout << "ëĺâ"; break;
	case 8: cout << "äĺâŕ"; break;
	case 9: cout << "âĺńű"; break;
	case 10: cout << "ńęîđďčîí"; break;
	case 11: cout << "ńňđĺëĺö"; break;
	default: cout << "ňŕęîăî ěĺń˙öŕ íĺň!";
	}
}
