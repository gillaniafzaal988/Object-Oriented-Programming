#include<iostream>
using namespace std; 
class Shape{
	public:
	virtual double area()=0;
};
class Circle: public Shape{
	double radius;
	public:
	Circle(double r){
		radius=r;
	}
	
	double area() override{
		cout<<"area is:"<<3.14*radius*radius;
	}
};

class Rectangle: public Shape{
	double length;
	double width;
	public:
	Rectangle(double l, double w){
		length=l;
		width=w;
	}
	
	double area() override{
		cout<<"area is:"<<length*width;
	}
};


