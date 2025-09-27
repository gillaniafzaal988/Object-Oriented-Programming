#include<iostream>
using namespace std;
class Employee{
	public:
	virtual	double calculateSalary(){
			cout<<"Base Employee salary calculation called.";
			return 0;
		}
};
class PermanentEmpoloyee: Employee{
	double basicSalary;
	double bonus;
	public:
		PermanentEmpoloyee(double b, double bo){
			basicSalary=b;
			bonus=bo;
		}
		double calculateSalary()override{
			return basicSalary+bonus;
		}
};
class ContractEmpoloyee: Employee{
	double hourlyRate;
	double hoursWorked;
	public:
		ContractEmpoloyee(double h, double ho){
			hourlyRate=h;
		    hoursWorked=ho;
		}
		double calculateSalary()override{
			return hourlyRate+hoursWorked;
		}
};



