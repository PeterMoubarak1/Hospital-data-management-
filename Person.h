#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	int ID;
	string name;
	static int identifier;

public:
	Person();
	Person(string name);
	void setID();
	int getID();
	string getName();
	virtual void print()=0;



};

