#include<iostream>
using namespace std;
class temperature{
	private:
		double fahrenheit;
	public:
		double celsius;
		void Fahrenheitconversion();
		void display();
};
void temperature::Fahrenheitconversion(){
	fahrenheit=(celsius*1.8)+32;
}
void temperature::display(){
	cout<<"\nfahrenheuit:"<<fahrenheit;
}
