#include "Calculator.h"
#include "Calculator2.h"

int main(){
    cout<<" ----- Task 1: Composition -----"<<endl;
    Calculator c1(4.0, 5.0);
    c1.multiply();
    c1.add();
    c1.lastResult();
    
    cout<<"\n"<<endl;
    cout<<" ----- Task 2: Aggregation -----"<<endl;
    Calculator2 c2(4.8, 8.9);  // shared calculator
    Student s1(&c2);
    Student s2(&c2);

    s1.resultMultiply();   // student 1 uses calculator
    s2.resultAdd();        // student 2 uses same calculator

    return 0;
}

