#pragma once
#include <iostream>
#include <string>

class Person
{
protected:
	std::string Name;
	int Age;
public:
	Person(void);
	Person(std::string, int);
	Person(Person&);
	~Person(void);
	std::string getName(void);
	int getAge(void);
	void setName(std::string);
	void setAge(int);
	friend std::istream& operator>>(std::istream& in, Person& p);
	friend std::ostream& operator<<(std::ostream& out, const Person& p);
	Person& operator=(const Person&);
};
