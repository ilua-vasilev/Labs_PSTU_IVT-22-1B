#include <iostream>
#include "Dialog.h"
#include "Windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "RUS");
	cout << "+ - �������� �������" << "\n";
	cout << "- - ������� �������" << "\n";
	cout << "m - ������� ������(m2 - �� 2 ���������)" << "\n";
	cout << "s - �������� ������" << "\n";
	cout << "? - ������� ������������ �������(?1 - ����� 1)" << "\n";
	cout << "q - �����" << endl;
	Dialog D;
	D.Execute();
	return 0;
}

