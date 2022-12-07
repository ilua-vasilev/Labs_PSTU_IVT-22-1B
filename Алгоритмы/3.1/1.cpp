#include <iostream>

int main()
{
	int number1, number2;

	std::cout << "введите два числа: " << std::endl;

	std::cin >> number1 >> number2;

	int* pnumber1 = &number1;
	int* pnumber2 = &number2;

	std::cout << "number 1: " << *pnumber2 << std::endl;
	std::cout << "number 2: " << *pnumber1 << std::endl;
}
