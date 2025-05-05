#include <iostream>
using namespace std;
class UpdateBank {
private:
    float* balance;

public:
    UpdateBank(float b) {
        balance = new float;
        *balance = b;
        cout<<"Constructor called"<<endl;
    }
    UpdateBank(const UpdateBank& other) {
        balance = new float;
        *balance = *(other.balance);
        cout<<"Deep Copy Constructor called"<<endl;
    }
    ~UpdateBank() {
        cout<<"Destructor called for balance="<<*balance<<endl;
        delete balance;
    }
    void setBalance(float b) {
        *balance = b;
    }
    void showBalance() {
        cout<<"Balance="<<*balance<<endl;
    }
};
