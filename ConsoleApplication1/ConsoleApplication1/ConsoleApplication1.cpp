#include <iostream>
#include <cassert>

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	return false;
}

int LaterInYear(int x1, int x2)
{
	assert(x1 < 32 && x1 > 0);
	assert(x2 < 32 && x2 > 0);
	if (x2 > x1) return x2;
	else return x1;

}

//Напишите функцию DaysInYear, определяющую количество дней в данном году. Сделайте коммит.
int DaysInYear(int year)
{
	if (IsLeapYear(year)) return 366;
	return 365;
}

int main()
{
   std::cout << IsLeapYear(2024);
}
