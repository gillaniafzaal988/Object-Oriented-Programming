#include<iostream>
using namespace std;

class Rectangle2;
class Circle2;

double totalArea(Rectangle2&,Circle2&); // friend function declaration

class Rectangle2{
    double width;
    double height;
public:
    Rectangle2(double w,double h){width=w;height=h;}
    friend double totalArea(Rectangle2&,Circle2&);
};

class Circle2{
    double radius;
public:
    Circle2(double r){radius=r;}
    friend double totalArea(Rectangle2&,Circle2&);
};

double totalArea(Rectangle2& r,Circle2& c){
    return (r.width*r.height + 3.14159*c.radius*c.radius);
}

