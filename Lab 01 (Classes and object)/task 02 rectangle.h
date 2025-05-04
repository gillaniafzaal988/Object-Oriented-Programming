#include<iostream>
using namespace std;
class rectangle{
	private:
	int length;
	int width;
	public:
		void setdimension();
		void area();
		void perimeter();
};
void rectangle::setdimension(){
cout<<"\nenter your length:";   cin>>length;
cout<<"enter your width:";	 cin>>width;
}
void rectangle::area(){
	cout<<"Area:"<<length*width;
}
void rectangle::perimeter(){	
    cout<<"\nperimeter:"<<2*(length+width);
}



