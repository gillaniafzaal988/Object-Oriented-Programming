#include<iostream>
using namespace std;
class BankAccount {
private:
    float* balance;

public:
    BankAccount(float b) {
        balance=new float;
        *balance=b;
        cout<<"Constructor called"<<endl;
    }

    ~BankAccount() {
        cout<<"Destructor called for balance="<<*balance<<endl;
        delete balance;
    }

    void setBalance(float b) {
        *balance=b;
    }

    void showBalance() {
        cout<<"Balance="<<*balance<<endl;
    }
};
