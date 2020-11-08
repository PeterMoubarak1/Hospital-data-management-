#pragma once
class Time
{
private:
	
	int second;
	int minute;
	int hour;

public:

	Time();
	Time(int, int, int);

	int getSecond();
	int getMinute();
	int getHour();

};

