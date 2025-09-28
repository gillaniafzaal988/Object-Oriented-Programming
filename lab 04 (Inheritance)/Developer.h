#include <iostream>
using namespace std;

class Employee2 {
    string name;
    double salary;
public:
    void setName() {
        cout << "Enter name: ";
        cin >> name;
    }
    void setSalary() {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class Developer : public Employee2 {
    string programmingLanguage;
public:
    void setProgrammingLanguage() {
        cout << "Enter programming language: ";
        cin >> programmingLanguage;
    }
    void displayDeveloper() {
        displayEmployee();  // also show base class info
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

class Designer : public Employee2 {
    string designTool;
public:
    void setDesignTool() {
        cout << "Enter design tool: ";
        cin >> designTool;
    }
    void displayDesigner() {
        displayEmployee();  // also show base class info
        cout << "Design Tool: " << designTool << endl;
    }
};
