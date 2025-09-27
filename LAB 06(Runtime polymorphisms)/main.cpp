
#include "Empolyee.h"
#include "Shape.h"

using namespace std;
int main(){
	
	   
	//01task
    Employee* emp1 = new PermanentEmployee(30000, 5000);
    Employee* emp2 = new ContractEmployee(500, 40);

    cout << "Permanent Employee Salary: " << emp1->calculateSalary() << endl;
    cout << "Contract Employee Salary: " << emp2->calculateSalary() << endl;

    delete emp1;
    delete emp2;
//task 2 
   
      
    return 0;
}

