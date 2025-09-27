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
//for error showing of id this function not in corrected program
/*	static void showid(){
	 	cout<<"Id:"<<id;
	 	
	 }*/
};
int Student::count=0;


