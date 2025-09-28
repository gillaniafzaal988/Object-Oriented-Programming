#include <iostream>
#include "Employee.h"
#include "Shape.h"
using namespace std;

int main() {
    // Employees
    Employee* emp1 = new PermanentEmployee(30000, 5000);
    Employee* emp2 = new ContractEmployee(500, 40);

    cout << "Permanent Employee Salary: " << emp1->calculateSalary() << endl;
    cout << "Contract Employee Salary: " << emp2->calculateSalary() << endl;

    delete emp1;
    delete emp2;

    // Shapes
    double w = 5, h = 10, r = 7;
    Shape* rect = new Rectangle(w, h);
    Shape* circ = new Circle(r);

    cout << "Rectangle Area = " << rect->area() << endl;
    cout << "Circle Area = " << circ->area() << endl;

    delete rect;
    delete circ;

    return 0;
}

