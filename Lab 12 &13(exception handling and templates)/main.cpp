#include "Calculator.h"
#include "Calculator3.h"
#include"Array.h"
#include "Logger.h"
int main(){
	//task 1
	cout<<"-------Task 1---------"<<endl;
	try{
		Calculator<int,int> c1(9,0);
		cout<<c1.divide();
		
	}
	catch (const runtime_error r){
		cout<<r.what();
	}
	
	
	//task 2
	cout<<"\n\n-------Task 2---------"<<endl;
	 try{
        Array a(1,3);
        a.show();

        Array b(5,2); // ? will throw exception
        b.show();
    }
    catch(out_of_range& e){
        cout<<"Exception:"<<e.what()<<endl;
    
}
    //task3
    cout<<"\n\n-------Task 3---------"<<endl;
try{
        Calculator3<int,int> c1(10,2);
        cout<<"\nAddition:"<<c1.add();
        cout<<"\nSubtraction:"<<c1.subtract();
        cout<<"\nMultiplication:"<<c1.multiply();
        cout<<"\nDivision:"<<c1.divide();

        Calculator3<int,int> c2(8,0); // ? will throw
        cout<<"\nDivision:"<<c2.divide();
    }
    catch(exception& e){
        cout<<"\nException:"<<e.what();
    }
    
    cout<<"\n\n-------Task 4---------"<<endl;
    Logger<string>::log("Program started");
    Logger<int>::log(100);
    Logger<double>::log(45.67);

return 0;}
