#include <iostream>

void fact(int* number, int* result)
{
	for (int i = 1; i <= *number; i++)
	{
		*result *= i;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int number, result = 1;

	std::cout << "введите число: ";
	std::cin >> number;
	fact(&number, &result);
	std::cout << "факториал равен: " << result;
}