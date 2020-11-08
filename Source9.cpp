#include <iostream>
#include "Hospital.h"
#include "Doctor.h"
#include "Inpatient.h"
#include "Bed.h"
using namespace std;

Hospital::Hospital()
{

	for (int i = 0; i < 500; i++)
	{
		patients[i] = nullptr;

		capacity[i] = new Bed();
	}

	for (int i = 0; i < 100; i++)
	{
		doctors[i] = nullptr;
	}
}


void Hospital::addDoctor(Doctor a)
{
	for (int i = 0; i < 100; i++)
	{
		if (doctors[i] == nullptr)
		{

			*doctors[i] = a;
			break;
		}
	}
}

int Hospital::search_Bed()
{
	for (int i = 0; i < 500; i++)
	{
		if (capacity[i]->getAvailability() == 0)
		{
			return capacity[i]->getAvailability();
		}
	}
	
}

void Hospital::addpatient(Inpatient a)
{
	for (int i = 0; i < 500; i++)
	{
		if (patients[i] == nullptr)
		{
			*patients[i] = a;
			break;
		}
	}
}