#pragma once
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
#include <vector>

class Doctor : public Person
{
private:

	string mednumber;
	string speciality;
	vector<Person*>patients;


public:

	Doctor();
	Doctor(string a, string b , string c);
	virtual void print();

};

//ADD patient LATER!!!!