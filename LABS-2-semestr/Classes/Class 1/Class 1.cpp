#include<iostream>
#include<cmath>
#include<Triangle.h>
using namespace std;

Triangle make_Triangle( Triangle object)
{
	Triangle object1=object;
	cout << "\nФункция возвращает объект\n"<<endl;
	return object1;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	Triangle My;
	My.Read();
	My.show();
	make_Triangle(My);
	Triangle array[2];
	for (int i = 0; i < 2; i++)
	{
		array[i].Read();
		array[i].hipotenuse();
		array[i].show();
		make_Triangle(array[i]);
	}
	Triangle*arr = new Triangle[2];
		for (int i = 0; i < 2; i++)
		{
			arr[i].Read();
			arr[i].hipotenuse();
			arr[i].show();
			make_Triangle(arr[i]);
		}
		delete[]arr;
	return 0;
}
