#include<iostream>
#include<stdexcept>
using namespace std;

template <typename T1,typename T2>
class Calculator3{
    T1 num1;
    T2 num2;
public:
    Calculator3(T1 n1,T2 n2){
        num1=n1;
        num2=n2;
    }
    T1 add(){return num1+num2;}
    T1 subtract(){return num1-num2;}
    T1 multiply(){return num1*num2;}
    T1 divide(){
        if(num2==0){
            throw runtime_error("Division by zero error");
        }
        return num1/num2;
    }
};

