#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
	ID = 0;
	name = " ";
}

Person::Person(string alpha)
{
	name = alpha;
	setID();

}

void Person::setID()
{
	identifier++;
	ID = identifier;
}

int Person:: getID()
{
	return ID;
}

string Person::getName()
{
	return name;
}



int Person::identifier = 0;
