#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	int n_new;
	int* ptr = &n;

	std::cout << "Ââåäèòå çíà÷åíèå ïåðåìåííîé n" << std::endl;
	std::cin >> *ptr;

	std::cout << "Ââåäèòå íîâîå çíà÷åíèå ïåðåìåííîé" << std::endl;
	std::cin >> n_new;

	*ptr = n_new;

	std::cout << "Èçìåí¸ííîå çíà÷åíèå ïåðåìåííîé ðàâíî " << n << std::endl;

	return 0;
}