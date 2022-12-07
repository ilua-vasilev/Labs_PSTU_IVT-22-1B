#include <iostream>

int main()
{
	float number1, number2;
	std::cin >> number1 >> number2;

	float* pnumber1 = &number1;
	float* pnumber2 = &number2;

	float r_number1 = *(pnumber1);
	float r_number2 = *(pnumber2);

	std::cout << r_number1 + r_number2 << std::endl;
}
