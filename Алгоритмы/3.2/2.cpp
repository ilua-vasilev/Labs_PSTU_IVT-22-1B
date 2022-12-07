#include <iostream>

int main()
{
	int number1, number2;
	std::cin >> number1 >> number2;

	int* pnumber1 = &number1;
	int* pnumber2 = &number2;

	int r_number1 = *(pnumber1);
	int r_number2 = *(pnumber2);

	std::cout << r_number1 + r_number2 << std::endl;
}
