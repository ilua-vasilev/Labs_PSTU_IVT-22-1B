#include <iostream>
#include <stdarg.h>
using namespace std;

int max(int k, ...)
{
	va_list factor;
	va_start(factor, k);
	int min = 10000;
	int tmp = va_arg(factor, int);
	for (int i = 1; i < k; i++)
	{
		int tmp1 = va_arg(factor, int);
		if (tmp<min)
		{
			min = tmp;
			tmp = tmp1;
			tmp1 = min;
		}
	}
	va_end(factor);
	return min;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << max(5, 4, 2, 1, 4, 5) << endl;
	cout << max(10, 2, 4, 6, 8, 10, 12, 14, 16, 17, 18) << endl;
	cout << max(12, 3, 5, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12) << endl;
	return 0;
}