#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee( const string &first, const string &last, const string &ssn, double sales, double rate, double salary): CommissionEmployee(first,last,ssn, sales, rate)

{
	setBaseSlary( salary ); //validate and store base salary
} //end BasePlusCommissionEmployee constructor

//set base salary
void BasePlusCommissionEmployee:: setBaseSlary( double salary)
{
	commissionRate = (( salary < 0.0)?  0.0 : salary);
} //end function setBaseSalary

//return Base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
} // end function getBaseSalary

//calculate earnings
//overrride virtual function earings in CommissionEmployee
double BasePlusCommissionEmployee:: earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
} // end function earnings

//calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
	// CAN ACCES PROTECTED DATA OF BASE CLASS
	return baseSalary + ( commissionRtae * grossSales);
} // end function earnings

// print BasePlusCommissionEmployees information
void BasePlusCommissionEmployee::print() const
{
	cout << "Base-salaried ";
	CommissionEmployee::print(); //code reuse
	cout <<"; base salary " << getBaseSalary()
} //end function print
