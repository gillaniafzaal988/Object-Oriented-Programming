#include<iostream>
#include<string>
#include "Employee.h"
#include "BankAccount.h"
#include "Rectangle.h"
#include "Locker.h"
using namespace std;
int main(){
	//task 01
	Employee Em;
	Em.displayDetails();
	
	//task 02
	BankAccount b("PK0309800780100","Muhammad Awais",10000.0);
	b.showAccountDetails();
	
	//task 03
    Rectangle r1;
    Rectangle r2(5.0,3.0);
    Rectangle r3(4.0);
    cout<<"Rectangle 1:"<<endl;
    r1.display();
    cout<<endl;
    cout<<"Rectangle 2:"<<endl;
    r2.display();
    cout<<endl;
    cout<<"Rectangle 3 (Square):"<<endl;
    r3.display();
    cout<<endl;
    //task 04
     {
        Locker locker1;
    }
    Locker* locker2=new Locker();
    delete locker2;
	return 0;
}
