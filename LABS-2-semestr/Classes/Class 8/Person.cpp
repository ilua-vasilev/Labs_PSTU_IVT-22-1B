#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(void)
{
	Name = "";
	Age = 0;
}
Person::~Person(void)
{
}
void Person::Show(void)
{
	cout << "���: " << Name << endl;
	cout << "�������: " << Age << endl;
}
void Person::Input(void)
{
	cout << "���: ";
	cin >> Name;
	cout << "�������: ";
	cin >> Age;
	cout << endl;
}
Person::Person(string name, int age)
{
	Name = name;
	Age = age;
}
Person::Person(const Person& p)
{
	Name = p.Name;
	Age = p.Age;
}
void Person::setName(string name)
{
	Name = name;
}
void Person::setAge(int age)
{
	Age = age;
}
string Person::getName(void)
{
	return Name;
}
int Person::getAge(void)
{
	return Age;
}
Person& Person::operator=(const Person& p)
{
	if (this == &p)
	{
		return *this;
	}
	Name = p.Name;
	Age = p.Age;
	return *this;
}
void Person::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		switch (e.command)
		{
		case cmGet:
			cout << "���: " << getName() << endl;
			break;
		}
	}
}