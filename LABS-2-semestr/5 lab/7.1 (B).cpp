#include <iostream>
using namespace std;
void main()
{
	int day;
	int month;
	int month1;
	setlocale(LC_ALL, "RUS");
	cout << "������� ������� ���� ����� �����: ";
	cin >> day >> month;

	if (day < 22)
	{
		month--;
	}

	switch (month)
	{
	case 0: cout << "�������"; break;
	case 1: cout << "�������"; break;
	case 2: cout << "����"; break;
	case 3: cout << "����"; break;
	case 4: cout << "�����"; break;
	case 5: cout << "��������"; break;
	case 6: cout << "���"; break;
	case 7: cout << "���"; break;
	case 8: cout << "����"; break;
	case 9: cout << "����"; break;
	case 10: cout << "��������"; break;
	case 11: cout << "�������"; break;
	default: cout << "������ ������ ���!";
	}
}