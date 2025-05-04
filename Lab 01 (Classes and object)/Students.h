#include<iostream>
using namespace std;
class Student{
	private:
	string name;
	int rollno;
	float marks;
	public:
	void getdata(){
		cout<<"enter your name"<<endl;
		cin>>name;
		cout<<"enter your rollno"<<endl;
		cin>>rollno;
		cout<<"enter your marks"<<endl;
		cin>>marks;
	}
		void displaydata(){
		cout<<"Name:"<<name<<endl;
		cout<<"Rollno:"<<rollno<<endl;
		cout<<"Marks:"<<marks<<endl;
	}
};







