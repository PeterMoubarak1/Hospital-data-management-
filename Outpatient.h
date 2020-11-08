#pragma once
#include <iostream>
#include "Person.h"
#include "DateTime.h"
#include "Doctor.h"
using namespace std;

class Outpatient : public Person
{
	
private:
	DateTime *appointmentDate= new DateTime();
	Doctor *Dr = new Doctor();
	static int fee;  //Hospital charge

public:

	Outpatient();
	Outpatient(string n, DateTime a, Doctor b);
	virtual void print();




};

