#pragma once
#include <iostream>
using namespace std;

class Money
{
	long rub;
	int kop;
public:
	Money();
	Money(long RUB, int KOP);
	Money(Money& tmp);
	~Money();
	long get_rub();
	int get_kop();
	void set_rub(long RUB);
	void set_kop(int KOP);
	friend istream& operator>>(istream& in, Money& A);
	friend ostream& operator<<(ostream& out, Money& A);
	Money& operator=(const Money& A);
	Money operator+(Money& A);
	Money operator-(Money& A);
};
