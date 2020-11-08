#pragma once
#include <iostream>
#include "Date.h"
#include "Time.h"

class DateTime : public Time , public Date
{
private:


public:

	DateTime();
	DateTime(int,int,int,int,int,int);
	virtual void print();


};

