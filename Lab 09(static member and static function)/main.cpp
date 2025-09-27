#include "Student.h"
#include "Counter.h"
#include<iostream>
using namespace std;

int main(){
	 // ----- task 1 -----
	 Student s1;
	 Student s2;
	 s1.showcount();
	 cout<<endl;
	 
    // ----- Counter1 demonstration -----
    Counter1 c1;
    Counter1 c2;
    cout<<"\nCounter1 objects created:"<<Counter1::getCount();

    Counter1 c3;
    cout<<"\nCounter1 objects created after another object:"<<Counter1::getCount();
    cout<<endl;
     cout<<"\n----- Counter2 demonstration -----"<<endl;
    Counter2 c4;
    Counter2 c5;
    Counter2::print();  // prints 2

    Counter2 c6;
    Counter2::print();  // prints 3
      // ----- task 2 -----

    return 0;
}

