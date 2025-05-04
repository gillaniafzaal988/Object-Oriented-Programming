#include<iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle() {
        length=1.0;
        width=1.0;
    }
    Rectangle(float l,float w) {
        length=l;
        width=w;
    }
    Rectangle(float side) {
        length=side;
        width=side;
    }
    float area() {
        return length*width;
    }
    void display() {
        cout<<"Length: "<<length<<", Width: "<<width<<endl;
        cout<<"Area: "<<area()<<endl;
    }
};



