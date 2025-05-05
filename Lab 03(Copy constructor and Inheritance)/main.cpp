#include "BankAccount.h"
#include "UpdateBank.h"
#include "Person.h"
#include "Shape.h"
int main(){
	//Task 01
	BankAccount acc1(1000);
    BankAccount acc2 = acc1;
    acc2.setBalance(5000);
    acc1.showBalance();
    acc2.showBalance();
	//task 02
   UpdateBank acc3(1000);
    UpdateBank acc4= acc3;
    acc4.setBalance(5000);
    acc3.showBalance();
    acc4.showBalance();
    cout<<endl;
    // task 03
    Student s;
    s.setStudent("Afzaal", 18, 4);
    s.showStudent();
    cout<<endl;
    //task 04
    Rectangle r;
    return 0;

	return 0;
}
