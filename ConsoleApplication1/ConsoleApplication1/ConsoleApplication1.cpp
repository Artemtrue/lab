#include <iostream>

bool IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	return false;
}

int SecondsInMinute(int min)
{
	return min / 60;
}

int main()
{
   std::cout << IsLeapYear(2024);
}
