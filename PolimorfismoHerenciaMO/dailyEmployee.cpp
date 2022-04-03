#include <iostream>
#include "dailyEmployee.h" //dailyEmployee class definition
using namespace std;

// constructor
dailyEmployee::dailyEmployee( const string &first, const string &last, const string &ssn, double salary): Employee(first,last,ssn)
{
	setDailySalary( salary );
} //end dailyEmployee constructor 

//Set salary
void dailyEmployee: setDailySalary( double salary)
{
	dailySalary = ( salary < 0.0 ) ? 0.0 : salary;  
} //end function setDailySalary

// return salary
double dailyEmployee: getDailySalary() const
{
	return dailySalary;
}//end function getDailySalary

//return salary
double dailyEmployee: getDailySalary() const
{
	return dailySalary;
} //end function getDailySalary

//calculate earnings;
//override pure virtual function earnings in employee
double dailyEmployee: earnings() const
{
	return getDailySalary;
} //end function earnings

//print dailyEmployees information
void dailyEmployee:print() const
{
	cout << "daily employee";
	Employee:print(); //reuse abstract base-class print function
	cout << "\ndaily salary: " << getDailySalary();
} //end function print
