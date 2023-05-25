#pragma once
#include <iostream>
#include <string>
using namespace std;
class Country
{
	string Capital;
	int Number_of_inhabitants;
	double Square;
public:
	Country();
	Country(string capital, int number_of_inhabitants, double square);
	Country(Country& tmp);
	~Country();
	void show();
	string get_Capital();
	int get_Number_of_inhabitants();
	double get_Square();
	void set_Capital(string capital);
	void set_Number_of_inhabitants(int number_of_inhabitants);
	void set_Square(double square);
};
