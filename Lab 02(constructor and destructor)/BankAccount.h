#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	string accountNumber;
	string accountHolder;
	double balance;
	public:
		BankAccount(string n, string a, double b){
		accountNumber=n;
		accountHolder=a;
		balance=b;
		}
	void showAccountDetails(){
		cout<<"Account Number:"<<accountNumber<<endl;
		cout<<"Account Holder:"<<accountHolder<<endl;
		cout<<"Balance:"<<balance<<endl;
	}
};
