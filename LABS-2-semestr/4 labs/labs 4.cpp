#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int a[100];
	int k, n;
	cout << "������� ���-�� ���������: ";
	cin >> n;
	cout << "������ ����� ���: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}

	cout << endl;
	cout << "������� �����, ������� ����� �������: ";
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != k)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	cout << "����� � 0: \n";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i]!=k)
		{
			cout << "0 " << a[i]<<" ";
		}
		else if (a[i] != k)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}