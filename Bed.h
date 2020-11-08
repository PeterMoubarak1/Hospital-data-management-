#pragma once
#include <iostream>
using namespace std;
class Bed
{
private:

	int identifier;
	static int unique_ID;
	bool availability;


public:

	Bed();
	void setAvailability();
	bool getAvailability();
	void set_ID();
	int get_ID();
	



};

