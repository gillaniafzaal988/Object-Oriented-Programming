#include<iostream>
using namespace std; 
class Student {
	public:
	int id=0;
	static int count;
		Student(){
			count++;
			id++;
		}
	
	static void showcount(){
	 	cout<<"count:"<<count;
	 	
	 	
	 }
/*	static void showid(){
	 	cout<<"Id:"<<id;
	 	
	 }*/
};
int Student::count=0;

