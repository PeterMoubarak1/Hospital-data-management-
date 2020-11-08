#include <iostream>
#include <string>
#include "Outpatient.h"
#include "Doctor.h"
#include "Person.h"
#include "DateTime.h"
#include "Date.h"
#include "Time.h"
using namespace std;

Outpatient::Outpatient() : Person()
{
	appointmentDate = nullptr;
	Dr = nullptr;

}

Outpatient::Outpatient(string n, DateTime a, Doctor b) : Person(n)
{
	*appointmentDate = a;
	*Dr = b;
}

void Outpatient::print()
{
	cout << "Name: " << getName();
	cout << "ID: " << getID();
	cout << "Doctor:" << endl;
	Dr->print();
	cout << "Fee: " << fee << endl;
}

int Outpatient::fee = 50;