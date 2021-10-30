#include <iostream>
#include <cassert>

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	return false;
}

//Напишите функцию LaterInYear, проверяющую, какой из двух дней ближе к 
//Новому году (31.12, грядущему, а не прошедшему). Сделайте коммит.
int LaterInYear(int x1, int x2)
{
	assert(x1 < 32 && x1 > 0);
	assert(x2 < 32 && x2 > 0);
	if (x2 > x1) return x2;
	else return x1;

}

int SeconsInHours(int s)
{
	return s / 3600;
}

int main()
{
   std::cout << IsLeapYear(2024);
}
