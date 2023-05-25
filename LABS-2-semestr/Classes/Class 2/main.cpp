#include <iostream>
#include <string>
#include <windows.h>
#include "Country.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string capital;
	int number_of_inhabitants;
	double square;
	cout << "Ââåäèòå äàííûå ñòðàíû" << endl;
	cout << "Ñòîëèöà: "; cin >> capital;
	cout << "Êîëè÷åñòâî æèòåëåé: "; cin >> number_of_inhabitants;
	cout << "Ïëîùàäü: "; cin >> square;
	cout << endl;
	Country country1;
	country1.show();
	cout << endl;
	Country country2(capital, number_of_inhabitants, square);
	country2.show();
	cout << endl;
	Country country3(country2);
	country3.show();
	cout << endl;
	country1.set_Capital("Ìîñêâà");
	country1.set_Number_of_inhabitants(6732562);
	country1.set_Square(2134);
	country1.show();
	cout << endl;
	return 0;
}
