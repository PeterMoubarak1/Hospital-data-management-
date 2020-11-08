#include <iostream>
#include "Time.h"
using namespace std;


Time::Time()
{
	second = 0;
	minute = 0;
	hour = 0;

}

Time::Time(int a, int b, int c)
{
	second = a;
	minute = b;
	hour = c;
}


int Time::getSecond()
{
	return second;
}

int Time::getMinute()
{
	return minute;
}

int Time::getHour()
{
	return hour;
}