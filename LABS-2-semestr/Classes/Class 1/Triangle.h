#pragma once
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
