#include <iostream>
#include <vector>
#include "Person.h"
#include "Doctor.h"
using namespace std;

Doctor::Doctor() : Person()
{
	speciality = " ";
	mednumber = " ";
}


Doctor::Doctor(string a, string b, string c ) : Person(a)
{
	mednumber = b;
	speciality = c;
}

void Doctor::print()
{
	cout << "Id: "<<getID()<<endl;
	cout << "Name: " << getName()<<endl;
	cout << "Medical license number: " << mednumber<<endl;
	cout << "Speciality: " << speciality << endl;
	
}

