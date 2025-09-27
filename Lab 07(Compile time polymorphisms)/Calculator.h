#include<iostream>
using namespace std;

class Calculator{
    double num1;
    double num2;
public:
    Calculator(double a=0,double b=0){
	num1=a;num2=b;} //constructor
    int add(){
	return num1+num2;}
    double addDouble(){
	return num1+num2;}
    int multiply(){
	return num1*num2;}
    double multiplyDouble(){
	return num1*num2;}
    int subtract(){
	return num1-num2;}
    double subtractDouble(){
	return num1-num2;}
    int divide(){
	return num1/num2;}
    double divideDouble(){
	return num1/num2;}
};

