
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class Calculator2{
    double num1;
    double num2;
public:
    Calculator2(double no1,double no2){
        num1 = no1;
        num2 = no2;
    }
    void multiply(){
        cout << "\nRESULT: " << num1 * num2;
    }
    void add(){
        cout << "\nRESULT: " << num1 + num2;
    }
};

class Student{
    Calculator2* cal;  // aggregation: Calculator2 exists independently
public:
    Student(Calculator2* c){
        cal = c;
    }
    void resultMultiply(){
        cal->multiply();
    }
    void resultAdd(){
        cal->add();
    }
};

