#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"
using namespace std;

DateTime::DateTime() : Date() , Time()
{
	
}

DateTime::DateTime(int a1, int b1, int c, int d, int e, int f) : Date(a1,b1,c) , Time(d,e,f)
{
	
}

void DateTime::print()
{
	cout << "Date: "<<endl;
	cout<<"Day: "<<getDay()<<endl;
	cout<<"Month: "<<getMonth()<<endl;
	cout<<"Year: "<<getyear()<<endl;

	cout<<"Second: "<<getSecond()<<endl;
	cout<<"Minute: "<<getMinute()<<endl;
	cout<<"Year: "<<getHour()<<endl;


}