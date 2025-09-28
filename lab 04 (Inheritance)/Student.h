#include<iostream>
using namespace std;
class Person{
	string name;
	int age;
	public:
		Person(string n, int a){
			name=n;
			age=a;
		}
		void display_person_info(){
			cout<<"\nName:"<<name;
			cout<<"\nAge:"<<age;
		}
};
class Student:public Person{
	int studentid;
	public:
		Student(string n, int a, int id):Person(n,a){
			studentid =id;
		}
	  	void display_student_info(){
	  	display_person_info();
		cout<<"\nstudent id:"<<studentid;	
		}
		
};
