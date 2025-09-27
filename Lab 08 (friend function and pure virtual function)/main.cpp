#include "Shape.h"
#include "Area.h"
int main(){
//task 01
    cout<<"------Task 1 (pure virtual function)------"<<endl;
	Circle c(5.9);
	Shape* s=&c;
	s->area();
//task 02(for error generation without pointer)only for checking
  /* Circle c1(7.9);
   Shape s=&c;	
	s->area();*/
	cout<<endl;
	cout<<endl;
//static member and function
   
	
	cout<<"------Task 2 (friend function)------"<<endl;
	Rectangle2 r1(4.0,5.0);
    Circle2 c1(3.0);

    cout<<"\nCombined Total Area:"<<totalArea(r1,c1);
	return 0;
}
