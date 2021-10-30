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

int DaysInYear(int year)
{
	if (IsLeapYear(year)) return 366;
	return 365;
}

//Напишите функцию DaysInYearRange, определяющую суммарное количество дней во всех годах находящихся между заданными годами включительно.
int DaysInYearRange(int year1, int year2)
{
	int count = 0;
	for (int i = year1; i <= year2; i++)
	{
		count += DaysInYear(i);
	}
	return count;
}



int main()
{
	std::cout << DaysInYearRange(2023, 2024); //731
}
