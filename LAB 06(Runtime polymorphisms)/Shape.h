#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() {
        cout << "no area" << endl;
        return 0;  // fixed: must return a value
    }
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};

