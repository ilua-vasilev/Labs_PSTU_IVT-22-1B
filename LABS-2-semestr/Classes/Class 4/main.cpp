#include <iostream>
#include "Person.h"
#include "Student.h"
#include <string>

void f1(Person& f)
{
	f.setName("Âîâà");
	std::cout << f << "\n";
}

Person f2()
{
	Student s("Îëåã", 20, 3);
	return s;
}

int  main()
{
	setlocale(LC_ALL, "rus");
	Person human1("Ïåòÿ", 19);
	std::cout << human1;
	std::cout << std::endl;

	Student human2("Èâàí", 18, 1);
	std::cout << human2;
	std::cout << "Ãîä ñ óâåëè÷åíèåì: " << human2.increase_year_of_study() << "\n";

	std::cout << std::endl;
	Student human3 = human2;
	std::cout << human3;
	std::cout << std::endl;
	Student human4;
	f1(human4);
	human1 = f2();
	std::cout << human1;
	return 0;
}

