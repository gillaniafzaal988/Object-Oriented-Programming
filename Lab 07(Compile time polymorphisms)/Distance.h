#include<iostream>
using namespace std;
class Distance{
    double feet;
    double inches;
public:
    Distance(double f,double i){
        feet=f;
        inches=i;
    }
    bool operator==(const Distance& d){  // pass by const reference
        return (feet==d.feet && inches==d.inches);
    }
};
