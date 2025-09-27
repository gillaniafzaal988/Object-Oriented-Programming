#include<iostream>
using namespace std;

// ----- Counter1 -----
class Counter1{
    static int count;
public:
    Counter1(){count++;}
    static int getCount(){return count;}
};

int Counter1::count=0;

// ----- Counter2 -----
class Counter2{
    static int count;
public:
    Counter2(){count++;}
    static void print(){cout<<"\nTotal objects created:"<<count;}
};

int Counter2::count=0;

