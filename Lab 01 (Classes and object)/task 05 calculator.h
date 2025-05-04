#include<iostream>
using namespace std;
class calculator{
	private:
	float num1;
	float num2;
	public:
		void input(){
			cout<<"\nNUMBER 1:";
			cin>>num1;
			cout<<"NUMBER 2:";
			cin>>num2;
		}
		double add(){
			return num1+num2;
		}
		double subtract(){
			return num1-num2;
		}
		double multiply(){
			return num1*num2;
		}
		double divide(){
			return num1/num2;
		}
};
