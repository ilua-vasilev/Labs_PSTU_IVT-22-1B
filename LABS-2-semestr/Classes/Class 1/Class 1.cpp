#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
	public:
	double first;
	double second;
	double hipo;
	void Read()
	{
		cout << "Введите первый катет: ";
		cin >> first;
		cout << endl << "Введите второй катет: ";
		cin >>second;
		Init();
	}
	void Init()
	{
		if (first == round(first) or second == round(second))
		{
			cout << "Введено целое число, программа завершена!" << endl;
			abort();
			
		}
		else
		{
			cout << "Введены дробные числа, считаем..." << endl;
			hipotenuse();
		}

	}
	void hipotenuse()
	{
		hipo =sqrt(pow(first, 2) + pow(second, 2));
	}
	void show()
	{
		cout << endl << "Гипотенуза равна: " << hipo << endl;
	}
	
};
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
