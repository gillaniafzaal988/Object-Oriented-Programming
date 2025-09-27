
#include "Calculator.h"
#include "Distance.h"

using namespace std;
int main(){
	
	   
	//01task
	Calculator c1(6,7);
	cout<<"Additon:"<<c1.add()<<endl;
	cout<<"Division:"<<c1.divide()<<endl;
	cout<<"Multiplication:"<<c1.multiply()<<endl;
	cout<<"Subtraction:"<<c1.subtract()<<endl;
	Calculator c2(6.6,7);
	cout<<"Additon:"<<c2.addDouble()<<endl;
	cout<<"Division:"<<c2.divideDouble()<<endl;
	cout<<"Multiplication:"<<c2.multiplyDouble()<<endl;
	cout<<"Subtraction:"<<c2.subtractDouble()<<endl;
	cout<<endl;
	//task 2
	cout<<"-------Operator overloading-------"<<endl;
	Distance d1(7,8);
	Distance d2(7,8);
	if(d1==d2){
		cout<<"Equal"<<endl;
	}
    else{
		cout<<"Not Equal"<<endl;
	}
   
      
    return 0;
}
