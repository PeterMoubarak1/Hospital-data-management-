#include <iostream>
#include "Bed.h"
using namespace std;

Bed::Bed()
{
	identifier = 0;
	set_ID();
	availability = 0; //if 0 -> available

}

void Bed::setAvailability()
{
	if (availability == 0)
	{
		availability = 1;
	}

	else if (availability == 1)
	{
		availability = 1;
	}
}

bool Bed::getAvailability()
{
	return availability;

}

void Bed::set_ID()
{
	unique_ID++;
	identifier = unique_ID;

}

int Bed::get_ID()
{
	return identifier;
}


int Bed::unique_ID = 0;