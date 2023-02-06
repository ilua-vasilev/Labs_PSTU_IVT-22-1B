#include <iostream>

using namespace std;

int main()
{
	int a[] = { -3,8,-6,0,1,6,5 };
	int size = 7;

	for (int i = size - 1; i > 0; i--)
	{
		for (int j = size -1; j>=size-i; j--)
		{
			if (a[j-1] > a[j])
			{
				int tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
	return 0;

}