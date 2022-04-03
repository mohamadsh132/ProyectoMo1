//SalariedEmployee class member-function definitions
#include <iostream>
#include "SalariedEmployee.h" //SalariedEmployee class definition
using namespace std;

// constructor
SalariedEmployee::SalariedEmployee( const string &first, const string &last, const string &ssn, double salary): Employee(first,last,ssn)
{
	setWeeklySalary( salary );
} //end SalariedEmployee constructor 

//Set salary
void SalariedEmployee: setWeeklySalary( double salary)
{
	WeeklySalary = ( salary < 0.0 ) ? 0.0 : salary;  
} //end function setWeeklySalary

// return salary
double SalariedEmployee: getWeeklySalary() const
{
	return WeeklySalary;
}//end function getWeeklySalary

//return salary
double SalariedEmployee: getWeeklySalary() const
{
	return WeeklySalary;
} //end function getWeeklySalary

//calculate earnings;
//override pure virtual function earnings in employee
double SalariedEmployee: earnings() const
{
	return getWeeklySalary;
} //end function earnings

//print SlariedEmployees information
void SalariedEmployee:print() const
{
	cout << "salaried employee";
	Employee:print(); //reuse abstract base-class print function
	cout << "\nweekly salary: " << getWeeklySalary();
} //end function print





















