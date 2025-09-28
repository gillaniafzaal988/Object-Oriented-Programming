#pragma once
#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        cout << "Base Employee salary calculation called.";
        return 0;
    }
    virtual ~Employee() {}
};

class PermanentEmployee : public Employee {
    double basicSalary;
    double bonus;
public:
    PermanentEmployee(double b, double bo) {
        basicSalary = b;
        bonus = bo;
    }
    double calculateSalary() override {
        return basicSalary + bonus;
    }
};

class ContractEmployee : public Employee {
    double hourlyRate;
    double hoursWorked;
public:
    ContractEmployee(double h, double ho) {
        hourlyRate = h;
        hoursWorked = ho;
    }
    double calculateSalary() override {
        return hourlyRate * hoursWorked;  
    }
};

