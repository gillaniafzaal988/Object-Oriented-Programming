#include<iostream>
using namespace std;
#include<stdexcept>
template <typename T1,typename T2>
class Calculator{
	T1 nominator;
	T2 denominator;
	public:
		 Calculator(T1 n, T2 d){
		 	nominator=n;
		 	denominator=d;
		 }
		 double divide(){
		 	if (denominator==0){
		 		throw runtime_error ("error!");
			 }
		     return	 nominator/denominator;
		 }
		 
};
