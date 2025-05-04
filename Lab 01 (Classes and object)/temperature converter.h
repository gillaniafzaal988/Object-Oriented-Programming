#include<iostream>
using namespace std;
class Temperature{
	private:
		double fahrenheit;
	public:
		double celsius;
		void Fahrenheitconversion();
		void display();
};
void Temperature::Fahrenheitconversion(){
	fahrenheit=(celsius*1.8)+32;
}
void Temperature::display(){
	cout<<"\nfahrenheuit:"<<fahrenheit;
}
