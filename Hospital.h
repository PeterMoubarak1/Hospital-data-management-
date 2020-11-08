#pragma once
#include <iostream>
#include <string>
#include <array>
using namespace std;
#include "Bed.h"
#include "Doctor.h"
#include "Inpatient.h"
#include "DateTime.h"
class Hospital
{
private:

	Bed **capacity = new Bed *[500];
	Doctor **doctors = new Doctor*[100];  
	Inpatient **patients = new Inpatient*[500];

public:

	Hospital();
	int search_Bed();
	void addDoctor(Doctor a);
	void addpatient(Inpatient a);
	

};

