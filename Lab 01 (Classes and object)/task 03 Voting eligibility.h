#include<iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    void input();
    bool isEligible(); // only return true/false
    void printName();  // just to access name, not a getter
};

void Voter::input() {
    cout<<"\nenter name:"; cin>>name;
    cout<<"enter age:";  cin>>age;
}

bool Voter::isEligible() {
    return age >= 18;
}

void Voter::printName() {
    cout<<name;
}

