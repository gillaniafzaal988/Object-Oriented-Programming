#include<iostream>
using namespace std;
class Person{
	protected:
        string name;
        int age;
    public:
    	void setPerson(string n, int a){
    		name=n;
    		age=a;
		}
		void showPerson(){
			cout<<"\nPerson name:"<<name<<endl;
			cout<<"Person age:"<<age<<endl;
		}

};
class Student:public Person{
	private: 
	int rollno;
	public:
		void setStudent(string n, int a, int r){
        setPerson(n,a);
        rollno=r;
		}
		void showStudent(){
		showPerson();	
		cout<<"Roll no:"<<rollno;	
		}
};
