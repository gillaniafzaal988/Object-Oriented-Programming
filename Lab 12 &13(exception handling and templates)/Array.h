#include<iostream>
#include<stdexcept>

using namespace std;
class Array{
    double array[4]={0.0,0.1,0.2,0.3};
    double value1,value2;
public:
    Array(int index1,int index2){
        if(index1<0||index1>=4||index2<0||index2>=4){ 
            throw out_of_range("invalid index");
        }
        value1=array[index1];
        value2=array[index2];
    }
    void show(){
        cout<<"value 1:"<<value1<<endl;
        cout<<"value 2:"<<value2<<endl;
    }
};

