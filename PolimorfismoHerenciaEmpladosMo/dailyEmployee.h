#ifndef DAILY_H
#define DAILY_H

#include "Employee.h" //Employee class definition

class dailyEmployee: public Employee
{
public:

	dailyEmployee( const string &, const string &, const string &, double = 0.0);

	void setDailySalary( double ); //set daily salary
	double getDailySalary() const; //return daily salary

	//keyword virtual signals intent to override
	virtual double earnings() const; //calculate earnings
	virtual void print() const; // print dailyEmployee object

private:
	double getDailySalary; // salary per day

}; //end class dailyEmployee

#endif //DAILY_H
