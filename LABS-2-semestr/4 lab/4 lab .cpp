#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int a[100];
	int k, n;
	cout << "ââåäèòå êîë-âî ýëåìåíòîâ: ";
	cin >> n;
	cout << "Ìàññèâ èìååò âèä: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}

	cout << endl;
	cout << "ââåäèòå ÷èñëî, êîòîðîå íóæíî óäàëèòü: ";
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != k)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	cout << "÷èñëà ñ 0: \n";
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
