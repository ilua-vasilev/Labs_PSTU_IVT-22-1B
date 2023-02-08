#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int a[100];
	int k, n;
	cout << "введите кол-во элементов: ";
	cin >> n;
	cout << "Массив имеет вид: ";
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}

	cout << endl;
	cout << "введите число, которое нужно удалить: ";
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != k)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	cout << "числа с 0: \n";
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