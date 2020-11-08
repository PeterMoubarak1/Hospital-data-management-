#include <iostream>
#include "Date.h"
using namespace std;



Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::Date(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getyear()
{
	return year;
}