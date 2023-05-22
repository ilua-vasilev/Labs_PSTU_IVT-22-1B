#include<iostream>
#include<string>
#include<exam.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	exam first;
	first.show();
	exam second("Баранов Евгений Александрович","Математика",4);
	second.show();
	exam third(*&first);
	third.show();
	exam dop;
	dop.SetSNP("Барабаш Данила Антонович");
	dop.GetSNP();
	dop.SetSubject("Информатика");
	dop.GetSubject();
	dop.SetMark(2);
	dop.GetMark();
	return 0;
}
