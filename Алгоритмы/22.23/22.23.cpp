#include <iostream>

using namespace std;



int main()
{
	setlocale(LC_ALL, "RUS");
	float n, a, pos = 0, max, i = 1, k = 0;

	cout << "введите количество элементов n" << endl;
	cin >> n;
	max = sin(n + (i / n));

	for (int i = 2; i <= n; i++)
	{
		a = sin(n + (i / n));
		if (a > max)
		{
			max = a;
		}
		else if (a = max)
		{
			k++;
		}
	}
	cout << "количество элементов: " << k << endl;

}