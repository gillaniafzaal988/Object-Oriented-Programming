#include<iostream>
#include "Students.h"
#include "task 03 Voting eligibility.h"
#include "task 04 temperature converter.h"
#include "task 02 rectangle.h"
#include "task 05 calculator.h"
#include "task 06 encapsulation.h"
using namespace std;
int main(){
	//task 01
	Student s1;
	s1.getdata();
	s1.displaydata();
	
	
		
	//task 02
	rectangle r;
	r.setdimension();
	r.area();
	r.perimeter();
    
	
	//task 03
	  Voter voter;
    voter.input();

    voter.printName();
    if (voter.isEligible()) {
        cout<<" is eligible to vote."<<endl;
    } else {
        cout<<" is not eligible to vote."<<endl;
    }
	
	//task 04
	Temperature t;
	t.celsius=37;
	t.Fahrenheitconversion();
	t.display();
	
	//task 05
	char operation;
	calculator c;
	c.input();
	cout<<"choose operation:";
	cin>>operation;
	if (operation=='+'){
		cout<<"add :"<<c.add();
	}
	else if (operation=='-'){
		cout<<"subtraction :"<<c.subtract();
	}
	else if (operation=='*'){
		cout<<"multiplication :"<<c.multiply();
	}
	else if (operation=='/'){
		cout<<"division :"<<c.divide();
	}
	else {
		cout<<"invalid choice!";
	}
	//task 06
	 Product p;

    double pr;
    int q;

    cout<<"\nEnter product name (no spaces): ";
    
    p.setName("");

    cout<<"Enter product price: ";
    cin>>pr;
    p.setPrice(pr);

    cout<<"Enter product quantity: ";
    cin>>q;
    p.setQuantity(q);

    cout<<"\n--- Product Information ---"<<endl;
    cout<<"Name: "<<p.getName()<<endl;
    cout<<"Price: "<<p.getPrice()<<endl;
    cout<<"Quantity: "<<p.getQuantity()<<endl;

return 0;
	
	
}
