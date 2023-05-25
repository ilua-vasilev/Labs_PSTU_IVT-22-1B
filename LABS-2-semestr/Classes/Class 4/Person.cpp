#include <iostream>
#include "Person.h"
#include <string>

Person::Person()
{
	Name = "";
	Age = 0;
}
Person::Person(std::string name, int age)
{
	Name = name;
	Age = age;
}
Person::Person(Person& t)
{
	Name = t.Name;
	Age = t.Age;
}
Person::~Person() {};
std::string Person::getName()
{
	return Name;
}
int Person::getAge()
{
	return Age;
}
void Person::setName(std::string name)
{
	Name = name;
}
void Person::setAge(int age)
{
	Age = age;
}
std::istream& operator>>(std::istream& in, Person& p)
{
	std::cout << "Èìÿ: "; in >> p.Name;
	std::cout << "Âîçðàñò: "; in >> p.Age;
	return in;
}
std::ostream& operator<<(std::ostream& out, const Person& p)
{
	return (out << "Èìÿ: " << p.Name << "\n" << "Âîçðàñò: " << p.Age << "\n");
}
Person& Person::operator=(const Person& t)
{
	if (&t == this)
	{
		return *this;
	}
	Name = t.Name;
	Age = t.Age;
	return *this;
}
