#pragma once
#include "Person.h"
#include "Doctor.h"
#include "Bed.h"
#include "DateTime.h"
#include "Hospital.h"
class Inpatient : public Person
{
private:

	int Bed_ID;
	Doctor *DR=new Doctor();
	DateTime *admission = new DateTime();
	DateTime *discharge = new DateTime();
	int price;
	

public:

	Inpatient();
	Inpatient(string n, DateTime a, DateTime b, Doctor c);
	void setBed_ID(Hospital a);
	int getBed_ID();
	
	int cost();
	virtual void print();




};

