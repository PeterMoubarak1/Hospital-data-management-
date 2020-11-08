#include <iostream>
#include "DateTime.h"
#include "Person.h"
#include "Inpatient.h"
#include "Hospital.h"
using namespace std;

Inpatient::Inpatient() : Person()
{
	DR = nullptr;
	admission = nullptr;
	discharge = nullptr;
	Bed_ID = 0;
	price = 0;

}

Inpatient::Inpatient(string n, DateTime a, DateTime b, Doctor c) :Person(n)
{
	
	*admission = a;
	*discharge = b;
	*DR = c;
	
}

void Inpatient::setBed_ID(Hospital a)
{
	
	Bed_ID=a.search_Bed();

}

int Inpatient::getBed_ID()
{
	return Bed_ID;
}


int Inpatient::cost()          // Let's say $50 dollars a day!
{

	int duration;
	int year = (discharge->getyear() - admission->getyear()) * 365;
	int month=(discharge->getMonth() - admission->getMonth()) * 30;
	int day = (discharge->getDay() - admission->getDay());

	price = duration * 50;
	return price;

}



void Inpatient::print()
{
	cout << "Name: " << getName();
	cout << "ID: " << getID();
	cout << "Doctor: " << DR->getName();
	cout << "Bed ID: " << Bed_ID;
	cout << "Price: " << cost;

}