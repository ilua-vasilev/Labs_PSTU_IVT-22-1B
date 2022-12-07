#include <iostream>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int number1, number2;
	std::cin >> number1 >> number2;

	std::cout << "swapped" << std::endl;

	swap(&number1, &number2);

	std::cout << "number 1: " << number1 << std::endl;
	std::cout << "number 2: " << number2 << std::endl;
}