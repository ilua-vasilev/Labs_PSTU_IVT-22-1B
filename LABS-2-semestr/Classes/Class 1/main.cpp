#include <iostream>
#include "linear_equation.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	linear_equation Equation;
	Equation.Init(5, 12);
	Equation.Show();
	Equation.root();
	Equation.Read();
	Equation.Show();
	Equation.root();
	return 0;
}
