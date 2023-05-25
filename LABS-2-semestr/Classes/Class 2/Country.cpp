#include <iostream>
#include <string>
#include "Country.h"
using namespace std;

Country::Country()
{
	Capital = "";
	Number_of_inhabitants = 0;
	Square = 0;
}
Country::Country(string capital, int number_of_inhabitants, double square)
{
	Capital = capital;
	Number_of_inhabitants = number_of_inhabitants;
	Square = square;
}
Country::Country(Country& tmp)
{
	Capital = tmp.Capital;
	Number_of_inhabitants = tmp.Number_of_inhabitants;
	Square = tmp.Square;
}
Country::~Country()
{
	cout << "Óäàëåíèå" << endl;
}
void Country::show()
{
	cout << "Ñòîëèöà ýòîé ñòðàíû: " << Capital << "\n" << "Êîëè÷åñòâî æèòåëåé :" << Number_of_inhabitants << "\n" << "Ïëîùàäü: " << Square << "\n";
}
string Country::get_Capital()
{
	return Capital;
}
int Country::get_Number_of_inhabitants()
{
	return Number_of_inhabitants;
}
double Country::get_Square()
{
	return Square;
}
void Country::set_Capital(string capital)
{
	Capital = capital;
}
void Country::set_Number_of_inhabitants(int number_of_inhabitants)
{
	Number_of_inhabitants = number_of_inhabitants;
}
void Country::set_Square(double square)
{
	Square = square;
}
