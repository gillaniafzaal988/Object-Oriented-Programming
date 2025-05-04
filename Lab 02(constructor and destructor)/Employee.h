#include<iostream>
using namespace std;
class Employee{
	int id; 
	string name;
	float salary;
	public:
		Employee(){
			id=0;
			name="not assigned";
			salary=0.0f;
		}
		void displayDetails(){
			cout<<"Employee: "<<name<<endl;
			cout<<"Id: "<<id<<endl;
			cout<<"Salary: " <<salary<<endl;    
		}
};
