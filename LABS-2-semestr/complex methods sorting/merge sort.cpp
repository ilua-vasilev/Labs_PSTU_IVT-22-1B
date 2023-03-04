#include <cmath>
#include <iostream>

using namespace std;

void merge(int first, int last, int *a)
{
	int middle, start, final;
	int *arr = new int[100];
	middle = (first + last) / 2;
	start = first;
	final = middle + 1;
	for (int j = first; j <= last; j++)
	
	if ((start <= middle) && ((final > last) || (a[start] < a[final])))
	{
		arr[j] = a[start];
		start++;
	}
	else
	{
		arr[j] = a[final];
		final++;
	}
	for (int j = first; j <= last; j++)
	{
		a[j] = arr[j];
	}
	delete[]arr;
}
void mergesort(int *a, int first, int last)
{
	if (first < last)
	{
		mergesort(a, first, (first + last) / 2);
		mergesort(a, (first + last) / 2 + 1, last);
		merge(first, last, a);
	}
};

void main()
{
	setlocale(LC_ALL, "RUS");
	int i, n;
	int* a = new int[100];
	cout << "Размер массива: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << i << " элемент ";
		cin >> a[i];
	}
	mergesort(a, 1, n);
	cout << "Готовая сортировка :";
	for (i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	delete[]a;
	system("pause>>void");
}