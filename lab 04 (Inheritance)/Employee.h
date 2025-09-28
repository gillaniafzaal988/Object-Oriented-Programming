#include<iostream>
using namespace std;
class Person2{
	string name;
	int age;
	public: 
		Person2(string n,int a){
			name=n;
			age=a;
		}
		void display_person2(){
			cout<<"\nName:"<<name;
			cout<<"\nAge:"<<age;
		}
};
class Employee:public Person2{
	int employeeid;
	public:
		Employee(string n,int a,int id):Person2(n,a){
			employeeid=id;
		}
		void display_employee(){
			display_person2();
			cout<<"\nEmployeeID:"<<employeeid;
		}	
};
class Manager:public Employee{
	string department;
	public:
		Manager(string d,string n,int a,int id):Employee(n,a,id){
			department=d;
		}
		void display_manager(){	
			display_employee();
			cout<<"\nDepartment:"<<department;
		}	
};


