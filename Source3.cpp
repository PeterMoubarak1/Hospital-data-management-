#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"
#include "Person.h";
#include "Doctor.h"
#include "Outpatient.h"
#include "Inpatient.h"
#include "Hospital.h"
#include "Bed.h"
using namespace std;
int main()
{
	DateTime a(1,2,3,4,5,6);
	a.print();
	
	DateTime b(2, 3, 4, 5, 6, 7);
	b.print();

	Doctor d("LOL", "LOL", "LOL");
	d.print();

	Hospital();
	Inpatient a("Peter",a,b,d)



}