#include<iostream>
using namespace std;

class Display{
    double lastResult;
public:
    void display(double result){
        cout << "\nRESULT: " << result;
        lastResult = result;
    }
    void showLast(){
        cout << "\nLAST RESULT: " << lastResult;
    }
};

class Calculator{
    double num1;
    double num2;
    Display d;  // composition
public:
    Calculator(double no1,double no2){
        num1 = no1;
        num2 = no2;
    }
    void multiply(){
        double result = num1 * num2;
        d.display(result);
    }
    void add(){
        double result = num1 + num2;
        d.display(result);
    }
    void lastResult(){
        d.showLast();
    }
};

