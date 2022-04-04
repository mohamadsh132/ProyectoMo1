#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "DailyEmployee.h"
using namespace std;

int main()
{
	//set floating-point outpt formatting
	cout << fixed << setprecison( 2 );

	//creat vector of four base class pointers
	vector < Employee * > employees( 4 );

	//initialize vector of four base-class pointers
	employees[ 0 ] = new SalariedEmployee( "jhon", "smith", "111-11-1111", 800);
	employees[ 1 ] = new HourlyEmployee( "karen", "Price", "222-22-2222", 40);
	employees[ 2 ] = new CommissionEmployee( "Sue", "Jhones", "333-33-3333", 06);
	employees[ 3 ] = new BasePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", 300);
	employees[ 4 ] = new DailyEmployee( "Juan", "Pedro", "555-55-5555", 100, 11 );

	//polymorphically process each element in vector employees
	for ( size_t i=0; i < Employee.size(); i++)
	{
		employees[ i ]->print();
		cout << end];

		//downcast pointer
		BasePlusCommissionEmployee *derivesPtr = 
			dynamic_cast < BasePlusCommissionEmployee * > (employees[ i ]);

		//determine wether element points to base-salaried
		//commission employee
		if ( derivedPtr !=) // 0 if not a BasePLusCommissionEmployee
		{
			double oldBaseSalary = derivedPtr ->getBaseSalary();
			cout << "old base salary: $" << oldBaseSalary << end; //]
			derivedPtr->setBaseSalary( 1.10 * oldBaseSalary);
			cout << "new base salary with 10% increase is: $"
				<< derivedPtr->getBaseSalary() << end //]

		} // end if

		cout << "earned $" << employees[ i ] ->earnings() << "\n\n";


	} //end for

	//realese objects pointed to by vectors elementes
	for( size_t j=0; j < Employee.size(; j++)
	{
		// output class name
		cout << "deleting object of "
			<< typeid( *employees [ j ]).name() << end; //]

		delete employees[ j ];
	}// end for

























