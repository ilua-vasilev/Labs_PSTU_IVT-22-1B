#include<iostream>
#include<ctime>
include<host.h>
using namespace std;
int max_size = 6;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	try
	{
		host first(0);//host first(0) - ошибка при удалении. host first(8)-ошибка при создании
		first.show();
		--first;
		first.show();
		cout << "Элемент с избранным индексом: " << first[0] << endl;//first[5] - ошибка вывода, такого элемента нет.
		cout << "Размер множества: " << first() << endl;
		host second(2);
		second.show();
		host third(2);
		third = first - second;
		third.show();
	}
	catch (int num)
	{
		cout << "Ошибка с кодом: " << num << endl;
		cout << "1 - выбранный размер множества недопустим. 2 - выбранный индекс недопустим. 3 - нельзя удалить элемент, размер равен 0" << endl;
	}
	return 0;
}
