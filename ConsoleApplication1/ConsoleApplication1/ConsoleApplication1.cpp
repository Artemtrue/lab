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

//Напишите функцию IsYearOfApocalypse, определяющую был ли в указанный год апокалипсис 
//(концы света были в 1992, 2005, 2011 годах). Напишите тесты. Сделайте коммит.
bool IsYearOfApocalypse(int year)
{
	return (year == 1992 || year == 2005 || year == 2011);
	
}

int main()
{
	assert(IsYearOfApocalypse(1992) == 1);
   assert( IsYearOfApocalypse(2005)==1);
   assert(IsYearOfApocalypse(2011) == 1);
   assert(IsYearOfApocalypse(2012) == 0);
}
